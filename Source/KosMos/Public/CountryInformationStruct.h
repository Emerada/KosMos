// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseRowDataStruct.h"
#include "CountryInformationStruct.generated.h"

USTRUCT(BlueprintType)
struct FCountryInformationStruct:public FTableRowBase
{
	GENERATED_BODY()

public:
	FCountryInformationStruct()
		:ProvinceName(""),
		CityName(""),
		RoadName("")
	{}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountryInformation")
	FString ProvinceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountryInformation")
	FString CityName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountryInformation")
	FString RoadName;


};