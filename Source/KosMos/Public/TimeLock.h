// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeLock.generated.h"

UCLASS()
class KOSMOS_API ATimeLock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeLock();

	UPROPERTY()
	int32 TimeToInt;
	
	UPROPERTY(EditDefaultsOnly,Category=TimeLock)
	int32 Future;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void InitTimeLock();
	
	UFUNCTION()
	int32 GetSystemTime();
	
	UFUNCTION()
	void CallBack(class UResponseJSON* Request);
	
};
