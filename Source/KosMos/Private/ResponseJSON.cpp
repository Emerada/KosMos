// Fill out your copyright notice in the Description page of Project Settings.

#include "ResponseJSON.h"

#include "ResponseJsonObject.h"
#include "ResponseJsonValue.h"
#include "ResponseSettings.h"

#include "Engine/Engine.h"
#include "Engine/LatentActionManager.h"
#include "Engine/World.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "KosMos.h"

FString UResponseJSON::DeprecatedResponseString(TEXT("DEPRECATED: Please use GetResponseContentAsString() instead"));

template <class T>
void FResponseLatentAction<T>::Cancel()
{
	UObject* Obj = Request.Get();
	if (Obj != nullptr)
	{
		((UResponseJSON*)Obj)->Cancel();
	}
}

UResponseJSON::UResponseJSON(const class FObjectInitializer& PCIP)
	: Super(PCIP)
	, BinaryContentType(TEXT("application/octet-stream"))
{
	ContinueAction = nullptr;

	RequestVerb = EResponseVerb::GET;
	RequestContentType = EResponseContentType::x_www_form_urlencoded_url;

	ResetData();
}

void UResponseJSON::SetVerb(EResponseVerb Verb)
{
	RequestVerb = Verb;
}

void UResponseJSON::SetCustomVerb(FString Verb)
{
	CustomVerb = Verb;
}

void UResponseJSON::SetContentType(EResponseContentType ContentType)
{
	RequestContentType = ContentType;
}

void UResponseJSON::SetBinaryContentType(const FString& ContentType)
{
	BinaryContentType = ContentType;
}

void UResponseJSON::SetBinaryRequestContent(const TArray<uint8>& Bytes)
{
	RequestBytes = Bytes;
}

void UResponseJSON::SetStringRequestContent(const FString& Content)
{
	StringRequestContent = Content;
}

void UResponseJSON::SetHeader(const FString& HeaderName, const FString& HeaderValue)
{
	RequestHeaders.Add(HeaderName, HeaderValue);
}

void UResponseJSON::ResetData()
{
	ResetRequestData();
	ResetResponseData();
}

void UResponseJSON::ResetRequestData()
{
	if (RequestJsonObj != nullptr)
	{
		RequestJsonObj->Reset();
	}
	else
	{
		RequestJsonObj = NewObject<UResponseJsonObject>();
	}

	RequestBytes.Empty();
	StringRequestContent.Empty();
}

void UResponseJSON::ResetResponseData()
{
	if (ResponseJsonObj != nullptr)
	{
		ResponseJsonObj->Reset();
	}
	else
	{
		ResponseJsonObj = NewObject<UResponseJsonObject>();
	}

	if (ResponseJsonValue != nullptr)
	{
		ResponseJsonValue->Reset();
	}
	else
	{
		ResponseJsonValue = NewObject<UResponseJsonValue>();
	}

	ResponseHeaders.Empty();
	ResponseCode = -1;
	ResponseSize = 0;

	bIsValidJsonResponse = false;

	ResponseContent = DeprecatedResponseString;
}

void UResponseJSON::Cancel()
{
	ContinueAction = nullptr;

	ResetResponseData();
}
UResponseJsonObject* UResponseJSON::GetRequestObject() const
{
	check(RequestJsonObj);
	return RequestJsonObj;
}

void UResponseJSON::SetRequestObject(UResponseJsonObject* JsonObject)
{
	if (JsonObject == nullptr)
	{
		return;
	}

	RequestJsonObj = JsonObject;
}

UResponseJsonObject* UResponseJSON::GetResponseObject() const
{
	check(ResponseJsonObj);
	return ResponseJsonObj;
}

void UResponseJSON::SetResponseObject(UResponseJsonObject* JsonObject)
{
	if (JsonObject == nullptr)
	{
		return;
	}

	ResponseJsonObj = JsonObject;
}

UResponseJsonValue* UResponseJSON::GetResponseValue() const
{
	check(ResponseJsonValue);
	return ResponseJsonValue;
}

FString UResponseJSON::GetURL() const
{
	return HttpRequest->GetURL();
}

EResponseVerb UResponseJSON::GetVerb() const
{
	return RequestVerb;
}

EResponseStatus UResponseJSON::GetStatus() const
{
	return EResponseStatus((uint8)HttpRequest->GetStatus());
}

