// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Networking.h"
#include "GameFramework/Actor.h"
#include "UDPSender.generated.h"

UCLASS()
class KOSMOS_API AUDPSender : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUDPSender();

	TSharedPtr<FInternetAddr> RemoteAddr;
	
	TObjectPtr<FSocket> SenderSocket;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDP")
	bool ShowOnScreenDebugMessages;

//const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool UDP
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=SendUDP)
	FString ChosenSocketName="SocketName";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=SendUDP)
	FString ChosenIP="127.0.0.1";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=SendUDP)
	int32 ChosenPort=7890;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=SendUDP)
	bool bUseUDP=true;
	
public:
	
	UFUNCTION(BlueprintCallable, Category = "UDP")
	bool UDPSender_SendString(FString ToSend);
	
	UFUNCTION(BlueprintCallable, Category = "UDP")
	bool StartUDPSender(const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool UDP);
	
	FORCEINLINE void ScreenMsg(const FString& Msg)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, *Msg);
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const float Value)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %f"), *Msg, Value));
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const FString& Msg2)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %s"), *Msg, *Msg2));
	}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	/** Called whenever this actor is being removed from a level */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

};
