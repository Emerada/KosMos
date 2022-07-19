// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/LatentActionManager.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "LatentActions.h"

#include "ResponseTypes.h"

#include "ResponseJSON.generated.h"


class UResponseJsonValue;
class UResponseJsonObject;
class UResponseSettings;

template <class T>
class FResponseLatentAction : public FPendingLatentAction
{
public:
	virtual void Call(const T& Value)
	{
		Result = Value;
		Called = true;
	}

	void operator()(const T& Value)
	{
		Call(Value);
	}

	void Cancel();

	FResponseLatentAction(FWeakObjectPtr RequestObj, T& ResultParam, const FLatentActionInfo& LatentInfo)
		: Called(false)
		, Request(RequestObj)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, Result(ResultParam)
	{
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		Response.FinishAndTriggerIf(Called, ExecutionFunction, OutputLink, CallbackTarget);
	}

	virtual void NotifyObjectDestroyed()
	{
		Cancel();
	}

	virtual void NotifyActionAborted()
	{
		Cancel();
	}

private:
	bool Called;
	FWeakObjectPtr Request;

public:
	const FName ExecutionFunction;
	const int32 OutputLink;
	const FWeakObjectPtr CallbackTarget;
	T& Result;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestComplete, class UResponseJSON*, Request);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestFail, class UResponseJSON*, Request);

DECLARE_MULTICAST_DELEGATE_OneParam(FOnStaticRequestComplete, class UResponseJSON*);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnStaticRequestFail, class UResponseJSON*);


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class KOSMOS_API UResponseJSON : public UObject
{
	GENERATED_UCLASS_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetVerb(EResponseVerb Verb);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetCustomVerb(FString Verb);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetContentType(EResponseContentType ContentType);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetBinaryContentType(const FString& ContentType);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetBinaryRequestContent(const TArray<uint8>& Content);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetStringRequestContent(const FString& Content);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetHeader(const FString& HeaderName, const FString& HeaderValue);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	void ResetData();

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void ResetRequestData();

	UFUNCTION(BlueprintCallable, Category = "KosMos|Response")
	void ResetResponseData();

	UFUNCTION(BlueprintCallable, Category = "KosMos|Response")
	void Cancel();

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	UResponseJsonObject* GetRequestObject() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetRequestObject(UResponseJsonObject* JsonObject);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	UResponseJsonObject* GetResponseObject() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetResponseObject(UResponseJsonObject* JsonObject);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Response")
	UResponseJsonValue* GetResponseValue() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Request")
	FString GetURL() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Request")
	EResponseVerb GetVerb() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Request")
	EResponseStatus GetStatus() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Response")
	int32 GetResponseCode() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Response")
	FString GetResponseHeader(const FString& HeaderName);

	UFUNCTION(BlueprintPure, Category = "KosMos|Response")
	TArray<FString> GetAllResponseHeaders() const;

public:

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	void SetURL(const FString& Url = TEXT("http://Emeralda.games"));

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	virtual void ProcessURL(const FString& Url = TEXT("http://Emeralda.games"));

	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	virtual void ApplyURL(const FString& Url, UResponseJsonObject*& Result, UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Request")
	virtual void ExecuteProcessRequest();

protected:
	
	void ProcessRequest();

private:
	
	void OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

public:
	UPROPERTY(BlueprintAssignable,Category="KosMos|Event")
	FOnRequestComplete OnRequestComplete;

	UPROPERTY(BlueprintAssignable,Category="KosMos|Event")
	FOnRequestFail OnRequestFail;

	FOnStaticRequestComplete OnStaticRequestComplete;

	FOnStaticRequestFail OnStaticRequestFail;

public:
	
	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	void AddTag(FName Tag);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	int32 RemoveTag(FName Tag);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Utility")
	bool HasTag(FName Tag) const;

protected:
	
	TArray<FName> Tags;

public:
	
	UFUNCTION(BlueprintCallable, Category = "KosMos|Response")
	FString GetResponseContentAsString(bool bCacheResponseContent = true);

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KosMos|Response")
	int32 ResponseSize;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KosMos|Response")
	FString ResponseContent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KosMos|Response")
	bool bIsValidJsonResponse;

protected:
	
	static FString DeprecatedResponseString;

protected:
	
	FResponseLatentAction<UResponseJsonObject*>* ContinueAction;

	UPROPERTY()
	UResponseJsonObject* RequestJsonObj;

	TArray<uint8> RequestBytes;
	FString BinaryContentType;

	FString StringRequestContent;

	UPROPERTY()
	UResponseJsonObject* ResponseJsonObj;

	UPROPERTY()
	UResponseJsonValue* ResponseJsonValue;

	EResponseVerb RequestVerb;

	EResponseContentType RequestContentType;

	TMap<FString, FString> RequestHeaders;

	TMap<FString, FString> ResponseHeaders;

	int32 ResponseCode;

	FString CustomVerb;

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();

public:
	
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> GetHttpRequest() const { return HttpRequest; };
	
	FString PercentEncode(const FString& Source);

	static UResponseSettings* GetVaRestSettings();
};
