// Fill out your copyright notice in the Description page of Project Settings.


#include "TcpSocketSubsystem.h"

#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "HAL/RunnableThread.h"
#include "Async/Async.h"
#include <string>

#include "ResponseSettings.h"
#include "Logging/MessageLog.h"
#include "HAL/UnrealMemory.h"

UTcpSocketSubsystem::UTcpSocketSubsystem()
	:UEngineSubsystem()
{
}

void UTcpSocketSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UTcpSocketSubsystem::Deinitialize()
{
	Super::Deinitialize();
}


void UTcpSocketSubsystem::Connect(const FString& ipAddress, int32 port, const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected,
	const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId)
{
	DisconnectedDelegate = OnDisconnected;
	ConnectedDelegate = OnConnected;
	MessageReceivedDelegate = OnMessageReceived;

	ConnectionId = TcpWorkers.Num();

	TWeakObjectPtr<UTcpSocketSubsystem> thisWeakObjPtr = TWeakObjectPtr<UTcpSocketSubsystem>(this);
	TSharedRef<FTcpSocketWorker> worker(new FTcpSocketWorker(ipAddress, port, thisWeakObjPtr, ConnectionId, ReceiveBufferSize, SendBufferSize, TimeBetweenTicks));
	TcpWorkers.Add(ConnectionId, worker);
	worker->Start();
}

void UTcpSocketSubsystem::Disconnect(int32 ConnectionId)
{	
	auto worker = TcpWorkers.Find(ConnectionId);
	if (worker)
	{
		UE_LOG(LogTemp, Log, TEXT("Tcp Socket: Disconnected from server."));
		worker->Get().Stop();
		TcpWorkers.Remove(ConnectionId);
	}
}

bool UTcpSocketSubsystem::SendData(int32 ConnectionId /*= 0*/, TArray<uint8> DataToSend)
{
	if (TcpWorkers.Contains(ConnectionId))
	{
		if (TcpWorkers[ConnectionId]->isConnected())
		{
			TcpWorkers[ConnectionId]->AddToOutbox(DataToSend);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Log: Socket %d isn't connected"), ConnectionId);
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Log: SocketId %d doesn't exist"), ConnectionId);
	}
	return false;
}

void UTcpSocketSubsystem::ExecuteOnMessageReceived(int32 ConnectionId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj)
{
	if (!thisObj.IsValid())
		return;	

	if (!TcpWorkers.Contains(ConnectionId)) {
		return;
	}

	TArray<uint8> msg = TcpWorkers[ConnectionId]->ReadFromInbox();
	MessageReceivedDelegate.ExecuteIfBound(ConnectionId, msg);
}

TArray<uint8> UTcpSocketSubsystem::Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B)
{
	TArray<uint8> ArrayResult;

	for (int i = 0; i < A.Num(); i++)
	{
		ArrayResult.Add(A[i]);
	}

	for (int i = 0; i < B.Num(); i++)
	{
		ArrayResult.Add(B[i]);
	}

	return ArrayResult;
}

TArray<uint8> UTcpSocketSubsystem::Conv_IntToBytes(int32 InInt)
{
	TArray<uint8> result;
	for (int i = 0; i < 4; i++)
	{
		result.Add(InInt >> i * 8);
	}
	return result;
}

TArray<uint8> UTcpSocketSubsystem::Conv_StringToBytes(const FString& InStr)
{
	FTCHARToUTF8 Convert(*InStr);
	int BytesLength = Convert.Length();
	uint8* messageBytes = static_cast<uint8*>(FMemory::Malloc(BytesLength));
	FMemory::Memcpy(messageBytes, (uint8*)TCHAR_TO_UTF8(InStr.GetCharArray().GetData()), BytesLength);
	
	TArray<uint8> result;
	for (int i = 0; i < BytesLength; i++)
	{
		result.Add(messageBytes[i]);
	}

	FMemory::Free(messageBytes);	

	return result;
}

