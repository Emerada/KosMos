// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "BaseRowDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FBaseRowDataStruct :public FTableRowBase
{
	GENERATED_BODY()

public:
	FBaseRowDataStruct()
		:Longitude(0.0)
		, Latitude(0.0)
		, Height(0.0)
		, City("")
		, RoadName("")
		, Mileage("")
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	float Longitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	float Latitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	float Height;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	FString City;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	FString RoadName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseRowData")
	FString Mileage;


};
