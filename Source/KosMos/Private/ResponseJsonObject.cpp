// Fill out your copyright notice in the Description page of Project Settings.

#include "ResponseJsonObject.h"

#include "ResponseJsonParser.h"
#include "ResponseJsonValue.h"

typedef TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>> FCondensedJsonStringWriterFactory;
typedef TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR>> FCondensedJsonStringWriter;

UResponseJsonObject::UResponseJsonObject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, JsonObj(MakeShared<FJsonObject>())
{
}

void UResponseJsonObject::Reset()
{
	JsonObj = MakeShared<FJsonObject>();
}

TSharedRef<FJsonObject>& UResponseJsonObject::GetRootObject()
{
	return JsonObj;
}

void UResponseJsonObject::SetRootObject(const TSharedPtr<FJsonObject>& JsonObject)
{
	if (JsonObject.IsValid())
	{
		JsonObj = JsonObject.ToSharedRef();
	}
	else
	{
		Reset();
	}
}

FString UResponseJsonObject::EncodeJson() const
{
	FString OutputString;
	const auto Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObj, Writer);

	return OutputString;
}

FString UResponseJsonObject::EncodeJsonToSingleString() const
{
	FString OutputString;
	const auto Writer = FCondensedJsonStringWriterFactory::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObj, Writer);

	return OutputString;
}

bool UResponseJsonObject::DecodeJson(const FString& JsonString, bool bUseIncrementalParser)
{
	if (bUseIncrementalParser)
	{
		const int32 BytesRead = DeserializeFromTCHARBytes(JsonString.GetCharArray().GetData(), JsonString.Len());

		if (BytesRead > 0)
		{
			return true;
		}
	}
	else
	{
		const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*JsonString);
		TSharedPtr<FJsonObject> OutJsonObj;
		if (FJsonSerializer::Deserialize(Reader, OutJsonObj))
		{
			JsonObj = OutJsonObj.ToSharedRef();
			return true;
		}
	}
	Reset();

	return false;
}

TArray<FString> UResponseJsonObject::GetFieldNames() const
{
	TArray<FString> Result;
	JsonObj->Values.GetKeys(Result);

	return Result;
}

bool UResponseJsonObject::HasField(const FString& FieldName) const
{
	if (FieldName.IsEmpty())
	{
		return false;
	}

	return JsonObj->HasField(FieldName);
}

void UResponseJsonObject::RemoveField(const FString& FieldName)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->RemoveField(FieldName);
}

UResponseJsonValue* UResponseJsonObject::GetField(const FString& FieldName) const
{
	if (FieldName.IsEmpty())
	{
		return nullptr;
	}

	TSharedPtr<FJsonValue> NewVal = JsonObj->TryGetField(FieldName);
	if (NewVal.IsValid())
	{
		UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>();
		NewValue->SetRootValue(NewVal);

		return NewValue;
	}

	return nullptr;
}

void UResponseJsonObject::SetField(const FString& FieldName, UResponseJsonValue* JsonValue)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetField(FieldName, JsonValue->GetRootValue());
}

float UResponseJsonObject::GetNumberField(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::Number>(FieldName))
	{
		return 0.0f;
	}

	return JsonObj->GetNumberField(FieldName);
}

void UResponseJsonObject::SetNumberField(const FString& FieldName, float Number)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetNumberField(FieldName, Number);
}

int32 UResponseJsonObject::GetIntegerField(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::Number>(FieldName))
	{
		return 0;
	}

	return JsonObj->GetIntegerField(FieldName);
}

void UResponseJsonObject::SetIntegerField(const FString& FieldName, int32 Number)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetNumberField(FieldName, Number);
}

int64 UResponseJsonObject::GetInt64Field(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::Number>(FieldName))
	{
		return 0;
	}

	return static_cast<int64>(JsonObj->GetNumberField(FieldName));
}

void UResponseJsonObject::SetInt64Field(const FString& FieldName, int64 Number)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetNumberField(FieldName, Number);
}

FString UResponseJsonObject::GetStringField(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::String>(FieldName))
	{
		return TEXT("");
	}

	return JsonObj->GetStringField(FieldName);
}

void UResponseJsonObject::SetStringField(const FString& FieldName, const FString& StringValue)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetStringField(FieldName, StringValue);
}