TArray<uint8> UTcpSocketSubsystem::Conv_FloatToBytes(float InFloat)
{
	TArray<uint8> result;

	unsigned char const * p = reinterpret_cast<unsigned char const *>(&InFloat);
	for (int i = 0; i != sizeof(float); i++)
	{
		result.Add((uint8)p[i]);
	}
	return result;		
}

TArray<uint8> UTcpSocketSubsystem::Conv_ByteToBytes(uint8 InByte)
{
	TArray<uint8> result{ InByte };
	return result;
}

int32 UTcpSocketSubsystem::Message_ReadInt(TArray<uint8>& Message)
{
	if (Message.Num() < 4)
	{
		PrintToConsole("Error in the ReadInt node. Not enough bytes in the Message.", true);
		return -1;
	}

	int result;
	unsigned char byteArray[4];

	for (int i = 0; i < 4; i++)
	{
		byteArray[i] = Message[0];		
		Message.RemoveAt(0);
	}

	FMemory::Memcpy(&result, byteArray, 4);
	
	return result;
}

uint8 UTcpSocketSubsystem::Message_ReadByte(TArray<uint8>& Message)
{
	if (Message.Num() < 1)
	{
		PrintToConsole("Error in the ReadByte node. Not enough bytes in the Message.", true);
		return 255;
	}

	uint8 result = Message[0];
	Message.RemoveAt(0);
	return result;
}

bool UTcpSocketSubsystem::Message_ReadBytes(int32 NumBytes, TArray<uint8>& Message, TArray<uint8>& returnArray)
{
	for (int i = 0; i < NumBytes; i++) {
		if (Message.Num() >= 1)
			returnArray.Add(Message_ReadByte(Message));
		else
			return false;
	}
	return true;
}

float UTcpSocketSubsystem::Message_ReadFloat(TArray<uint8>& Message)
{
	if (Message.Num() < 4)
	{
		PrintToConsole("Error in the ReadFloat node. Not enough bytes in the Message.", true);
		return -1.f;
	}

	float result;
	unsigned char byteArray[4];

	for (int i = 0; i < 4; i++)
	{
		byteArray[i] = Message[0];
		Message.RemoveAt(0);
	}

	FMemory::Memcpy(&result, byteArray, 4);

	return result;
}

FString UTcpSocketSubsystem::Message_ReadString(TArray<uint8>& Message, int32 BytesLength)
{
	if (BytesLength <= 0)
	{
		if (BytesLength < 0)
			PrintToConsole("Error in the ReadString node. BytesLength isn't a positive number.", true);
		return FString("");
	}
	if (Message.Num() < BytesLength)
	{
		PrintToConsole("Error in the ReadString node. Message isn't as long as BytesLength.", true);
		return FString("");
	}

	TArray<uint8> StringAsArray;
	StringAsArray.Reserve(BytesLength);

	for (int i = 0; i < BytesLength; i++)
	{
		StringAsArray.Add(Message[0]);
		Message.RemoveAt(0);
	}

	std::string cstr(reinterpret_cast<const char*>(StringAsArray.GetData()), StringAsArray.Num());	
	return FString(UTF8_TO_TCHAR(cstr.c_str()));
}

bool UTcpSocketSubsystem::isConnected(int32 ConnectionId)
{
	if (TcpWorkers.Contains(ConnectionId))
		return TcpWorkers[ConnectionId]->isConnected();
	return false;
}

void UTcpSocketSubsystem::PrintToConsole(FString Str, bool Error)
{
	if (auto tcpSocketSettings = GetDefault<UResponseSettings>())
	{
		if (Error && tcpSocketSettings->bPostErrorsToMessageLog)
		{
			auto messageLog = FMessageLog("Tcp Socket Plugin");
			messageLog.Open(EMessageSeverity::Error, true);
			messageLog.Message(EMessageSeverity::Error, FText::AsCultureInvariant(Str));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Log: %s"), *Str);
		}
	}
}

