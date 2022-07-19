// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ResponseSettings.generated.h"

/**
 * 
 */
//UResponseSettings
UCLASS(config = Engine, defaultconfig)
class KOSMOS_API UResponseSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	UPROPERTY(Config,EditAnywhere, Category = "KosMos")
	bool bExtendedLog;

	UPROPERTY(Config,EditAnywhere, Category = "KosMos")
	bool bUseChunkedParser;
	
	UPROPERTY(Config, EditAnywhere, Category = "TcpSocket")
	bool bPostErrorsToMessageLog;	
};