int32 UResponseJSON::GetResponseCode() const
{
	return ResponseCode;
}

FString UResponseJSON::GetResponseHeader(const FString& HeaderName)
{
	FString Result;

	FString* Header = ResponseHeaders.Find(HeaderName);
	if (Header != nullptr)
	{
		Result = *Header;
	}

	return Result;
}

TArray<FString> UResponseJSON::GetAllResponseHeaders() const
{
	TArray<FString> Result;
	for (TMap<FString, FString>::TConstIterator It(ResponseHeaders); It; ++It)
	{
		Result.Add(It.Key() + TEXT(": ") + It.Value());
	}
	return Result;
}

void UResponseJSON::SetURL(const FString& Url)
{
	
	FString TrimmedUrl = Url;

	TrimmedUrl.TrimStartInline();
	TrimmedUrl.TrimEndInline();

	HttpRequest->SetURL(TrimmedUrl);
}

void UResponseJSON::ProcessURL(const FString& Url)
{
	SetURL(Url);
	ProcessRequest();
}

void UResponseJSON::ApplyURL(const FString& Url, UResponseJsonObject*& Result, UObject* WorldContextObject, FLatentActionInfo LatentInfo)
{

	FString TrimmedUrl = Url;

	TrimmedUrl.TrimStartInline();
	TrimmedUrl.TrimEndInline();

	HttpRequest->SetURL(TrimmedUrl);

	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		FResponseLatentAction<UResponseJsonObject*>* Kont = LatentActionManager.FindExistingAction<FResponseLatentAction<UResponseJsonObject*>>(LatentInfo.CallbackTarget, LatentInfo.UUID);

		if (Kont != nullptr)
		{
			Kont->Cancel();
			LatentActionManager.RemoveActionsForObject(LatentInfo.CallbackTarget);
		}

		LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, ContinueAction = new FResponseLatentAction<UResponseJsonObject*>(this, Result, LatentInfo));
	}

	ProcessRequest();
}

void UResponseJSON::ExecuteProcessRequest()
{
	if (HttpRequest->GetURL().Len() == 0)
	{
		return;
	}

	ProcessRequest();
}

void UResponseJSON::ProcessRequest()
{
	
	switch (RequestVerb)
	{
	case EResponseVerb::GET:
		HttpRequest->SetVerb(TEXT("GET"));
		break;

	case EResponseVerb::POST:
		HttpRequest->SetVerb(TEXT("POST"));
		break;

	case EResponseVerb::PUT:
		HttpRequest->SetVerb(TEXT("PUT"));
		break;

	case EResponseVerb::DEL:
		HttpRequest->SetVerb(TEXT("DELETE"));
		break;

	case EResponseVerb::CUSTOM:
		HttpRequest->SetVerb(CustomVerb);
		break;

	default:
		break;
	}

	
	switch (RequestContentType)
	{
	case EResponseContentType::x_www_form_urlencoded_url:
	{
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));

		FString UrlParams = "";
		uint16 ParamIdx = 0;

		
		for (auto RequestIt = RequestJsonObj->GetRootObject()->Values.CreateIterator(); RequestIt; ++RequestIt)
		{
			FString Key = RequestIt.Key();
			FString Value = RequestIt.Value().Get()->AsString();

			if (!Key.IsEmpty() && !Value.IsEmpty())
			{
				UrlParams += ParamIdx == 0 ? "?" : "&";
				UrlParams += PercentEncode(Key) + "=" + PercentEncode(Value);
			}

			ParamIdx++;
		}
			
		HttpRequest->SetURL(HttpRequest->GetURL() + UrlParams);

		if (!StringRequestContent.IsEmpty())
		{
			HttpRequest->SetContentAsString(StringRequestContent);
		}

		break;
	}
	case EResponseContentType::x_www_form_urlencoded_body:
	{
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));

		FString UrlParams = "";
		uint16 ParamIdx = 0;

		if (!StringRequestContent.IsEmpty())
		{
			UrlParams = StringRequestContent;
		}
		else
		{
			
			for (auto RequestIt = RequestJsonObj->GetRootObject()->Values.CreateIterator(); RequestIt; ++RequestIt)
			{
				FString Key = RequestIt.Key();
				FString Value = RequestIt.Value().Get()->AsString();

				if (!Key.IsEmpty() && !Value.IsEmpty())
				{
					UrlParams += ParamIdx == 0 ? "" : "&";
					UrlParams += PercentEncode(Key) + "=" + PercentEncode(Value);
				}

				ParamIdx++;
			}
		}

		
		HttpRequest->SetContentAsString(UrlParams);

		break;
	}
	case EResponseContentType::binary:
	{
		HttpRequest->SetHeader(TEXT("Content-Type"), BinaryContentType);
		HttpRequest->SetContent(RequestBytes);

		break;
	}
	case EResponseContentType::json:
	{
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

		
		if (RequestVerb == EResponseVerb::GET)
		{
			break;
		}
			
		FString OutputString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
		FJsonSerializer::Serialize(RequestJsonObj->GetRootObject(), Writer);

		HttpRequest->SetContentAsString(OutputString);

		break;
	}

	default:
		break;
	}

	for (TMap<FString, FString>::TConstIterator It(RequestHeaders); It; ++It)
	{
		HttpRequest->SetHeader(It.Key(), It.Value());
	}

	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UResponseJSON::OnProcessRequestComplete);

	HttpRequest->ProcessRequest();
}

