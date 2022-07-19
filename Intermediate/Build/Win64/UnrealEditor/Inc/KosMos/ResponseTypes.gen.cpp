// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/ResponseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseTypes() {}
// Cross Module References
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseVerb();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseContentType();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseStatus();
	KOSMOS_API UEnum* Z_Construct_UEnum_KosMos_EResponseHttpStatusCode();
	KOSMOS_API UScriptStruct* Z_Construct_UScriptStruct_FResponseURL();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResponseVerb;
	static UEnum* EResponseVerb_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResponseVerb.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResponseVerb.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KosMos_EResponseVerb, Z_Construct_UPackage__Script_KosMos(), TEXT("EResponseVerb"));
		}
		return Z_Registration_Info_UEnum_EResponseVerb.OuterSingleton;
	}
	template<> KOSMOS_API UEnum* StaticEnum<EResponseVerb>()
	{
		return EResponseVerb_StaticEnum();
	}
	struct Z_Construct_UEnum_KosMos_EResponseVerb_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enumerators[] = {
		{ "EResponseVerb::GET", (int64)EResponseVerb::GET },
		{ "EResponseVerb::POST", (int64)EResponseVerb::POST },
		{ "EResponseVerb::PUT", (int64)EResponseVerb::PUT },
		{ "EResponseVerb::DEL", (int64)EResponseVerb::DEL },
		{ "EResponseVerb::CUSTOM", (int64)EResponseVerb::CUSTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CUSTOM.Name", "EResponseVerb::CUSTOM" },
		{ "DEL.DisplayName", "DELETE" },
		{ "DEL.Name", "EResponseVerb::DEL" },
		{ "GET.Name", "EResponseVerb::GET" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
		{ "POST.Name", "EResponseVerb::POST" },
		{ "PUT.Name", "EResponseVerb::PUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KosMos_EResponseVerb_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		"EResponseVerb",
		"EResponseVerb",
		Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseVerb_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KosMos_EResponseVerb()
	{
		if (!Z_Registration_Info_UEnum_EResponseVerb.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResponseVerb.InnerSingleton, Z_Construct_UEnum_KosMos_EResponseVerb_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResponseVerb.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResponseContentType;
	static UEnum* EResponseContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResponseContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResponseContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KosMos_EResponseContentType, Z_Construct_UPackage__Script_KosMos(), TEXT("EResponseContentType"));
		}
		return Z_Registration_Info_UEnum_EResponseContentType.OuterSingleton;
	}
	template<> KOSMOS_API UEnum* StaticEnum<EResponseContentType>()
	{
		return EResponseContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_KosMos_EResponseContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enumerators[] = {
		{ "EResponseContentType::x_www_form_urlencoded_url", (int64)EResponseContentType::x_www_form_urlencoded_url },
		{ "EResponseContentType::x_www_form_urlencoded_body", (int64)EResponseContentType::x_www_form_urlencoded_body },
		{ "EResponseContentType::json", (int64)EResponseContentType::json },
		{ "EResponseContentType::binary", (int64)EResponseContentType::binary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enum_MetaDataParams[] = {
		{ "binary.Name", "EResponseContentType::binary" },
		{ "BlueprintType", "true" },
		{ "json.Name", "EResponseContentType::json" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
		{ "x_www_form_urlencoded_body.DisplayName", "x-www-form-urlencoded (Request Body)" },
		{ "x_www_form_urlencoded_body.Name", "EResponseContentType::x_www_form_urlencoded_body" },
		{ "x_www_form_urlencoded_url.DisplayName", "x-www-form-urlencoded (URL)" },
		{ "x_www_form_urlencoded_url.Name", "EResponseContentType::x_www_form_urlencoded_url" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KosMos_EResponseContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		"EResponseContentType",
		"EResponseContentType",
		Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KosMos_EResponseContentType()
	{
		if (!Z_Registration_Info_UEnum_EResponseContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResponseContentType.InnerSingleton, Z_Construct_UEnum_KosMos_EResponseContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResponseContentType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResponseStatus;
	static UEnum* EResponseStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResponseStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResponseStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KosMos_EResponseStatus, Z_Construct_UPackage__Script_KosMos(), TEXT("EResponseStatus"));
		}
		return Z_Registration_Info_UEnum_EResponseStatus.OuterSingleton;
	}
	template<> KOSMOS_API UEnum* StaticEnum<EResponseStatus>()
	{
		return EResponseStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_KosMos_EResponseStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enumerators[] = {
		{ "EResponseStatus::NotStarted", (int64)EResponseStatus::NotStarted },
		{ "EResponseStatus::Processing", (int64)EResponseStatus::Processing },
		{ "EResponseStatus::Failed", (int64)EResponseStatus::Failed },
		{ "EResponseStatus::Failed_ConnectionError", (int64)EResponseStatus::Failed_ConnectionError },
		{ "EResponseStatus::Succeeded", (int64)EResponseStatus::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EResponseStatus::Failed" },
		{ "Failed_ConnectionError.Name", "EResponseStatus::Failed_ConnectionError" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
		{ "NotStarted.Name", "EResponseStatus::NotStarted" },
		{ "Processing.Name", "EResponseStatus::Processing" },
		{ "Succeeded.Name", "EResponseStatus::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KosMos_EResponseStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		"EResponseStatus",
		"EResponseStatus",
		Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KosMos_EResponseStatus()
	{
		if (!Z_Registration_Info_UEnum_EResponseStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResponseStatus.InnerSingleton, Z_Construct_UEnum_KosMos_EResponseStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResponseStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResponseHttpStatusCode;
	static UEnum* EResponseHttpStatusCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResponseHttpStatusCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResponseHttpStatusCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KosMos_EResponseHttpStatusCode, Z_Construct_UPackage__Script_KosMos(), TEXT("EResponseHttpStatusCode"));
		}
		return Z_Registration_Info_UEnum_EResponseHttpStatusCode.OuterSingleton;
	}
	template<> KOSMOS_API UEnum* StaticEnum<EResponseHttpStatusCode::Type>()
	{
		return EResponseHttpStatusCode_StaticEnum();
	}
	struct Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enumerators[] = {
		{ "EResponseHttpStatusCode::Unknown", (int64)EResponseHttpStatusCode::Unknown },
		{ "EResponseHttpStatusCode::Continue", (int64)EResponseHttpStatusCode::Continue },
		{ "EResponseHttpStatusCode::SwitchProtocol", (int64)EResponseHttpStatusCode::SwitchProtocol },
		{ "EResponseHttpStatusCode::Ok", (int64)EResponseHttpStatusCode::Ok },
		{ "EResponseHttpStatusCode::Created", (int64)EResponseHttpStatusCode::Created },
		{ "EResponseHttpStatusCode::Accepted", (int64)EResponseHttpStatusCode::Accepted },
		{ "EResponseHttpStatusCode::Partial", (int64)EResponseHttpStatusCode::Partial },
		{ "EResponseHttpStatusCode::NoContent", (int64)EResponseHttpStatusCode::NoContent },
		{ "EResponseHttpStatusCode::ResetContent", (int64)EResponseHttpStatusCode::ResetContent },
		{ "EResponseHttpStatusCode::PartialContent", (int64)EResponseHttpStatusCode::PartialContent },
		{ "EResponseHttpStatusCode::Ambiguous", (int64)EResponseHttpStatusCode::Ambiguous },
		{ "EResponseHttpStatusCode::Moved", (int64)EResponseHttpStatusCode::Moved },
		{ "EResponseHttpStatusCode::Redirect", (int64)EResponseHttpStatusCode::Redirect },
		{ "EResponseHttpStatusCode::RedirectMethod", (int64)EResponseHttpStatusCode::RedirectMethod },
		{ "EResponseHttpStatusCode::NotModified", (int64)EResponseHttpStatusCode::NotModified },
		{ "EResponseHttpStatusCode::UseProxy", (int64)EResponseHttpStatusCode::UseProxy },
		{ "EResponseHttpStatusCode::RedirectKeepVerb", (int64)EResponseHttpStatusCode::RedirectKeepVerb },
		{ "EResponseHttpStatusCode::BadRequest", (int64)EResponseHttpStatusCode::BadRequest },
		{ "EResponseHttpStatusCode::Denied", (int64)EResponseHttpStatusCode::Denied },
		{ "EResponseHttpStatusCode::PaymentReq", (int64)EResponseHttpStatusCode::PaymentReq },
		{ "EResponseHttpStatusCode::Forbidden", (int64)EResponseHttpStatusCode::Forbidden },
		{ "EResponseHttpStatusCode::NotFound", (int64)EResponseHttpStatusCode::NotFound },
		{ "EResponseHttpStatusCode::BadMethod", (int64)EResponseHttpStatusCode::BadMethod },
		{ "EResponseHttpStatusCode::NoneAcceptable", (int64)EResponseHttpStatusCode::NoneAcceptable },
		{ "EResponseHttpStatusCode::ProxyAuthReq", (int64)EResponseHttpStatusCode::ProxyAuthReq },
		{ "EResponseHttpStatusCode::RequestTimeout", (int64)EResponseHttpStatusCode::RequestTimeout },
		{ "EResponseHttpStatusCode::Conflict", (int64)EResponseHttpStatusCode::Conflict },
		{ "EResponseHttpStatusCode::Gone", (int64)EResponseHttpStatusCode::Gone },
		{ "EResponseHttpStatusCode::LengthRequired", (int64)EResponseHttpStatusCode::LengthRequired },
		{ "EResponseHttpStatusCode::PrecondFailed", (int64)EResponseHttpStatusCode::PrecondFailed },
		{ "EResponseHttpStatusCode::RequestTooLarge", (int64)EResponseHttpStatusCode::RequestTooLarge },
		{ "EResponseHttpStatusCode::UriTooLong", (int64)EResponseHttpStatusCode::UriTooLong },
		{ "EResponseHttpStatusCode::UnsupportedMedia", (int64)EResponseHttpStatusCode::UnsupportedMedia },
		{ "EResponseHttpStatusCode::TooManyRequests", (int64)EResponseHttpStatusCode::TooManyRequests },
		{ "EResponseHttpStatusCode::RetryWith", (int64)EResponseHttpStatusCode::RetryWith },
		{ "EResponseHttpStatusCode::ServerError", (int64)EResponseHttpStatusCode::ServerError },
		{ "EResponseHttpStatusCode::NotSupported", (int64)EResponseHttpStatusCode::NotSupported },
		{ "EResponseHttpStatusCode::BadGateway", (int64)EResponseHttpStatusCode::BadGateway },
		{ "EResponseHttpStatusCode::ServiceUnavail", (int64)EResponseHttpStatusCode::ServiceUnavail },
		{ "EResponseHttpStatusCode::GatewayTimeout", (int64)EResponseHttpStatusCode::GatewayTimeout },
		{ "EResponseHttpStatusCode::VersionNotSup", (int64)EResponseHttpStatusCode::VersionNotSup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enum_MetaDataParams[] = {
		{ "Accepted.DisplayName", "Accepted = 202" },
		{ "Accepted.Name", "EResponseHttpStatusCode::Accepted" },
		{ "Ambiguous.DisplayName", "Ambiguous = 300" },
		{ "Ambiguous.Name", "EResponseHttpStatusCode::Ambiguous" },
		{ "BadGateway.DisplayName", "BadGateway = 502" },
		{ "BadGateway.Name", "EResponseHttpStatusCode::BadGateway" },
		{ "BadMethod.DisplayName", "BadMethod = 405" },
		{ "BadMethod.Name", "EResponseHttpStatusCode::BadMethod" },
		{ "BadRequest.DisplayName", "BadRequest = 400" },
		{ "BadRequest.Name", "EResponseHttpStatusCode::BadRequest" },
		{ "BlueprintType", "true" },
		{ "Conflict.DisplayName", "Conflict = 409" },
		{ "Conflict.Name", "EResponseHttpStatusCode::Conflict" },
		{ "Continue.DisplayName", "Continue = 100" },
		{ "Continue.Name", "EResponseHttpStatusCode::Continue" },
		{ "Created.DisplayName", "Created = 201" },
		{ "Created.Name", "EResponseHttpStatusCode::Created" },
		{ "Denied.DisplayName", "Denied = 401" },
		{ "Denied.Name", "EResponseHttpStatusCode::Denied" },
		{ "Forbidden.DisplayName", "Forbidden = 403" },
		{ "Forbidden.Name", "EResponseHttpStatusCode::Forbidden" },
		{ "GatewayTimeout.DisplayName", "GatewayTimeout = 504" },
		{ "GatewayTimeout.Name", "EResponseHttpStatusCode::GatewayTimeout" },
		{ "Gone.DisplayName", "Gone = 410" },
		{ "Gone.Name", "EResponseHttpStatusCode::Gone" },
		{ "LengthRequired.DisplayName", "LengthRequired = 411" },
		{ "LengthRequired.Name", "EResponseHttpStatusCode::LengthRequired" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
		{ "Moved.DisplayName", "Moved = 301" },
		{ "Moved.Name", "EResponseHttpStatusCode::Moved" },
		{ "NoContent.DisplayName", "NoContent = 204" },
		{ "NoContent.Name", "EResponseHttpStatusCode::NoContent" },
		{ "NoneAcceptable.DisplayName", "NoneAcceptable = 406" },
		{ "NoneAcceptable.Name", "EResponseHttpStatusCode::NoneAcceptable" },
		{ "NotFound.DisplayName", "NotFound = 404" },
		{ "NotFound.Name", "EResponseHttpStatusCode::NotFound" },
		{ "NotModified.DisplayName", "NotModified = 304" },
		{ "NotModified.Name", "EResponseHttpStatusCode::NotModified" },
		{ "NotSupported.DisplayName", "NotSupported = 501" },
		{ "NotSupported.Name", "EResponseHttpStatusCode::NotSupported" },
		{ "Ok.DisplayName", "Ok = 200" },
		{ "Ok.Name", "EResponseHttpStatusCode::Ok" },
		{ "Partial.DisplayName", "Partial = 203" },
		{ "Partial.Name", "EResponseHttpStatusCode::Partial" },
		{ "PartialContent.DisplayName", "PartialContent = 206" },
		{ "PartialContent.Name", "EResponseHttpStatusCode::PartialContent" },
		{ "PaymentReq.DisplayName", "PaymentReq = 402" },
		{ "PaymentReq.Name", "EResponseHttpStatusCode::PaymentReq" },
		{ "PrecondFailed.DisplayName", "PrecondFailed = 412" },
		{ "PrecondFailed.Name", "EResponseHttpStatusCode::PrecondFailed" },
		{ "ProxyAuthReq.DisplayName", "ProxyAuthReq = 407" },
		{ "ProxyAuthReq.Name", "EResponseHttpStatusCode::ProxyAuthReq" },
		{ "Redirect.DisplayName", "Redirect = 302" },
		{ "Redirect.Name", "EResponseHttpStatusCode::Redirect" },
		{ "RedirectKeepVerb.DisplayName", "RedirectKeepVerb = 307" },
		{ "RedirectKeepVerb.Name", "EResponseHttpStatusCode::RedirectKeepVerb" },
		{ "RedirectMethod.DisplayName", "RedirectMethod = 303" },
		{ "RedirectMethod.Name", "EResponseHttpStatusCode::RedirectMethod" },
		{ "RequestTimeout.DisplayName", "RequestTimeout = 408" },
		{ "RequestTimeout.Name", "EResponseHttpStatusCode::RequestTimeout" },
		{ "RequestTooLarge.DisplayName", "RequestTooLarge = 413" },
		{ "RequestTooLarge.Name", "EResponseHttpStatusCode::RequestTooLarge" },
		{ "ResetContent.DisplayName", "ResetContent = 205" },
		{ "ResetContent.Name", "EResponseHttpStatusCode::ResetContent" },
		{ "RetryWith.DisplayName", "RetryWith = 449" },
		{ "RetryWith.Name", "EResponseHttpStatusCode::RetryWith" },
		{ "ServerError.DisplayName", "ServerError = 500" },
		{ "ServerError.Name", "EResponseHttpStatusCode::ServerError" },
		{ "ServiceUnavail.DisplayName", "ServiceUnavail = 503" },
		{ "ServiceUnavail.Name", "EResponseHttpStatusCode::ServiceUnavail" },
		{ "SwitchProtocol.DisplayName", "SwitchProtocol = 101" },
		{ "SwitchProtocol.Name", "EResponseHttpStatusCode::SwitchProtocol" },
		{ "TooManyRequests.DisplayName", "TooManyRequests = 429" },
		{ "TooManyRequests.Name", "EResponseHttpStatusCode::TooManyRequests" },
		{ "Unknown.DisplayName", "Unknown = 0" },
		{ "Unknown.Name", "EResponseHttpStatusCode::Unknown" },
		{ "UnsupportedMedia.DisplayName", "UnsupportedMedia = 415" },
		{ "UnsupportedMedia.Name", "EResponseHttpStatusCode::UnsupportedMedia" },
		{ "UriTooLong.DisplayName", "UriTooLong = 414" },
		{ "UriTooLong.Name", "EResponseHttpStatusCode::UriTooLong" },
		{ "UseProxy.DisplayName", "UseProxy = 305" },
		{ "UseProxy.Name", "EResponseHttpStatusCode::UseProxy" },
		{ "VersionNotSup.DisplayName", "VersionNotSup = 505" },
		{ "VersionNotSup.Name", "EResponseHttpStatusCode::VersionNotSup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		"EResponseHttpStatusCode",
		"EResponseHttpStatusCode::Type",
		Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KosMos_EResponseHttpStatusCode()
	{
		if (!Z_Registration_Info_UEnum_EResponseHttpStatusCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResponseHttpStatusCode.InnerSingleton, Z_Construct_UEnum_KosMos_EResponseHttpStatusCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResponseHttpStatusCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResponseURL;
class UScriptStruct* FResponseURL::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResponseURL.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResponseURL.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponseURL, Z_Construct_UPackage__Script_KosMos(), TEXT("ResponseURL"));
	}
	return Z_Registration_Info_UScriptStruct_ResponseURL.OuterSingleton;
}
template<> KOSMOS_API UScriptStruct* StaticStruct<FResponseURL>()
{
	return FResponseURL::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResponseURL_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Op_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Op;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Portal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponseURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponseURL>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Protocol_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Protocol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Valid_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Valid), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, RedirectURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_RedirectURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_RedirectURL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op_Inner = { "Op", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Op), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Portal_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/ResponseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseURL, Portal), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Portal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Portal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponseURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_RedirectURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseURL_Statics::NewProp_Portal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponseURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		&NewStructOps,
		"ResponseURL",
		sizeof(FResponseURL),
		alignof(FResponseURL),
		Z_Construct_UScriptStruct_FResponseURL_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseURL_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponseURL()
	{
		if (!Z_Registration_Info_UScriptStruct_ResponseURL.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResponseURL.InnerSingleton, Z_Construct_UScriptStruct_FResponseURL_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResponseURL.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::EnumInfo[] = {
		{ EResponseVerb_StaticEnum, TEXT("EResponseVerb"), &Z_Registration_Info_UEnum_EResponseVerb, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3951540024U) },
		{ EResponseContentType_StaticEnum, TEXT("EResponseContentType"), &Z_Registration_Info_UEnum_EResponseContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1106246304U) },
		{ EResponseStatus_StaticEnum, TEXT("EResponseStatus"), &Z_Registration_Info_UEnum_EResponseStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2673972395U) },
		{ EResponseHttpStatusCode_StaticEnum, TEXT("EResponseHttpStatusCode"), &Z_Registration_Info_UEnum_EResponseHttpStatusCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1579405313U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::ScriptStructInfo[] = {
		{ FResponseURL::StaticStruct, Z_Construct_UScriptStruct_FResponseURL_Statics::NewStructOps, TEXT("ResponseURL"), &Z_Registration_Info_UScriptStruct_ResponseURL, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResponseURL), 1889352068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_2945201526(TEXT("/Script/KosMos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
