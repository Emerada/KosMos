// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/ResponseSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseSubsystem() {}
// Cross Module References
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJSON_NoRegister();
	KOSMOS_API UScriptStruct* Z_Construct_UScriptStruct_FResponseCallResponse();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseSubsystem_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseVerb();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseContentType();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonObject_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonValue_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics
	{
		struct _Script_KosMos_eventResponseCallDelegate_Parms
		{
			UResponseJSON* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KosMos_eventResponseCallDelegate_Parms, Request), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KosMos, nullptr, "ResponseCallDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::_Script_KosMos_eventResponseCallDelegate_Parms), Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResponseCallResponse;
class UScriptStruct* FResponseCallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResponseCallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResponseCallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponseCallResponse, Z_Construct_UPackage__Script_KosMos(), TEXT("ResponseCallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ResponseCallResponse.OuterSingleton;
}
template<> KOSMOS_API UScriptStruct* StaticStruct<FResponseCallResponse>()
{
	return FResponseCallResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResponseCallResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseCallResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponseCallResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseCallResponse, Request), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseCallResponse, Callback), Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Callback_MetaData)) }; // 3460950973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponseCallResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewProp_Callback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponseCallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		&NewStructOps,
		"ResponseCallResponse",
		sizeof(FResponseCallResponse),
		alignof(FResponseCallResponse),
		Z_Construct_UScriptStruct_FResponseCallResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseCallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponseCallResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ResponseCallResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResponseCallResponse.InnerSingleton, Z_Construct_UScriptStruct_FResponseCallResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResponseCallResponse.InnerSingleton;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execTestLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestLog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execLoadJsonFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bIsRelativeToContentDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->LoadJsonFromFile(Z_Param_Path,Z_Param_bIsRelativeToContentDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execDecodeJsonObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->DecodeJsonObject(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execDecodeJsonValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->DecodeJsonValue(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructJsonValueObject)
	{
		P_GET_OBJECT(UResponseJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructJsonValueArray)
	{
		P_GET_TARRAY_REF(UResponseJsonValue*,Z_Param_Out_InArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueArray(Z_Param_Out_InArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructJsonValueBool)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueBool(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructJsonValueString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueString(Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructJsonValueNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueNumber(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execStaticConstructResponseJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=UResponseSubsystem::StaticConstructResponseJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructResponseJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->ConstructResponseJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructResponseRequestExt)
	{
		P_GET_ENUM(EResponseVerb,Z_Param_Verb);
		P_GET_ENUM(EResponseContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJSON**)Z_Param__Result=P_THIS->ConstructResponseRequestExt(EResponseVerb(Z_Param_Verb),EResponseContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execConstructResponseRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJSON**)Z_Param__Result=P_THIS->ConstructResponseRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseSubsystem::execCallURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(EResponseVerb,Z_Param_Verb);
		P_GET_ENUM(EResponseContentType,Z_Param_ContentType);
		P_GET_OBJECT(UResponseJsonObject,Z_Param_ResponseJson);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallURL(Z_Param_URL,EResponseVerb(Z_Param_Verb),EResponseContentType(Z_Param_ContentType),Z_Param_ResponseJson,FResponseCallDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	void UResponseSubsystem::StaticRegisterNativesUResponseSubsystem()
	{
		UClass* Class = UResponseSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallURL", &UResponseSubsystem::execCallURL },
			{ "ConstructJsonValueArray", &UResponseSubsystem::execConstructJsonValueArray },
			{ "ConstructJsonValueBool", &UResponseSubsystem::execConstructJsonValueBool },
			{ "ConstructJsonValueNumber", &UResponseSubsystem::execConstructJsonValueNumber },
			{ "ConstructJsonValueObject", &UResponseSubsystem::execConstructJsonValueObject },
			{ "ConstructJsonValueString", &UResponseSubsystem::execConstructJsonValueString },
			{ "ConstructResponseJsonObject", &UResponseSubsystem::execConstructResponseJsonObject },
			{ "ConstructResponseRequest", &UResponseSubsystem::execConstructResponseRequest },
			{ "ConstructResponseRequestExt", &UResponseSubsystem::execConstructResponseRequestExt },
			{ "DecodeJsonObject", &UResponseSubsystem::execDecodeJsonObject },
			{ "DecodeJsonValue", &UResponseSubsystem::execDecodeJsonValue },
			{ "LoadJsonFromFile", &UResponseSubsystem::execLoadJsonFromFile },
			{ "StaticConstructResponseJsonObject", &UResponseSubsystem::execStaticConstructResponseJsonObject },
			{ "TestLog", &UResponseSubsystem::execTestLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics
	{
		struct ResponseSubsystem_eventCallURL_Parms
		{
			FString URL;
			EResponseVerb Verb;
			EResponseContentType ContentType;
			UResponseJsonObject* ResponseJson;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventCallURL_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventCallURL_Parms, Verb), Z_Construct_UEnum_KosMos_EResponseVerb, METADATA_PARAMS(nullptr, 0) }; // 3951540024
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventCallURL_Parms, ContentType), Z_Construct_UEnum_KosMos_EResponseContentType, METADATA_PARAMS(nullptr, 0) }; // 1106246304
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ResponseJson = { "ResponseJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventCallURL_Parms, ResponseJson), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Callback_MetaData)) }; // 3460950973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_ResponseJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "Comment", "// End USubsystem\n" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
		{ "ToolTip", "End USubsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "CallURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::ResponseSubsystem_eventCallURL_Parms), Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_CallURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_CallURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics
	{
		struct ResponseSubsystem_eventConstructJsonValueArray_Parms
		{
			TArray<UResponseJsonValue*> InArray;
			UResponseJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructJsonValueArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::ResponseSubsystem_eventConstructJsonValueArray_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics
	{
		struct ResponseSubsystem_eventConstructJsonValueBool_Parms
		{
			bool InValue;
			UResponseJsonValue* ReturnValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((ResponseSubsystem_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseSubsystem_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructJsonValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::ResponseSubsystem_eventConstructJsonValueBool_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics
	{
		struct ResponseSubsystem_eventConstructJsonValueNumber_Parms
		{
			float Number;
			UResponseJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::ResponseSubsystem_eventConstructJsonValueNumber_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics
	{
		struct ResponseSubsystem_eventConstructJsonValueObject_Parms
		{
			UResponseJsonObject* JsonObject;
			UResponseJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructJsonValueObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::ResponseSubsystem_eventConstructJsonValueObject_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics
	{
		struct ResponseSubsystem_eventConstructJsonValueString_Parms
		{
			FString StringValue;
			UResponseJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json String Value" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructJsonValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::ResponseSubsystem_eventConstructJsonValueString_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics
	{
		struct ResponseSubsystem_eventConstructResponseJsonObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructResponseJsonObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Object" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructResponseJsonObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::ResponseSubsystem_eventConstructResponseJsonObject_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics
	{
		struct ResponseSubsystem_eventConstructResponseRequest_Parms
		{
			UResponseJSON* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructResponseRequest_Parms, ReturnValue), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Request (Empty)" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructResponseRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::ResponseSubsystem_eventConstructResponseRequest_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics
	{
		struct ResponseSubsystem_eventConstructResponseRequestExt_Parms
		{
			EResponseVerb Verb;
			EResponseContentType ContentType;
			UResponseJSON* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructResponseRequestExt_Parms, Verb), Z_Construct_UEnum_KosMos_EResponseVerb, METADATA_PARAMS(nullptr, 0) }; // 3951540024
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructResponseRequestExt_Parms, ContentType), Z_Construct_UEnum_KosMos_EResponseContentType, METADATA_PARAMS(nullptr, 0) }; // 1106246304
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventConstructResponseRequestExt_Parms, ReturnValue), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "DisplayName", "Construct Json Request" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "ConstructResponseRequestExt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::ResponseSubsystem_eventConstructResponseRequestExt_Parms), Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics
	{
		struct ResponseSubsystem_eventDecodeJsonObject_Parms
		{
			FString JsonString;
			UResponseJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventDecodeJsonObject_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventDecodeJsonObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "DecodeJsonObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::ResponseSubsystem_eventDecodeJsonObject_Parms), Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics
	{
		struct ResponseSubsystem_eventDecodeJsonValue_Parms
		{
			FString JsonString;
			UResponseJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventDecodeJsonValue_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventDecodeJsonValue_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Subsystem" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "DecodeJsonValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::ResponseSubsystem_eventDecodeJsonValue_Parms), Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics
	{
		struct ResponseSubsystem_eventLoadJsonFromFile_Parms
		{
			FString Path;
			bool bIsRelativeToContentDir;
			UResponseJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeToContentDir_MetaData[];
#endif
		static void NewProp_bIsRelativeToContentDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeToContentDir;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventLoadJsonFromFile_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit(void* Obj)
	{
		((ResponseSubsystem_eventLoadJsonFromFile_Parms*)Obj)->bIsRelativeToContentDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir = { "bIsRelativeToContentDir", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseSubsystem_eventLoadJsonFromFile_Parms), &Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventLoadJsonFromFile_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "CPP_Default_bIsRelativeToContentDir", "true" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "LoadJsonFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::ResponseSubsystem_eventLoadJsonFromFile_Parms), Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics
	{
		struct ResponseSubsystem_eventStaticConstructResponseJsonObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseSubsystem_eventStaticConstructResponseJsonObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "StaticConstructResponseJsonObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::ResponseSubsystem_eventStaticConstructResponseJsonObject_Parms), Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseSubsystem, nullptr, "TestLog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseSubsystem_TestLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseSubsystem_TestLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResponseSubsystem);
	UClass* Z_Construct_UClass_UResponseSubsystem_NoRegister()
	{
		return UResponseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UResponseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RequestMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResponseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResponseSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResponseSubsystem_CallURL, "CallURL" }, // 4027300716
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 3609548098
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 184922558
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 2654993745
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 965102502
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructJsonValueString, "ConstructJsonValueString" }, // 1617042046
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructResponseJsonObject, "ConstructResponseJsonObject" }, // 1566914523
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequest, "ConstructResponseRequest" }, // 2833913
		{ &Z_Construct_UFunction_UResponseSubsystem_ConstructResponseRequestExt, "ConstructResponseRequestExt" }, // 2173269479
		{ &Z_Construct_UFunction_UResponseSubsystem_DecodeJsonObject, "DecodeJsonObject" }, // 2364088389
		{ &Z_Construct_UFunction_UResponseSubsystem_DecodeJsonValue, "DecodeJsonValue" }, // 2119331529
		{ &Z_Construct_UFunction_UResponseSubsystem_LoadJsonFromFile, "LoadJsonFromFile" }, // 304481857
		{ &Z_Construct_UFunction_UResponseSubsystem_StaticConstructResponseJsonObject, "StaticConstructResponseJsonObject" }, // 2736177264
		{ &Z_Construct_UFunction_UResponseSubsystem_TestLog, "TestLog" }, // 2148362334
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResponseSubsystem.h" },
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_ValueProp = { "RequestMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FResponseCallResponse, METADATA_PARAMS(nullptr, 0) }; // 1147350879
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_Key_KeyProp = { "RequestMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap = { "RequestMap", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseSubsystem, RequestMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_MetaData)) }; // 1147350879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResponseSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSubsystem_Statics::NewProp_RequestMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResponseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResponseSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResponseSubsystem_Statics::ClassParams = {
		&UResponseSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResponseSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResponseSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResponseSubsystem()
	{
		if (!Z_Registration_Info_UClass_UResponseSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResponseSubsystem.OuterSingleton, Z_Construct_UClass_UResponseSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResponseSubsystem.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<UResponseSubsystem>()
	{
		return UResponseSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResponseSubsystem);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FResponseCallResponse::StaticStruct, Z_Construct_UScriptStruct_FResponseCallResponse_Statics::NewStructOps, TEXT("ResponseCallResponse"), &Z_Registration_Info_UScriptStruct_ResponseCallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResponseCallResponse), 1147350879U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResponseSubsystem, UResponseSubsystem::StaticClass, TEXT("UResponseSubsystem"), &Z_Registration_Info_UClass_UResponseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResponseSubsystem), 812600039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_515635875(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
