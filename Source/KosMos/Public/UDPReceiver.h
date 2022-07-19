// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Networking.h"
#include "GameFramework/Actor.h"
#include "UDPReceiver.generated.h"

UCLASS()
class KOSMOS_API AUDPReceiver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUDPReceiver();

	TObjectPtr<FSocket>ListenSocket;
	
	TObjectPtr<FUdpSocketReceiver>UDPReceiver = nullptr;

	UFUNCTION(BlueprintCallable, Category = "UDP")
	void StartUDPReceiver(const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool& success);

	UFUNCTION(BlueprintPure, Category = "UDP")
	void DataRecv(FString& str, bool& success);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ReceiverUDP)
	FString ChosenSocketName="SocketName";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ReceiverUDP)
	FString ChosenIP="127.0.0.1";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ReceiverUDP)
	int32 ChosenPort=7890;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ReceiverUDP)
	bool bUseUDP=true;

	FORCEINLINE void ScreenMsg(const FString& Msg)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, *Msg);
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const float Value)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %f"), *Msg, Value));
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const FString& Msg2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %s"), *Msg, *Msg2));
	}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	/** Called whenever this actor is being removed from a level */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
