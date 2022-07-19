// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TCPIP.generated.h"

UCLASS()
class KOSMOS_API ATCPIP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATCPIP();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=TCPIP)
	FString ipAddress;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=TCPIP)
	int32 port;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	int32 ConnectionId;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString DeviceName;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString ModelID;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString localArrayStr01;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString localArrayStr02;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString HttpImage;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString ToDeviceValue;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString ToParameterValue;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	FString ToEventValue;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>JsonFieldNameArray;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>DeviceValueArray;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>localEventArray01;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>localEventArray02;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>ParameterValueArray;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
	TArray<FString>EventValueArray;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Receive)
    FString localModelID;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitTCPIP();

	UFUNCTION(BlueprintCallable)
	void Disconnected(int32 Connection_Id);
	
	UFUNCTION(BlueprintCallable)
	void Connected(int32 Connection_Id);

	UFUNCTION(BlueprintCallable)
	void MessageReceived(int32 Connection_Id, UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable)
	bool HasSubstring(const FString& SearchIn, const FString& Substring, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase, ESearchDir::Type SearchDir = ESearchDir::FromStart);
		
	UFUNCTION(BlueprintCallable)
	void ClearStringVar();

	UFUNCTION(BlueprintCallable)
	bool SendTCPData(ATCPIP* TCPIP);
	
};
