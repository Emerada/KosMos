// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "HAL/Runnable.h"
#include "HAL/ThreadSafeBool.h"
#include "Containers/Queue.h"
#include "UObject/WeakObjectPtrTemplates.h"

#include "Subsystems/EngineSubsystem.h"
#include "TcpSocketSubsystem.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketDisconnectDelegate, int32, ConnectionId);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketConnectDelegate, int32, ConnectionId);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FTcpSocketReceivedMessageDelegate, int32, ConnectionId, UPARAM(ref) TArray<uint8>&, Message);


/**
 * 
 */
UCLASS()
class KOSMOS_API UTcpSocketSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	UTcpSocketSubsystem();
	

	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem

	UFUNCTION(BlueprintCallable, Category = "Socket")
	void Connect(const FString& ipAddress, int32 port, 
		const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected,
		const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId);

	UFUNCTION(BlueprintCallable, Category = "Socket")
	void Disconnect(int32 ConnectionId);

	UFUNCTION(BlueprintCallable, Category = "Socket")
	bool SendData(int32 ConnectionId, TArray<uint8> DataToSend);

	//UFUNCTION()	
	void ExecuteOnConnected(int32 WorkerId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj);
	
	//UFUNCTION()
	void ExecuteOnDisconnected(int32 WorkerId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj);
	
	//UFUNCTION()
	void ExecuteOnMessageReceived(int32 ConnectionId, TWeakObjectPtr<UTcpSocketSubsystem> thisObj);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Append Bytes", CommutativeAssociativeBinaryOperator = "true"), Category = "Socket")
	static TArray<uint8> Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Int To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
	static TArray<uint8> Conv_IntToBytes(int32 InInt);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "String To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
	static TArray<uint8> Conv_StringToBytes(const FString& InStr);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Float To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
	static TArray<uint8> Conv_FloatToBytes(float InFloat);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Byte To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
	static TArray<uint8> Conv_ByteToBytes(uint8 InByte);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Int", Keywords = "read int"), Category = "Socket")
	static int32 Message_ReadInt(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Byte", Keywords = "read byte int8 uint8"), Category = "Socket")
	static uint8 Message_ReadByte(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Bytes", Keywords = "read bytes"), Category = "Socket")
	static bool Message_ReadBytes(int32 NumBytes, UPARAM(ref) TArray<uint8>& Message, TArray<uint8>& ReturnArray);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Float", Keywords = "read float"), Category = "Socket")
	static float Message_ReadFloat(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read String", Keywords = "read string"), Category = "Socket")
	static FString Message_ReadString(UPARAM(ref) TArray<uint8>& Message, int32 StringLength);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Socket")
	bool isConnected(int32 ConnectionId);

	static void PrintToConsole(FString Str, bool Error);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	int32 SendBufferSize = 16384;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	int32 ReceiveBufferSize = 16384;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	float TimeBetweenTicks = 0.008f;

private:
	TMap<int32, TSharedRef<class FTcpSocketWorker>> TcpWorkers;

	FTcpSocketDisconnectDelegate DisconnectedDelegate;
	FTcpSocketConnectDelegate ConnectedDelegate;
	FTcpSocketReceivedMessageDelegate MessageReceivedDelegate;

	
};
class FTcpSocketWorker : public FRunnable, public TSharedFromThis<FTcpSocketWorker>
{
	
	FRunnableThread* Thread = nullptr;

private:
	FSocket* Socket = nullptr;
	FString ipAddress;
	int port;
	TWeakObjectPtr<UTcpSocketSubsystem> ThreadSpawnerActor;
	int32 id;
	int32 RecvBufferSize;
	int32 ActualRecvBufferSize;
	int32 SendBufferSize;
	int32 ActualSendBufferSize;
	float TimeBetweenTicks;
	FThreadSafeBool bConnected = false;

	TQueue<TArray<uint8>, EQueueMode::Spsc> Inbox;
	TQueue<TArray<uint8>, EQueueMode::Spsc> Outbox;
	
public:

	FTcpSocketWorker(FString inIp, const int32 inPort, TWeakObjectPtr<UTcpSocketSubsystem> InOwner, int32 inId, int32 inRecvBufferSize, int32 inSendBufferSize, float inTimeBetweenTicks);
	virtual ~FTcpSocketWorker();

	void Start();

	void AddToOutbox(TArray<uint8> Message);

	TArray<uint8> ReadFromInbox();

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;

	void SocketShutdown();

	bool isConnected();

private:
	
	bool BlockingSend(const uint8* Data, int32 BytesToSend);

	FThreadSafeBool bRun = false;
};