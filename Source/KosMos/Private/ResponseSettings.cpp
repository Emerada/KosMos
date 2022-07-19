// Fill out your copyright notice in the Description page of Project Settings.


#include "ResponseSettings.h"

UResponseSettings::UResponseSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bExtendedLog = false;
	bUseChunkedParser = false;
}