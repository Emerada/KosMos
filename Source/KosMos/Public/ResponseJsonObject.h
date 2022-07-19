// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Dom/JsonObject.h"
#include "Templates/UnrealTypeTraits.h"
#include "ResponseJsonObject.generated.h"

class UResponseJsonValue;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class KOSMOS_API UResponseJsonObject : public UObject
{
	GENERATED_UCLASS_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void Reset();

	TSharedRef<FJsonObject>& GetRootObject();

	void SetRootObject(const TSharedPtr<FJsonObject>& JsonObject);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	FString EncodeJson() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	FString EncodeJsonToSingleString() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	bool DecodeJson(const FString& JsonString, bool bUseIncrementalParser = true);

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	TArray<FString> GetFieldNames() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	bool HasField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void RemoveField(const FString& FieldName);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	UResponseJsonValue* GetField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetField(const FString& FieldName, UResponseJsonValue* JsonValue);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<UResponseJsonValue*> GetArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetArrayField(const FString& FieldName, const TArray<UResponseJsonValue*>& InArray);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void MergeJsonObject(UResponseJsonObject* InJsonObject, bool Overwrite);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	float GetNumberField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetNumberField(const FString& FieldName, float Number);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	int32 GetIntegerField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetIntegerField(const FString& FieldName, int32 Number);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	int64 GetInt64Field(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetInt64Field(const FString& FieldName, int64 Number);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	FString GetStringField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetStringField(const FString& FieldName, const FString& StringValue);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	bool GetBoolField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetBoolField(const FString& FieldName, bool InValue);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	UResponseJsonObject* GetObjectField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetObjectField(const FString& FieldName, UResponseJsonObject* JsonObject);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetMapFields_string(const TMap<FString, FString>& Fields);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetMapFields_uint8(const TMap<FString, uint8>& Fields);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetMapFields_int32(const TMap<FString, int32>& Fields);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetMapFields_int64(const TMap<FString, int64>& Fields);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetMapFields_bool(const TMap<FString, bool>& Fields);

private:
	
	template <typename T>
	void SetMapFields_Impl(const TMap<FString, T>& Fields)
	{
		for (auto& field : Fields)
		{
			if (TIsSame<T, uint8>::Value || TIsSame<T, int32>::Value || TIsSame<T, int64>::Value || TIsSame<T, float>::Value)
			{
				SetNumberField(field.Key, field.Value);
			}
			else if (TIsSame<T, bool>::Value)
			{
				SetBoolField(field.Key, (bool)field.Value);
			}
		}
	}

	template <typename T>
	TArray<T> GetTypeArrayField(const FString& FieldName) const
	{
		TArray<T> NumberArray;
		if (!JsonObj->HasTypedField<EJson::Array>(FieldName) || FieldName.IsEmpty())
		{
			return NumberArray;
		}

		const TArray<TSharedPtr<FJsonValue>> JsonArrayValues = JsonObj->GetArrayField(FieldName);
		for (TArray<TSharedPtr<FJsonValue>>::TConstIterator It(JsonArrayValues); It; ++It)
		{
			const auto Value = (*It).Get();

			NumberArray.Add((*It)->AsNumber());
		}

		return NumberArray;
	}


public:

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<float> GetNumberArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<int32> GetIntegerArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<FString> GetStringArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<bool> GetBoolArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray);

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<UResponseJsonObject*> GetObjectArrayField(const FString& FieldName) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void SetObjectArrayField(const FString& FieldName, const TArray<UResponseJsonObject*>& ObjectArray);

public:
	
	int32 DeserializeFromUTF8Bytes(const ANSICHAR* Bytes, int32 Size);

	int32 DeserializeFromTCHARBytes(const TCHAR* Bytes, int32 Size);

	void DecodeFromArchive(TUniquePtr<FArchive>& Reader);

public:
	
	bool WriteToFile(const FString& Path) const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	bool WriteToFilePath(const FString& Path, const bool bIsRelativeToProjectDir = true);

	static bool WriteStringToArchive(FArchive& Ar, const TCHAR* StrPtr, int64 Len);

private:
	/** Internal JSON data */
	TSharedRef<FJsonObject> JsonObj;
};