void UResponseJSON::OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	
	ResetResponseData();

	if (Response.IsValid())
	{
		ResponseCode = Response->GetResponseCode();
	}

	if (!bWasSuccessful || !Response.IsValid())
	{
		OnRequestFail.Broadcast(this);
		OnStaticRequestFail.Broadcast(this);

		return;
	}

	TArray<FString> Headers = Response->GetAllHeaders();
	for (FString Header : Headers)
	{
		FString Key;
		FString Value;
		if (Header.Split(TEXT(": "), &Key, &Value))
		{
			ResponseHeaders.Add(Key, Value);
			
		}
	}

	if (GetVaRestSettings()->bUseChunkedParser)
	{
		const TArray<uint8>& Bytes = Response->GetContent();
		ResponseSize = ResponseJsonObj->DeserializeFromUTF8Bytes((const ANSICHAR*)Bytes.GetData(), Bytes.Num());
		
	}
	else
	{
		const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*Response->GetContentAsString());
		TSharedPtr<FJsonValue> OutJsonValue;
		if (FJsonSerializer::Deserialize(Reader, OutJsonValue))
		{
			ResponseJsonValue->SetRootValue(OutJsonValue);

			if (ResponseJsonValue->GetType() == ERJson::Object)
			{
				ResponseJsonObj->SetRootObject(ResponseJsonValue->GetRootValue()->AsObject());
				ResponseSize = Response->GetContentLength();
			}
		}
	}
	
	bIsValidJsonResponse = bWasSuccessful && (ResponseSize > 0);

	if (!bIsValidJsonResponse)
	{
		ResponseContent = Response->GetContentAsString();
		ResponseSize = ResponseContent.GetAllocatedSize();
	}

	OnRequestComplete.Broadcast(this);
	OnStaticRequestComplete.Broadcast(this);

	if (ContinueAction)
	{
		FResponseLatentAction<UResponseJsonObject*>* K = ContinueAction;
		ContinueAction = nullptr;

		K->Call(ResponseJsonObj);
	}
}

void UResponseJSON::AddTag(FName Tag)
{
	if (Tag != NAME_None)
	{
		Tags.AddUnique(Tag);
	}
}

int32 UResponseJSON::RemoveTag(FName Tag)
{
	return Tags.Remove(Tag);
}

bool UResponseJSON::HasTag(FName Tag) const
{
	return (Tag != NAME_None) && Tags.Contains(Tag);
}

FString UResponseJSON::GetResponseContentAsString(bool bCacheResponseContent)
{
	if (!bIsValidJsonResponse)
	{
		
		return ResponseContent;
	}

	if (!ResponseJsonObj || !ResponseJsonObj->IsValidLowLevel())
	{
		
		ResponseContent = DeprecatedResponseString;

		return TEXT("Invalid response");
	}

	if (!bCacheResponseContent)
	{
		return ResponseJsonObj->EncodeJson();
	}

	if (ResponseContent == DeprecatedResponseString)
	{
		ResponseContent = ResponseJsonObj->EncodeJson();
	}

	return ResponseContent;
}

FString UResponseJSON::PercentEncode(const FString& Source)
{
	return FGenericPlatformHttp::UrlEncode(Source);
}

UResponseSettings* UResponseJSON::GetVaRestSettings()
{
	return FKosMosModule::Get().GetSettings();
}


















