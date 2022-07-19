#pragma once

#include "ResponseJsonValue.generated.h"

class UResponseJsonObject;
class FJsonValue;

UENUM(BlueprintType)
enum class ERJson : uint8
{
	None,
	Null,
	String,
	Number,
	Boolean,
	Array,
	Object,
};

UCLASS(BlueprintType, Blueprintable)
class KOSMOS_API UResponseJsonValue : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	void Reset();

	TSharedPtr<FJsonValue>& GetRootValue();

	void SetRootValue(TSharedPtr<FJsonValue>& JsonValue);

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	ERJson GetType() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	FString GetTypeString() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	bool IsNull() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	float AsNumber() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	int32 AsInt32() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	int64 AsInt64() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	FString AsString() const;

	UFUNCTION(BlueprintPure, Category = "KosMos|Json")
	bool AsBool() const;

	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	TArray<UResponseJsonValue*> AsArray() const;
	
	UFUNCTION(BlueprintCallable, Category = "KosMos|Json")
	UResponseJsonObject* AsObject();

private:
	/** Internal JSON data */
	TSharedPtr<FJsonValue> JsonVal;


};






