bool UResponseJsonObject::GetBoolField(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::Boolean>(FieldName))
	{
		return false;
	}

	return JsonObj->GetBoolField(FieldName);
}

void UResponseJsonObject::SetBoolField(const FString& FieldName, bool InValue)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	JsonObj->SetBoolField(FieldName, InValue);
}

TArray<UResponseJsonValue*> UResponseJsonObject::GetArrayField(const FString& FieldName) const
{
	TArray<UResponseJsonValue*> OutArray;
	if (FieldName.IsEmpty())
	{
		return OutArray;
	}

	if (!JsonObj->HasTypedField<EJson::Array>(FieldName))
	{
		return OutArray;
	}

	TArray<TSharedPtr<FJsonValue>> ValArray = JsonObj->GetArrayField(FieldName);
	for (auto Value : ValArray)
	{
		UResponseJsonValue* NewValue = NewObject<UResponseJsonValue>();
		NewValue->SetRootValue(Value);

		OutArray.Add(NewValue);
	}

	return OutArray;
}

void UResponseJsonObject::SetArrayField(const FString& FieldName, const TArray<UResponseJsonValue*>& InArray)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> ValArray;

	// Process input array and COPY original values
	for (auto InVal : InArray)
	{
		const TSharedPtr<FJsonValue> JsonVal = InVal->GetRootValue();

		switch (InVal->GetType())
		{
		case ERJson::None:
			break;

		case ERJson::Null:
			ValArray.Add(MakeShareable(new FJsonValueNull()));
			break;

		case ERJson::String:
			ValArray.Add(MakeShareable(new FJsonValueString(JsonVal->AsString())));
			break;

		case ERJson::Number:
			ValArray.Add(MakeShareable(new FJsonValueNumber(JsonVal->AsNumber())));
			break;

		case ERJson::Boolean:
			ValArray.Add(MakeShareable(new FJsonValueBoolean(JsonVal->AsBool())));
			break;

		case ERJson::Array:
			ValArray.Add(MakeShareable(new FJsonValueArray(JsonVal->AsArray())));
			break;

		case ERJson::Object:
			ValArray.Add(MakeShareable(new FJsonValueObject(JsonVal->AsObject())));
			break;

		default:
			break;
		}
	}

	JsonObj->SetArrayField(FieldName, ValArray);
}

void UResponseJsonObject::MergeJsonObject(UResponseJsonObject* InJsonObject, bool Overwrite)
{
	if (!InJsonObject || !InJsonObject->IsValidLowLevel())
	{
		return;
	}

	TArray<FString> Keys = InJsonObject->GetFieldNames();

	for (auto Key : Keys)
	{
		if (Overwrite == false && HasField(Key))
		{
			continue;
		}

		SetField(Key, InJsonObject->GetField(Key));
	}
}

UResponseJsonObject* UResponseJsonObject::GetObjectField(const FString& FieldName) const
{
	if (!JsonObj->HasTypedField<EJson::Object>(FieldName))
	{
		return nullptr;
	}

	const TSharedPtr<FJsonObject> JsonObjField = JsonObj->GetObjectField(FieldName);

	UResponseJsonObject* OutRestJsonObj = NewObject<UResponseJsonObject>();
	OutRestJsonObj->SetRootObject(JsonObjField);

	return OutRestJsonObj;
}

void UResponseJsonObject::SetObjectField(const FString& FieldName, UResponseJsonObject* JsonObject)
{
	if (FieldName.IsEmpty() || !JsonObject || !JsonObject->IsValidLowLevel())
	{
		return;
	}

	JsonObj->SetObjectField(FieldName, JsonObject->GetRootObject());
}

void UResponseJsonObject::SetMapFields_string(const TMap<FString, FString>& Fields)
{
	for (auto& field : Fields)
	{
		SetStringField(field.Key, field.Value);
	}
}

void UResponseJsonObject::SetMapFields_uint8(const TMap<FString, uint8>& Fields)
{
	SetMapFields_Impl(Fields);
}

void UResponseJsonObject::SetMapFields_int32(const TMap<FString, int32>& Fields)
{
	SetMapFields_Impl(Fields);
}