void UTcpSocketSubsystem::ExecuteOnConnected(int32 WorkerId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj)
{
	if (!thisObj.IsValid())
		return;

	ConnectedDelegate.ExecuteIfBound(WorkerId);
}

void UTcpSocketSubsystem::ExecuteOnDisconnected(int32 WorkerId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj)
{
	if (!thisObj.IsValid())
		return;

	if (TcpWorkers.Contains(WorkerId))
	{		
		TcpWorkers.Remove(WorkerId);		
	}
	DisconnectedDelegate.ExecuteIfBound(WorkerId);
}

bool FTcpSocketWorker::isConnected()
{
	
	return bConnected;
}

FTcpSocketWorker::FTcpSocketWorker(FString inIp, const int32 inPort, TWeakObjectPtr<UTcpSocketSubsystem> InOwner, int32 inId, int32 inRecvBufferSize, int32 inSendBufferSize, float inTimeBetweenTicks)
	: ipAddress(inIp)
	, port(inPort)
	, ThreadSpawnerActor(InOwner)
	, id(inId)
	, RecvBufferSize(inRecvBufferSize)
	, SendBufferSize(inSendBufferSize)
	, TimeBetweenTicks(inTimeBetweenTicks)
{
	
}

FTcpSocketWorker::~FTcpSocketWorker()
{
	AsyncTask(ENamedThreads::GameThread, []() {	//UTcpSocketSubsystem::PrintToConsole("Tcp socket thread was destroyed.", false)
		; });
	Stop();
	if (Thread)
	{
		Thread->WaitForCompletion();
		delete Thread;
		Thread = nullptr;
	}
}

void FTcpSocketWorker::Start()
{
	check(!Thread && "Thread wasn't null at the start!");
	check(FPlatformProcess::SupportsMultithreading() && "This platform doesn't support multithreading!");	
	if (Thread)
	{
		UE_LOG(LogTemp, Log, TEXT("Log: Thread isn't null. It's: %s"), *Thread->GetThreadName());
	}
	Thread = FRunnableThread::Create(this, *FString::Printf(TEXT("FTcpSocketWorker %s:%d"), *ipAddress, port), 128 * 1024, TPri_Normal);
	UE_LOG(LogTemp, Log, TEXT("Log: Created thread"));
}

void FTcpSocketWorker::AddToOutbox(TArray<uint8> Message)
{
	Outbox.Enqueue(Message);
}

TArray<uint8> FTcpSocketWorker::ReadFromInbox()
{
	TArray<uint8> msg;
	Inbox.Dequeue(msg);
	return msg;
}

bool FTcpSocketWorker::Init()
{
	bRun = true;
	bConnected = false;
	return true;
}

