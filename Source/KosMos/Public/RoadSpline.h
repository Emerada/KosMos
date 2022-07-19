// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadSpline.generated.h"

UCLASS()
class KOSMOS_API ARoadSpline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadSpline();

	// UPROPERTY()
	// FString RoadName;
	//
	// UPROPERTY()
	// FString Mileage;
	//
	// UPROPERTY()
	// TArray<FString>City;
	//
	UPROPERTY()
	TObjectPtr<class USplineComponent>SplineComponent;
	//
	// UPROPERTY()
	// TArray<TObjectPtr<class USplineMeshComponent>>SplineMeshComponentArray;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UFUNCTION()
	// void InitRoadSpline(TArray<FVector>PointPosition,TArray<FString>PointCity,FString PointRoadName,
	// 	FString PointMileage,class ACesiumGeoreference* CesiumGeoreference);
	//
	// UFUNCTION()
	// void InitSplineMeshComponent(UStaticMesh* SplineMesh);

};
