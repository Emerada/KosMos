// Fill out your copyright notice in the Description page of Project Settings.


#include "ResponseSubsystem.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"

UResponseSubsystem::UResponseSubsystem()
	:UEngineSubsystem()
{
}

void UResponseSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UResponseSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
void UResponseSubsystem::CallURL(const FString& URL, EResponseVerb Verb, EResponseContentType ContentType, UResponseJsonObject* ResponseJson, const FResponseCallDelegate& Callback)
{
	// Check we have valid data json
	if (ResponseJson == nullptr)
	{
		ResponseJson = ConstructResponseJsonObject();
	}

	UResponseJSON* Request = ConstructResponseRequest();

	Request->SetVerb(Verb);
	Request->SetContentType(ContentType);
	Request->SetRequestObject(ResponseJson);

	FResponseCallResponse Response;
	Response.Request = Request;
	Response.Callback = Callback;

	Response.CompleteDelegateHandle = Request->OnStaticRequestComplete.AddUObject(this, &UResponseSubsystem::OnCallComplete);
	Response.FailDelegateHandle = Request->OnStaticRequestFail.AddUObject(this, &UResponseSubsystem::OnCallComplete);

	RequestMap.Add(Request, Response);

	Request->ResetResponseData();
	Request->ProcessURL(URL);
}

void UResponseSubsystem::OnCallComplete(UResponseJSON* Request)
{
	if (!RequestMap.Contains(Request))
	{
		return;
	}

	const auto Response = RequestMap.Find(Request);
	Request->OnStaticRequestComplete.Remove(Response->CompleteDelegateHandle);
	Request->OnStaticRequestFail.Remove(Response->FailDelegateHandle);

	Response->Callback.ExecuteIfBound(Request);
	Response->Request = nullptr;
	RequestMap.Remove(Request);
}

UResponseJSON* UResponseSubsystem::ConstructResponseRequest()
{
	return NewObject<UResponseJSON>(this);
}

UResponseJSON* UResponseSubsystem::ConstructResponseRequestExt(EResponseVerb Verb, EResponseContentType ContentType)
{
	UResponseJSON* Request = ConstructResponseRequest();

	Request->SetVerb(Verb);
	Request->SetContentType(ContentType);

	return Request;
}

UResponseJsonObject* UResponseSubsystem::ConstructResponseJsonObject()
{
	return NewObject<UResponseJsonObject>(this);
}

UResponseJsonObject* UResponseSubsystem::StaticConstructResponseJsonObject()
{
	auto SelfSystem = CastChecked<UResponseSubsystem>(USubsystemBlueprintLibrary::GetEngineSubsystem(UResponseSubsystem::StaticClass()), ECastCheckedType::NullChecked);
	return SelfSystem->ConstructResponseJsonObject();
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValueNumber(float Number)
{
	TSharedPtr<FJsonValue> NewVal = MakeShareable(new FJsonValueNumber(Number));

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValueString(const FString& StringValue)
{
	TSharedPtr<FJsonValue> NewVal = MakeShareable(new FJsonValueString(StringValue));

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValueBool(bool InValue)
{
	TSharedPtr<FJsonValue> NewVal = MakeShareable(new FJsonValueBoolean(InValue));

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValueArray(const TArray<UResponseJsonValue*>& InArray)
{
	// Prepare data array to create new value
	TArray<TSharedPtr<FJsonValue>> ValueArray;
	for (auto InVal : InArray)
	{
		ValueArray.Add(InVal->GetRootValue());
	}

	TSharedPtr<FJsonValue> NewVal = MakeShareable(new FJsonValueArray(ValueArray));

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValueObject(UResponseJsonObject* JsonObject)
{
	TSharedPtr<FJsonValue> NewVal = MakeShareable(new FJsonValueObject(JsonObject->GetRootObject()));

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::ConstructJsonValue(const TSharedPtr<FJsonValue>& InValue)
{
	TSharedPtr<FJsonValue> NewVal = InValue;

	UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>(this);
	NewValue->SetRootValue(NewVal);

	return NewValue;
}

UResponseJsonValue* UResponseSubsystem::DecodeJsonValue(const FString& JsonString)
{
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*JsonString);
	TSharedPtr<FJsonValue> OutJsonValue;
	if (FJsonSerializer::Deserialize(Reader, OutJsonValue))
	{
		return ConstructJsonValue(OutJsonValue);
	}

	return nullptr;
}

UResponseJsonObject* UResponseSubsystem::DecodeJsonObject(const FString& JsonString)
{
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*JsonString);
	TSharedPtr<FJsonObject> OutJsonObj;
	if (FJsonSerializer::Deserialize(Reader, OutJsonObj))
	{
		auto NewJsonObj = NewObject<UResponseJsonObject>(this);
		NewJsonObj->SetRootObject(OutJsonObj);
		return NewJsonObj;
	}

	return nullptr;
}

void UResponseSubsystem::TestLog()
{
	UE_LOG(LogTemp,Error,TEXT("It's work!!"));
}

class UResponseJsonObject* UResponseSubsystem::LoadJsonFromFile(const FString& Path, const bool bIsRelativeToContentDir)
{
	auto* Json = ConstructResponseJsonObject();

	FString JSONString;
	if (FFileHelper::LoadFileToString(JSONString, *(bIsRelativeToContentDir ? FPaths::ProjectContentDir() / Path : Path)))
	{
		if (Json->DecodeJson(JSONString))
		{
			return Json;
		}
	}

	return nullptr;
}
