// Fill out your copyright notice in the Description page of Project Settings.


#include "UDPReceiver.h"

// Sets default values
AUDPReceiver::AUDPReceiver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AUDPReceiver::StartUDPReceiver(const FString& YourChosenSocketName,
	const FString& TheIP, const int32 ThePort,bool& success)
{
	TSharedRef<FInternetAddr> targetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	
	FIPv4Address Addr;
	FIPv4Address::Parse(TheIP, Addr);

	FIPv4Endpoint Endpoint(FIPv4Address::Any, ThePort); 

	ListenSocket = FUdpSocketBuilder(*YourChosenSocketName)
		.AsNonBlocking()
		.AsReusable()
		.BoundToEndpoint(Endpoint)
		.WithReceiveBufferSize(2 * 1024 * 1024)
		;

	int32 BufferSize = 2 * 1024 * 1024;
	ListenSocket->SetSendBufferSize(BufferSize, BufferSize);
	ListenSocket->SetReceiveBufferSize(BufferSize, BufferSize);

	if (!ListenSocket)
	{
		ScreenMsg("No socket");
		success = false;

	}
	if (ListenSocket)
	{
		ScreenMsg("The receiver is initialized");
		success = true;
	}

	//return true;
}

void AUDPReceiver::DataRecv(FString& str, bool& success)
{
	if (!ListenSocket)
	{
		ScreenMsg("No sender socket");
		success = false;
		//return success;
	}

	TSharedRef<FInternetAddr> targetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	TArray<uint8> ReceivedData;
	uint32 Size;

	if (ListenSocket->HasPendingData(Size))
	{
		success = true;
		str = "";
		uint8* Recv = new uint8[Size];
		int32 BytesRead = 0;

		ReceivedData.SetNumUninitialized(FMath::Min(Size, 65507u));
		ListenSocket->RecvFrom(ReceivedData.GetData(), ReceivedData.Num(), BytesRead, *targetAddr);
		char ansiiData[1024];
		memcpy(ansiiData, ReceivedData.GetData(), BytesRead);
		ansiiData[BytesRead] = 0;
		FString debugData = ANSI_TO_TCHAR(ansiiData);
		str = debugData;
	}
	else
	{
		success = false;
	}
	
	//return success;
}

void AUDPReceiver::BeginPlay()
{
	Super::BeginPlay();

	StartUDPReceiver(ChosenSocketName,ChosenIP,ChosenPort,bUseUDP);
}

void AUDPReceiver::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	delete UDPReceiver;
	UDPReceiver = nullptr;

	if (ListenSocket)
	{
		ListenSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ListenSocket);
	}
	
}


