// Copyright 2014-2019 Vladimir Alyamkin. All Rights Reserved.

#include "ResponseJsonValue.h"

#include "ResponseJsonObject.h"

UResponseJsonValue::UResponseJsonValue(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UResponseJsonValue::Reset()
{
	JsonVal = nullptr;
}

TSharedPtr<FJsonValue>& UResponseJsonValue::GetRootValue()
{
	return JsonVal;
}

void UResponseJsonValue::SetRootValue(TSharedPtr<FJsonValue>& JsonValue)
{
	JsonVal = JsonValue;
}

// FJsonValue API

ERJson UResponseJsonValue::GetType() const
{
	if (!JsonVal.IsValid())
	{
		return ERJson::None;
	}

	switch (JsonVal->Type)
	{
	case EJson::None:
		return ERJson::None;

	case EJson::Null:
		return ERJson::Null;

	case EJson::String:
		return ERJson::String;

	case EJson::Number:
		return ERJson::Number;

	case EJson::Boolean:
		return ERJson::Boolean;

	case EJson::Array:
		return ERJson::Array;

	case EJson::Object:
		return ERJson::Object;

	default:
		return ERJson::None;
	}
}

FString UResponseJsonValue::GetTypeString() const
{
	if (!JsonVal.IsValid())
	{
		return "None";
	}

	switch (JsonVal->Type)
	{
	case EJson::None:
		return TEXT("None");

	case EJson::Null:
		return TEXT("Null");

	case EJson::String:
		return TEXT("String");

	case EJson::Number:
		return TEXT("Number");

	case EJson::Boolean:
		return TEXT("Boolean");

	case EJson::Array:
		return TEXT("Array");

	case EJson::Object:
		return TEXT("Object");

	default:
		return TEXT("None");
	}
}

bool UResponseJsonValue::IsNull() const
{
	if (!JsonVal.IsValid())
	{
		return true;
	}

	return JsonVal->IsNull();
}

float UResponseJsonValue::AsNumber() const
{
	if (!JsonVal.IsValid())
	{
		return 0.f;
	}

	return static_cast<float>(JsonVal->AsNumber());
}

int32 UResponseJsonValue::AsInt32() const
{
	if (!JsonVal.IsValid())
	{
		return 0.f;
	}

	return static_cast<int32>(JsonVal->AsNumber());
}

int64 UResponseJsonValue::AsInt64() const
{
	if (!JsonVal.IsValid())
	{
		return 0.f;
	}

	return static_cast<int64>(JsonVal->AsNumber());
}

FString UResponseJsonValue::AsString() const
{
	if (!JsonVal.IsValid())
	{
		return FString();
	}

	return JsonVal->AsString();
}

bool UResponseJsonValue::AsBool() const
{
	if (!JsonVal.IsValid())
	{
		return false;
	}

	return JsonVal->AsBool();
}

TArray<UResponseJsonValue*> UResponseJsonValue::AsArray() const
{
	TArray<UResponseJsonValue*> OutArray;

	if (!JsonVal.IsValid())
	{
		return OutArray;
	}

	TArray<TSharedPtr<FJsonValue>> ValArray = JsonVal->AsArray();
	for (auto Value : ValArray)
	{
		UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>();
		NewValue->SetRootValue(Value);

		OutArray.Add(NewValue);
	}

	return OutArray;
}

UResponseJsonObject* UResponseJsonValue::AsObject()
{
	if (!JsonVal.IsValid())
	{
		
		return nullptr;
	}

	const TSharedPtr<FJsonObject> NewObj = JsonVal->AsObject();

	UResponseJsonObject* JsonObj = NewObject<UResponseJsonObject>();
	JsonObj->SetRootObject(NewObj);

	return JsonObj;
}