uint32 FTcpSocketWorker::Run()
{
	AsyncTask(ENamedThreads::GameThread, []() {	UTcpSocketSubsystem::PrintToConsole("Starting Tcp socket thread.", false); });

	while (bRun)
	{
		FDateTime timeBeginningOfTick = FDateTime::UtcNow();

		// Connect
		if (!bConnected)
		{
			Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
			if (!Socket)
			{
				return 0;
			}

			Socket->SetReceiveBufferSize(RecvBufferSize, ActualRecvBufferSize);
			Socket->SetSendBufferSize(SendBufferSize, ActualSendBufferSize);

			FIPv4Address ip;
			FIPv4Address::Parse(ipAddress, ip);

			TSharedRef<FInternetAddr> internetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
			internetAddr->SetIp(ip.Value);
			internetAddr->SetPort(port);

			bConnected = Socket->Connect(*internetAddr);
			if (bConnected) 
			{
				AsyncTask(ENamedThreads::GameThread, [this]() {
					ThreadSpawnerActor.Get()->ExecuteOnConnected(id, ThreadSpawnerActor);
				});
			}
			else 
			{
				AsyncTask(ENamedThreads::GameThread, []() { UTcpSocketSubsystem::PrintToConsole(FString::Printf(TEXT("Couldn't connect to server. TcpSocketConnection.cpp: line %d"), __LINE__), true); });
				bRun = false;				
			}
			continue;
		}

		if (!Socket)
		{
			AsyncTask(ENamedThreads::GameThread, []() { UTcpSocketSubsystem::PrintToConsole(FString::Printf(TEXT("Socket is null. TcpSocketConnection.cpp: line %d"), __LINE__), true); });
			bRun = false;
			continue;
		}

		Socket->SetNonBlocking(true);
		int32 t_BytesRead;
		uint8 t_Dummy;
		if (!Socket->Recv(&t_Dummy, 1, t_BytesRead, ESocketReceiveFlags::Peek))
		{
			bRun = false;
			continue;
		}
		Socket->SetNonBlocking(false);	

		while (!Outbox.IsEmpty())
		{
			TArray<uint8> toSend; 
			Outbox.Dequeue(toSend);

			if (!BlockingSend(toSend.GetData(), toSend.Num()))
			{
			
				bRun = false;
				UE_LOG(LogTemp, Log, TEXT("TCP send data failed !"));
				continue;
			}
		}

		uint32 PendingDataSize = 0;
		TArray<uint8> receivedData;

		int32 BytesReadTotal = 0;
	
		while (bRun)
		{
			if (!Socket->HasPendingData(PendingDataSize))
			{
				
				break;
			}

			AsyncTask(ENamedThreads::GameThread, []() { UTcpSocketSubsystem::PrintToConsole("Pending data", false); });

			receivedData.SetNumUninitialized(BytesReadTotal + PendingDataSize);

			int32 BytesRead = 0;
			if (!Socket->Recv(receivedData.GetData() + BytesReadTotal, PendingDataSize, BytesRead))
			{
				
				AsyncTask(ENamedThreads::GameThread, []() {
					UTcpSocketSubsystem::PrintToConsole(FString::Printf(TEXT("In progress read failed. TcpSocketConnection.cpp: line %d"), __LINE__), true);
				});
				break;
			}
			BytesReadTotal += BytesRead;
			
		}

		if (bRun && receivedData.Num() != 0)
		{
			Inbox.Enqueue(receivedData);
			AsyncTask(ENamedThreads::GameThread, [this]() {
				ThreadSpawnerActor.Get()->ExecuteOnMessageReceived(id, ThreadSpawnerActor);
			});			
		}

		FDateTime timeEndOfTick = FDateTime::UtcNow();
		FTimespan tickDuration = timeEndOfTick - timeBeginningOfTick;
		float secondsThisTickTook = tickDuration.GetTotalSeconds();
		float timeToSleep = TimeBetweenTicks - secondsThisTickTook;
		if (timeToSleep > 0.f)
		{

			FPlatformProcess::Sleep(timeToSleep);
		}
	}

	bConnected = false;

	AsyncTask(ENamedThreads::GameThread, [this]() {
		ThreadSpawnerActor.Get()->ExecuteOnDisconnected(id, ThreadSpawnerActor);
	});

	SocketShutdown();
	if (Socket)
	{
		delete Socket;
		Socket = nullptr;
	}
	
	return 0;
}

void FTcpSocketWorker::Stop()
{
	bRun = false;
}

void FTcpSocketWorker::Exit() 
{
	
}

bool FTcpSocketWorker::BlockingSend(const uint8* Data, int32 BytesToSend)
{
	if (BytesToSend > 0)
	{
		int32 BytesSent = 0;
		if (!Socket->Send(Data, BytesToSend, BytesSent))
		{
			return false;
		}
	}
	return true;
}

void FTcpSocketWorker::SocketShutdown()
{
	
	if (Socket)
	{
		Socket->Close();
	}
}






