// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "RecursiveFiles.generated.h"

UCLASS()
class KOSMOS_API ARecursiveFiles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARecursiveFiles();

	TArray<FString>CSVFileArray;

	//UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString CategoryPath;

	// UPROPERTY(EditAnywhere,Category=Cesium)
	// TObjectPtr<class ACesiumGeoreference>CesiumGeoreference;

	UPROPERTY(EditAnywhere,Category=Spline)
	TObjectPtr<UStaticMesh>SplineMesh;
	
	UPROPERTY()
	TArray<TObjectPtr<class ARoadSpline>>RoadSplines;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RecursiveCSVFiles();

	bool ReadCSV(FString Path, TArray<FString>& Headers, TArray<FString>& Data, int32& Total, bool HeaderFirst);

	bool StringToCSV(FString Content, TArray<FString>& Headers, TArray<FString>& Data, int32& Total, bool HeaderFirst);

	bool CSVToString(FString& Output, TArray<FString> Headers, TArray<FString> Data, int32& Total);

	UDataTable* CSVToDataTable(FString CSV, UScriptStruct* Struct, bool& Success);

	UFUNCTION()
	void InitRoadSpline(UDataTable* localDataTable);
	
};
