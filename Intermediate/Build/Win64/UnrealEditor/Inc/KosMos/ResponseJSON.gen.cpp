// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/ResponseJSON.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseJSON() {}
// Cross Module References
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJSON_NoRegister();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJSON();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJsonValue_NoRegister();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseStatus();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseVerb();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseContentType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics
	{
		struct _Script_KosMos_eventOnRequestComplete_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KosMos_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KosMos, nullptr, "OnRequestComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::_Script_KosMos_eventOnRequestComplete_Parms), Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics
	{
		struct _Script_KosMos_eventOnRequestFail_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KosMos_eventOnRequestFail_Parms, Request), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KosMos, nullptr, "OnRequestFail__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::_Script_KosMos_eventOnRequestFail_Parms), Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetResponseContentAsString)
	{
		P_GET_UBOOL(Z_Param_bCacheResponseContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseContentAsString(Z_Param_bCacheResponseContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execHasTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execRemoveTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execAddTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execExecuteProcessRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteProcessRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execApplyURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_OBJECT_REF(UResponseJsonObject,Z_Param_Out_Result);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyURL(Z_Param_Url,Z_Param_Out_Result,Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execProcessURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetAllResponseHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetResponseHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetResponseCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EResponseStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetVerb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EResponseVerb*)Z_Param__Result=P_THIS->GetVerb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetResponseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonValue**)Z_Param__Result=P_THIS->GetResponseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetResponseObject)
	{
		P_GET_OBJECT(UResponseJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResponseObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetResponseObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetRequestObject)
	{
		P_GET_OBJECT(UResponseJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execGetRequestObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResponseJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execResetResponseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetResponseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execResetRequestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRequestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetStringRequestContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringRequestContent(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetBinaryRequestContent)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetBinaryContentType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryContentType(Z_Param_ContentType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetContentType)
	{
		P_GET_ENUM(EResponseContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentType(EResponseContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetCustomVerb)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVerb(Z_Param_Verb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResponseJSON::execSetVerb)
	{
		P_GET_ENUM(EResponseVerb,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerb(EResponseVerb(Z_Param_Verb));
		P_NATIVE_END;
	}
	void UResponseJSON::StaticRegisterNativesUResponseJSON()
	{
		UClass* Class = UResponseJSON::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UResponseJSON::execAddTag },
			{ "ApplyURL", &UResponseJSON::execApplyURL },
			{ "Cancel", &UResponseJSON::execCancel },
			{ "ExecuteProcessRequest", &UResponseJSON::execExecuteProcessRequest },
			{ "GetAllResponseHeaders", &UResponseJSON::execGetAllResponseHeaders },
			{ "GetRequestObject", &UResponseJSON::execGetRequestObject },
			{ "GetResponseCode", &UResponseJSON::execGetResponseCode },
			{ "GetResponseContentAsString", &UResponseJSON::execGetResponseContentAsString },
			{ "GetResponseHeader", &UResponseJSON::execGetResponseHeader },
			{ "GetResponseObject", &UResponseJSON::execGetResponseObject },
			{ "GetResponseValue", &UResponseJSON::execGetResponseValue },
			{ "GetStatus", &UResponseJSON::execGetStatus },
			{ "GetURL", &UResponseJSON::execGetURL },
			{ "GetVerb", &UResponseJSON::execGetVerb },
			{ "HasTag", &UResponseJSON::execHasTag },
			{ "ProcessURL", &UResponseJSON::execProcessURL },
			{ "RemoveTag", &UResponseJSON::execRemoveTag },
			{ "ResetData", &UResponseJSON::execResetData },
			{ "ResetRequestData", &UResponseJSON::execResetRequestData },
			{ "ResetResponseData", &UResponseJSON::execResetResponseData },
			{ "SetBinaryContentType", &UResponseJSON::execSetBinaryContentType },
			{ "SetBinaryRequestContent", &UResponseJSON::execSetBinaryRequestContent },
			{ "SetContentType", &UResponseJSON::execSetContentType },
			{ "SetCustomVerb", &UResponseJSON::execSetCustomVerb },
			{ "SetHeader", &UResponseJSON::execSetHeader },
			{ "SetRequestObject", &UResponseJSON::execSetRequestObject },
			{ "SetResponseObject", &UResponseJSON::execSetResponseObject },
			{ "SetStringRequestContent", &UResponseJSON::execSetStringRequestContent },
			{ "SetURL", &UResponseJSON::execSetURL },
			{ "SetVerb", &UResponseJSON::execSetVerb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResponseJSON_AddTag_Statics
	{
		struct ResponseJSON_eventAddTag_Parms
		{
			FName Tag;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UResponseJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_AddTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_AddTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "AddTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_AddTag_Statics::ResponseJSON_eventAddTag_Parms), Z_Construct_UFunction_UResponseJSON_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics
	{
		struct ResponseJSON_eventApplyURL_Parms
		{
			FString Url;
			UResponseJsonObject* Result;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::Function_MetaDataParams[] = {
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ApplyURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::ResponseJSON_eventApplyURL_Parms), Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ApplyURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ApplyURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ExecuteProcessRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics
	{
		struct ResponseJSON_eventGetAllResponseHeaders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetAllResponseHeaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::ResponseJSON_eventGetAllResponseHeaders_Parms), Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics
	{
		struct ResponseJSON_eventGetRequestObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetRequestObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::ResponseJSON_eventGetRequestObject_Parms), Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics
	{
		struct ResponseJSON_eventGetResponseCode_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetResponseCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::ResponseJSON_eventGetResponseCode_Parms), Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetResponseCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetResponseCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics
	{
		struct ResponseJSON_eventGetResponseContentAsString_Parms
		{
			bool bCacheResponseContent;
			FString ReturnValue;
		};
		static void NewProp_bCacheResponseContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheResponseContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit(void* Obj)
	{
		((ResponseJSON_eventGetResponseContentAsString_Parms*)Obj)->bCacheResponseContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent = { "bCacheResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseJSON_eventGetResponseContentAsString_Parms), &Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "CPP_Default_bCacheResponseContent", "true" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetResponseContentAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::ResponseJSON_eventGetResponseContentAsString_Parms), Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics
	{
		struct ResponseJSON_eventGetResponseHeader_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetResponseHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::ResponseJSON_eventGetResponseHeader_Parms), Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetResponseHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetResponseHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics
	{
		struct ResponseJSON_eventGetResponseObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetResponseObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::ResponseJSON_eventGetResponseObject_Parms), Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics
	{
		struct ResponseJSON_eventGetResponseValue_Parms
		{
			UResponseJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetResponseValue_Parms, ReturnValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetResponseValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::ResponseJSON_eventGetResponseValue_Parms), Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetResponseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetResponseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetStatus_Statics
	{
		struct ResponseJSON_eventGetStatus_Parms
		{
			EResponseStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_KosMos_EResponseStatus, METADATA_PARAMS(nullptr, 0) }; // 2673972395
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::ResponseJSON_eventGetStatus_Parms), Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetURL_Statics
	{
		struct ResponseJSON_eventGetURL_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetURL_Statics::ResponseJSON_eventGetURL_Parms), Z_Construct_UFunction_UResponseJSON_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_GetVerb_Statics
	{
		struct ResponseJSON_eventGetVerb_Parms
		{
			EResponseVerb ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventGetVerb_Parms, ReturnValue), Z_Construct_UEnum_KosMos_EResponseVerb, METADATA_PARAMS(nullptr, 0) }; // 3951540024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "GetVerb", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::ResponseJSON_eventGetVerb_Parms), Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_GetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_GetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_HasTag_Statics
	{
		struct ResponseJSON_eventHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ResponseJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResponseJSON_eventHasTag_Parms), &Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_HasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "HasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_HasTag_Statics::ResponseJSON_eventHasTag_Parms), Z_Construct_UFunction_UResponseJSON_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics
	{
		struct ResponseJSON_eventProcessURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "CPP_Default_Url", "http://Emeralda.games" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ProcessURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::ResponseJSON_eventProcessURL_Parms), Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ProcessURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ProcessURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics
	{
		struct ResponseJSON_eventRemoveTag_Parms
		{
			FName Tag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "RemoveTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::ResponseJSON_eventRemoveTag_Parms), Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ResetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ResetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Utility" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ResetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ResetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ResetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ResetRequestData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ResetRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ResetRequestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "ResetResponseData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_ResetResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_ResetResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics
	{
		struct ResponseJSON_eventSetBinaryContentType_Parms
		{
			FString ContentType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetBinaryContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::ResponseJSON_eventSetBinaryContentType_Parms), Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetBinaryContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetBinaryContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics
	{
		struct ResponseJSON_eventSetBinaryRequestContent_Parms
		{
			TArray<uint8> Content;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetBinaryRequestContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::ResponseJSON_eventSetBinaryRequestContent_Parms), Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetContentType_Statics
	{
		struct ResponseJSON_eventSetContentType_Parms
		{
			EResponseContentType ContentType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_KosMos_EResponseContentType, METADATA_PARAMS(nullptr, 0) }; // 1106246304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::ResponseJSON_eventSetContentType_Parms), Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics
	{
		struct ResponseJSON_eventSetCustomVerb_Parms
		{
			FString Verb;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetCustomVerb", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::ResponseJSON_eventSetCustomVerb_Parms), Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetCustomVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetCustomVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetHeader_Statics
	{
		struct ResponseJSON_eventSetHeader_Parms
		{
			FString HeaderName;
			FString HeaderValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::NewProp_HeaderValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::ResponseJSON_eventSetHeader_Parms), Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics
	{
		struct ResponseJSON_eventSetRequestObject_Parms
		{
			UResponseJsonObject* JsonObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetRequestObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::ResponseJSON_eventSetRequestObject_Parms), Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics
	{
		struct ResponseJSON_eventSetResponseObject_Parms
		{
			UResponseJsonObject* JsonObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetResponseObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::ResponseJSON_eventSetResponseObject_Parms), Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics
	{
		struct ResponseJSON_eventSetStringRequestContent_Parms
		{
			FString Content;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetStringRequestContent_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetStringRequestContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::ResponseJSON_eventSetStringRequestContent_Parms), Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetStringRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetStringRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetURL_Statics
	{
		struct ResponseJSON_eventSetURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResponseJSON_SetURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "CPP_Default_Url", "http://Emeralda.games" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::ResponseJSON_eventSetURL_Parms), Z_Construct_UFunction_UResponseJSON_SetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResponseJSON_SetVerb_Statics
	{
		struct ResponseJSON_eventSetVerb_Parms
		{
			EResponseVerb Verb;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResponseJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_KosMos_EResponseVerb, METADATA_PARAMS(nullptr, 0) }; // 3951540024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "KosMos|Request" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResponseJSON, nullptr, "SetVerb", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::ResponseJSON_eventSetVerb_Parms), Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResponseJSON_SetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResponseJSON_SetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResponseJSON);
	UClass* Z_Construct_UClass_UResponseJSON_NoRegister()
	{
		return UResponseJSON::StaticClass();
	}
	struct Z_Construct_UClass_UResponseJSON_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[];
#endif
		static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResponseJSON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResponseJSON_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResponseJSON_AddTag, "AddTag" }, // 759640865
		{ &Z_Construct_UFunction_UResponseJSON_ApplyURL, "ApplyURL" }, // 1583565201
		{ &Z_Construct_UFunction_UResponseJSON_Cancel, "Cancel" }, // 3470437448
		{ &Z_Construct_UFunction_UResponseJSON_ExecuteProcessRequest, "ExecuteProcessRequest" }, // 298614819
		{ &Z_Construct_UFunction_UResponseJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 2317128917
		{ &Z_Construct_UFunction_UResponseJSON_GetRequestObject, "GetRequestObject" }, // 2760889275
		{ &Z_Construct_UFunction_UResponseJSON_GetResponseCode, "GetResponseCode" }, // 439763699
		{ &Z_Construct_UFunction_UResponseJSON_GetResponseContentAsString, "GetResponseContentAsString" }, // 1701785057
		{ &Z_Construct_UFunction_UResponseJSON_GetResponseHeader, "GetResponseHeader" }, // 4114739516
		{ &Z_Construct_UFunction_UResponseJSON_GetResponseObject, "GetResponseObject" }, // 2512207406
		{ &Z_Construct_UFunction_UResponseJSON_GetResponseValue, "GetResponseValue" }, // 4258656195
		{ &Z_Construct_UFunction_UResponseJSON_GetStatus, "GetStatus" }, // 2651418367
		{ &Z_Construct_UFunction_UResponseJSON_GetURL, "GetURL" }, // 3128868266
		{ &Z_Construct_UFunction_UResponseJSON_GetVerb, "GetVerb" }, // 3619304510
		{ &Z_Construct_UFunction_UResponseJSON_HasTag, "HasTag" }, // 2939874590
		{ &Z_Construct_UFunction_UResponseJSON_ProcessURL, "ProcessURL" }, // 2119734026
		{ &Z_Construct_UFunction_UResponseJSON_RemoveTag, "RemoveTag" }, // 3891761853
		{ &Z_Construct_UFunction_UResponseJSON_ResetData, "ResetData" }, // 3751229961
		{ &Z_Construct_UFunction_UResponseJSON_ResetRequestData, "ResetRequestData" }, // 2091106495
		{ &Z_Construct_UFunction_UResponseJSON_ResetResponseData, "ResetResponseData" }, // 979865449
		{ &Z_Construct_UFunction_UResponseJSON_SetBinaryContentType, "SetBinaryContentType" }, // 4226077703
		{ &Z_Construct_UFunction_UResponseJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 1486089506
		{ &Z_Construct_UFunction_UResponseJSON_SetContentType, "SetContentType" }, // 214786536
		{ &Z_Construct_UFunction_UResponseJSON_SetCustomVerb, "SetCustomVerb" }, // 3473050182
		{ &Z_Construct_UFunction_UResponseJSON_SetHeader, "SetHeader" }, // 327354411
		{ &Z_Construct_UFunction_UResponseJSON_SetRequestObject, "SetRequestObject" }, // 994926187
		{ &Z_Construct_UFunction_UResponseJSON_SetResponseObject, "SetResponseObject" }, // 299240967
		{ &Z_Construct_UFunction_UResponseJSON_SetStringRequestContent, "SetStringRequestContent" }, // 2995146300
		{ &Z_Construct_UFunction_UResponseJSON_SetURL, "SetURL" }, // 201812746
		{ &Z_Construct_UFunction_UResponseJSON_SetVerb, "SetVerb" }, // 2188424789
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ResponseJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "KosMos|Event" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, OnRequestComplete), Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestComplete_MetaData)) }; // 895176023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "KosMos|Event" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, OnRequestFail), Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestFail_MetaData)) }; // 616717223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseSize_MetaData[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseSize = { "ResponseSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, ResponseSize), METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseContent_MetaData[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, ResponseContent), METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "KosMos|Response" },
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	void Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
	{
		((UResponseJSON*)Obj)->bIsValidJsonResponse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResponseJSON), &Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, RequestJsonObj), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, ResponseJsonObj), Z_Construct_UClass_UResponseJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResponseJSON.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonValue = { "ResponseJsonValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResponseJSON, ResponseJsonValue), Z_Construct_UClass_UResponseJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResponseJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_OnRequestFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_bIsValidJsonResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseJSON_Statics::NewProp_ResponseJsonValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResponseJSON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResponseJSON>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResponseJSON_Statics::ClassParams = {
		&UResponseJSON::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResponseJSON_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResponseJSON_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseJSON_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResponseJSON()
	{
		if (!Z_Registration_Info_UClass_UResponseJSON.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResponseJSON.OuterSingleton, Z_Construct_UClass_UResponseJSON_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResponseJSON.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<UResponseJSON>()
	{
		return UResponseJSON::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResponseJSON);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResponseJSON, UResponseJSON::StaticClass, TEXT("UResponseJSON"), &Z_Registration_Info_UClass_UResponseJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResponseJSON), 2055087646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_1261862472(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