void UResponseJsonObject::SetMapFields_int64(const TMap<FString, int64>& Fields)
{
	SetMapFields_Impl(Fields);
}

void UResponseJsonObject::SetMapFields_bool(const TMap<FString, bool>& Fields)
{
	SetMapFields_Impl(Fields);
}

TArray<float> UResponseJsonObject::GetNumberArrayField(const FString& FieldName) const
{
	return GetTypeArrayField<float>(FieldName);
}

TArray<int32> UResponseJsonObject::GetIntegerArrayField(const FString& FieldName) const
{
	return GetTypeArrayField<int32>(FieldName);
}

void UResponseJsonObject::SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> EntriesArray;

	for (auto Number : NumberArray)
	{
		EntriesArray.Add(MakeShareable(new FJsonValueNumber(Number)));
	}

	JsonObj->SetArrayField(FieldName, EntriesArray);
}

TArray<FString> UResponseJsonObject::GetStringArrayField(const FString& FieldName) const
{
	TArray<FString> StringArray;
	if (!JsonObj->HasTypedField<EJson::Array>(FieldName) || FieldName.IsEmpty())
	{
		return StringArray;
	}

	const TArray<TSharedPtr<FJsonValue>> JsonArrayValues = JsonObj->GetArrayField(FieldName);
	for (TArray<TSharedPtr<FJsonValue>>::TConstIterator It(JsonArrayValues); It; ++It)
	{
		StringArray.Add((*It)->AsString());
	}

	return StringArray;
}

void UResponseJsonObject::SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> EntriesArray;
	for (auto String : StringArray)
	{
		EntriesArray.Add(MakeShareable(new FJsonValueString(String)));
	}

	JsonObj->SetArrayField(FieldName, EntriesArray);
}

TArray<bool> UResponseJsonObject::GetBoolArrayField(const FString& FieldName) const
{
	TArray<bool> BoolArray;
	if (!JsonObj->HasTypedField<EJson::Array>(FieldName) || FieldName.IsEmpty())
	{
		return BoolArray;
	}

	const TArray<TSharedPtr<FJsonValue>> JsonArrayValues = JsonObj->GetArrayField(FieldName);
	for (TArray<TSharedPtr<FJsonValue>>::TConstIterator It(JsonArrayValues); It; ++It)
	{
		BoolArray.Add((*It)->AsBool());
	}

	return BoolArray;
}

void UResponseJsonObject::SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> EntriesArray;
	for (auto Boolean : BoolArray)
	{
		EntriesArray.Add(MakeShareable(new FJsonValueBoolean(Boolean)));
	}

	JsonObj->SetArrayField(FieldName, EntriesArray);
}

TArray<UResponseJsonObject*> UResponseJsonObject::GetObjectArrayField(const FString& FieldName) const
{
	TArray<UResponseJsonObject*> OutArray;
	if (!JsonObj->HasTypedField<EJson::Array>(FieldName) || FieldName.IsEmpty())
	{
		return OutArray;
	}

	TArray<TSharedPtr<FJsonValue>> ValArray = JsonObj->GetArrayField(FieldName);
	for (const auto& Value : ValArray)
	{
		TSharedPtr<FJsonObject> NewObj = Value->AsObject();

		UResponseJsonObject* NewJson = NewObject<UResponseJsonObject>();
		NewJson->SetRootObject(NewObj);

		OutArray.Add(NewJson);
	}

	return OutArray;
}

void UResponseJsonObject::SetObjectArrayField(const FString& FieldName, const TArray<UResponseJsonObject*>& ObjectArray)
{
	if (FieldName.IsEmpty())
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> EntriesArray;
	for (auto Value : ObjectArray)
	{
		EntriesArray.Add(MakeShareable(new FJsonValueObject(Value->GetRootObject())));
	}

	JsonObj->SetArrayField(FieldName, EntriesArray);
}

