// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ResponseJsonObject.h"
#include "ResponseJsonValue.h"
#include "ResponseJSON.h"

#include "Subsystems/EngineSubsystem.h"
#include "ResponseSubsystem.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FResponseCallDelegate, UResponseJSON*, Request);
/**
 * 
 */

USTRUCT()
struct FResponseCallResponse
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	UResponseJSON* Request;

	UPROPERTY()
	FResponseCallDelegate Callback;

	FDelegateHandle CompleteDelegateHandle;
	FDelegateHandle FailDelegateHandle;

	FResponseCallResponse()
		: Request(nullptr)
	{
	}
};


UCLASS()
class KOSMOS_API UResponseSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	UResponseSubsystem();

	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem

	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	void CallURL(const FString& URL, EResponseVerb Verb, EResponseContentType ContentType, UResponseJsonObject* ResponseJson, const FResponseCallDelegate& Callback);

	void OnCallComplete(UResponseJSON* Request);
	
protected:
	UPROPERTY()
	TMap<UResponseJSON*, FResponseCallResponse> RequestMap;

public:
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Construct Json Request (Empty)"), Category = "KosMos|Subsystem")
	UResponseJSON* ConstructResponseRequest();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Construct Json Request"), Category = "KosMos|Subsystem")
	UResponseJSON* ConstructResponseRequestExt(EResponseVerb Verb, EResponseContentType ContentType);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Construct Json Object"), Category = "KosMos|Subsystem")
	UResponseJsonObject* ConstructResponseJsonObject();

	UFUNCTION()
	static UResponseJsonObject* StaticConstructResponseJsonObject();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Number Value"), Category = "KosMos|Subsystem")
	UResponseJsonValue* ConstructJsonValueNumber(float Number);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json String Value"), Category = "KosMos|Subsystem")
	UResponseJsonValue* ConstructJsonValueString(const FString& StringValue);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Bool Value"), Category = "KosMos|Subsystem")
	UResponseJsonValue* ConstructJsonValueBool(bool InValue);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Array Value"), Category = "KosMos|Subsystem")
	UResponseJsonValue* ConstructJsonValueArray(const TArray<UResponseJsonValue*>& InArray);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Object Value"), Category = "KosMos|Subsystem")
	UResponseJsonValue* ConstructJsonValueObject(UResponseJsonObject* JsonObject);

	UResponseJsonValue* ConstructJsonValue(const TSharedPtr<FJsonValue>& InValue);
	
	UFUNCTION(BlueprintCallable, Category = "KosMos|Subsystem")
	UResponseJsonValue* DecodeJsonValue(const FString& JsonString);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Subsystem")
	UResponseJsonObject* DecodeJsonObject(const FString& JsonString);
	
	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	UResponseJsonObject* LoadJsonFromFile(const FString& Path, const bool bIsRelativeToContentDir = true);

	UFUNCTION(BlueprintCallable)
	void TestLog();
	
};
