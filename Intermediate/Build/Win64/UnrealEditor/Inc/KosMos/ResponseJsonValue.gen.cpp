// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/ResponseJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseJsonValue() {}
// Cross Module References
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_ERJson();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonValue_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERJson;
	static UEnum* ERJson_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERJson.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KosMos_ERJson, Z_Construct_UPackage__Script_KosMos(), TEXT("ERJson"));
		}
		return Z_Registration_Info_UEnum_ERJson.OuterSingleton;
	}
	template<> KOSMOS_API UEnum* StaticEnum<ERJson>()
	{
		return ERJson_StaticEnum();
	}
	struct Z_Construct_UEnum_KosMos_ERJson_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KosMos_ERJson_Statics::Enumerators[] = {
		{ "ERJson::None", (int64)ERJson::None },
		{ "ERJson::Null", (int64)ERJson::Null },
		{ "ERJson::String", (int64)ERJson::String },
		{ "ERJson::Number", (int64)ERJson::Number },
		{ "ERJson::Boolean", (int64)ERJson::Boolean },
		{ "ERJson::Array", (int64)ERJson::Array },
		{ "ERJson::Object", (int64)ERJson::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KosMos_ERJson_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "ERJson::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "ERJson::Boolean" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
		{ "None.Name", "ERJson::None" },
		{ "Null.Name", "ERJson::Null" },
		{ "Number.Name", "ERJson::Number" },
		{ "Object.Name", "ERJson::Object" },
		{ "String.Name", "ERJson::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KosMos_ERJson_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		"ERJson",
		"ERJson",
		Z_Construct_UEnum_KosMos_ERJson_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_ERJson_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KosMos_ERJson_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_ERJson_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KosMos_ERJson()
	{
		if (!Z_Registration_Info_UEnum_ERJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERJson.InnerSingleton, Z_Construct_UEnum_KosMos_ERJson_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERJson.InnerSingleton;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UResponseJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsInt64)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->AsInt64();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsInt32)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AsInt32();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execGetTypeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTypeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERJson*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJsonValue::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UResponseJsonValue::StaticRegisterNativesUResponseJsonValue()
	{
		UClass* Class = UResponseJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &UResponseJsonValue::execAsArray },
			{ "AsBool", &UResponseJsonValue::execAsBool },
			{ "AsInt32", &UResponseJsonValue::execAsInt32 },
			{ "AsInt64", &UResponseJsonValue::execAsInt64 },
			{ "AsNumber", &UResponseJsonValue::execAsNumber },
			{ "AsObject", &UResponseJsonValue::execAsObject },
			{ "AsString", &UResponseJsonValue::execAsString },
			{ "GetType", &UResponseJsonValue::execGetType },
			{ "GetTypeString", &UResponseJsonValue::execGetTypeString },
			{ "IsNull", &UResponseJsonValue::execIsNull },
			{ "Reset", &UResponseJsonValue::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics
	{
		struct ResponseJsonValue_eventAsArray_Parms
		{
			TArray<UResponseJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::ResponseJsonValue_eventAsArray_Parms), Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics
	{
		struct ResponseJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ResponseJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::ResponseJsonValue_eventAsBool_Parms), Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics
	{
		struct ResponseJsonValue_eventAsInt32_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsInt32_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::ResponseJsonValue_eventAsInt32_Parms), Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics
	{
		struct ResponseJsonValue_eventAsInt64_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::ResponseJsonValue_eventAsInt64_Parms), Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics
	{
		struct ResponseJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::ResponseJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics
	{
		struct ResponseJsonValue_eventAsObject_Parms
		{
			UResponseJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::ResponseJsonValue_eventAsObject_Parms), Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_AsString_Statics
	{
		struct ResponseJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "AsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::ResponseJsonValue_eventAsString_Parms), Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_GetType_Statics
	{
		struct ResponseJsonValue_eventGetType_Parms
		{
			ERJson ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_KosMos_ERJson, METADATA_PARAMS(nullptr, 0) }; // 3466343133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::ResponseJsonValue_eventGetType_Parms), Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics
	{
		struct ResponseJsonValue_eventGetTypeString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "GetTypeString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::ResponseJsonValue_eventGetTypeString_Parms), Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_GetTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_GetTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics
	{
		struct ResponseJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ResponseJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "IsNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::ResponseJsonValue_eventIsNull_Parms), Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJsonValue_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJsonValue_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Json" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJsonValue_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJsonValue, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJsonValue_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJsonValue_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJsonValue_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJsonValue_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResponseJsonValue);
	UClass* Z_Construct_UClass_UResponseJsonValue_NoRegister()
	{
		return UResponseJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UResponseJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResponseJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResponseJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResponseJsonValue_AsArray, "AsArray" }, // 3135015010
		{ &Z_Construct_UFunction_UResponseJsonValue_AsBool, "AsBool" }, // 2368579158
		{ &Z_Construct_UFunction_UResponseJsonValue_AsInt32, "AsInt32" }, // 1326863727
		{ &Z_Construct_UFunction_UResponseJsonValue_AsInt64, "AsInt64" }, // 2885960967
		{ &Z_Construct_UFunction_UResponseJsonValue_AsNumber, "AsNumber" }, // 197489495
		{ &Z_Construct_UFunction_UResponseJsonValue_AsObject, "AsObject" }, // 2458305190
		{ &Z_Construct_UFunction_UResponseJsonValue_AsString, "AsString" }, // 1427307613
		{ &Z_Construct_UFunction_UResponseJsonValue_GetType, "GetType" }, // 4080577683
		{ &Z_Construct_UFunction_UResponseJsonValue_GetTypeString, "GetTypeString" }, // 2760523197
		{ &Z_Construct_UFunction_UResponseJsonValue_IsNull, "IsNull" }, // 1134211969
		{ &Z_Construct_UFunction_UResponseJsonValue_Reset, "Reset" }, // 157887450
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ResponseJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResponseJsonValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResponseJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResponseJsonValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResponseJsonValue_Statics::ClassParams = {
		&UResponseJsonValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResponseJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResponseJsonValue()
	{
		if (!Z_Registration_Info_UClass_UResponseJsonValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResponseJsonValue.OuterSingleton, Z_Construct_UClass_UResponseJsonValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResponseJsonValue.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<UResponseJsonValue>()
	{
		return UResponseJsonValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResponseJsonValue);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::EnumInfo[] = {
		{ ERJson_StaticEnum, TEXT("ERJson"), &Z_Registration_Info_UEnum_ERJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3466343133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResponseJsonValue, UResponseJsonValue::StaticClass, TEXT("UResponseJsonValue"), &Z_Registration_Info_UClass_UResponseJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResponseJsonValue), 3699426009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_3441412481(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