int32 UResponseJsonObject::DeserializeFromUTF8Bytes(const ANSICHAR* Bytes, int32 Size)
{
	FJSONReader Reader;

	const ANSICHAR* EndByte = Bytes + Size;
	while (Bytes < EndByte)
	{
		TCHAR Char = FUtf8Helper1::CodepointFromUtf8(Bytes, EndByte - Bytes);
		if (Char > 0xFFFF)
		{
			Char = UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		if (!Reader.Read(Char))
		{
			break;
		}
	}

	SetRootObject(Reader.State.Root);
	return Reader.State.Size;
}

int32 UResponseJsonObject::DeserializeFromTCHARBytes(const TCHAR* Bytes, int32 Size)
{
	FJSONReader Reader;

	int32 i = 0;
	while (i < Size)
	{
		if (!Reader.Read(Bytes[i++]))
		{
			break;
		}
	}

	SetRootObject(Reader.State.Root);
	return Reader.State.Size;
}

void UResponseJsonObject::DecodeFromArchive(TUniquePtr<FArchive>& Reader)
{
	FArchive& Ar = (*Reader.Get());
	uint8 SymbolBytes[2];

	Ar << SymbolBytes[0];
	Ar << SymbolBytes[1];

	bool bIsIntelByteOrder = true;

	if (SymbolBytes[0] == 0xff && SymbolBytes[1] == 0xfe)
	{
		bIsIntelByteOrder = true;
	}
	else if (SymbolBytes[0] == 0xfe && SymbolBytes[1] == 0xff)
	{
		bIsIntelByteOrder = false;
	}

	FJSONReader JsonReader;
	TCHAR Char;

	while (!Ar.AtEnd())
	{
		Ar << SymbolBytes[0];

		if (Ar.AtEnd())
		{
			break;
		}

		Ar << SymbolBytes[1];

		if (bIsIntelByteOrder)
		{
			Char = CharCast<TCHAR>(static_cast<UCS2CHAR>(static_cast<uint16>(SymbolBytes[0]) + static_cast<uint16>(SymbolBytes[1]) * 256));
		}
		else
		{
			Char = CharCast<TCHAR>(static_cast<UCS2CHAR>(static_cast<uint16>(SymbolBytes[1]) + static_cast<uint16>(SymbolBytes[0]) * 256));
		}

		if (!JsonReader.Read(Char))
		{
			break;
		}
	}

	SetRootObject(JsonReader.State.Root);
}

bool UResponseJsonObject::WriteToFile(const FString& Path) const
{
	TUniquePtr<FArchive> FileWriter(IFileManager::Get().CreateFileWriter(*Path));
	if (!FileWriter)
	{
		return false;
	}

	FArchive& Ar = *FileWriter.Get();

	UCS2CHAR BOM = UNICODE_BOM;
	Ar.Serialize(&BOM, sizeof(UCS2CHAR));

	FString Str = FString(TEXT("{"));
	WriteStringToArchive(Ar, *Str, Str.Len());

	int32 ElementCount = 0;
	FJSONWriter JsonWriter;
	for (auto JsonObjectValuePair : JsonObj->Values)
	{
		Str = FString(TEXT("\""));
		WriteStringToArchive(Ar, *Str, Str.Len());

		const TCHAR* BufferPtr = *JsonObjectValuePair.Key;
		for (int i = 0; i < JsonObjectValuePair.Key.Len(); ++i)
		{
			Str = FString(1, &BufferPtr[i]);
			WriteStringToArchive(Ar, *Str, Str.Len());
		}

		Str = FString(TEXT("\""));
		WriteStringToArchive(Ar, *Str, Str.Len());

		Str = FString(TEXT(":"));
		WriteStringToArchive(Ar, *Str, Str.Len());

		++ElementCount;

		JsonWriter.Write(JsonObjectValuePair.Value, FileWriter.Get(), ElementCount >= JsonObj->Values.Num());
	}

	Str = FString(TEXT("}"));
	WriteStringToArchive(Ar, *Str, Str.Len());

	FileWriter->Close();

	return true;
}

bool UResponseJsonObject::WriteToFilePath(const FString& Path, const bool bIsRelativeToProjectDir)
{
	return WriteToFile(bIsRelativeToProjectDir ? FPaths::ProjectDir() / Path : Path);
}

bool UResponseJsonObject::WriteStringToArchive(FArchive& Ar, const TCHAR* StrPtr, int64 Len)
{
	const auto Src = StringCast<UCS2CHAR>(StrPtr, Len);
	Ar.Serialize(const_cast<UCS2CHAR*>(Src.Get()), Src.Length() * sizeof(UCS2CHAR));

	return true;
}
