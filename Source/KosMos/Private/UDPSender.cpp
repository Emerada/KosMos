// Fill out your copyright notice in the Description page of Project Settings.


#include "UDPSender.h"


// Sets default values
AUDPSender::AUDPSender()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SenderSocket = NULL;
	ShowOnScreenDebugMessages = true;
}

bool AUDPSender::UDPSender_SendString(FString ToSend)
{
	if (!SenderSocket)
	{
		ScreenMsg("No sender socket");
		return false;
	}
	
	int32 BytesSent = 0;
	FString serialized = ToSend;
	TCHAR* serializedChar = serialized.GetCharArray().GetData();
	int32 size = FCString::Strlen(serializedChar);
	int32 sent = 0;

	SenderSocket->SendTo((uint8*)TCHAR_TO_UTF8(serializedChar), size, BytesSent, *RemoteAddr);
	
	if (BytesSent <= 0)
	{
		const FString Str = "Socket is valid but the receiver received 0 bytes, make sure it is listening properly!";
		UE_LOG(LogTemp, Error, TEXT("%s"), *Str);
		ScreenMsg(Str);
		return false;
	}
	ScreenMsg("UDP Send Succcess! INFO Sent = ", ToSend);
	return true;
}

bool AUDPSender::StartUDPSender(const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool UDP)
{
	RemoteAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	bool bIsValid;

	RemoteAddr->SetIp(*TheIP, bIsValid);
	RemoteAddr->SetPort(ThePort);

	if (!bIsValid)
	{
		ScreenMsg("UDP Sender>> IP address was not valid!", TheIP);
		return false;
	}

	SenderSocket = FUdpSocketBuilder(*YourChosenSocketName)
		.AsReusable()
		.WithBroadcast()
		.WithSendBufferSize(2 * 1024 * 1024);
	
	int32 SendSize = 2 * 1024 * 1024;
	SenderSocket->SetSendBufferSize(SendSize, SendSize);
	SenderSocket->SetReceiveBufferSize(SendSize, SendSize);
	if (bIsValid)
	{
		bIsValid = true;
	}
	return bIsValid;
}

void AUDPSender::BeginPlay()
{
	Super::BeginPlay();

	StartUDPSender(ChosenSocketName,ChosenIP,ChosenPort,bUseUDP);
}

void AUDPSender::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (SenderSocket) //Clear all sockets!
		{
		SenderSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(SenderSocket);
		}
}
