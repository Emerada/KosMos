// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOSMOS_ResponseTypes_generated_h
#error "ResponseTypes.generated.h already included, missing '#pragma once' in ResponseTypes.h"
#endif
#define KOSMOS_ResponseTypes_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponseURL_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KOSMOS_API UScriptStruct* StaticStruct<struct FResponseURL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseTypes_h


#define FOREACH_ENUM_ERESPONSEVERB(op) \
	op(EResponseVerb::GET) \
	op(EResponseVerb::POST) \
	op(EResponseVerb::PUT) \
	op(EResponseVerb::DEL) \
	op(EResponseVerb::CUSTOM) 

enum class EResponseVerb : uint8;
template<> KOSMOS_API UEnum* StaticEnum<EResponseVerb>();

#define FOREACH_ENUM_ERESPONSECONTENTTYPE(op) \
	op(EResponseContentType::x_www_form_urlencoded_url) \
	op(EResponseContentType::x_www_form_urlencoded_body) \
	op(EResponseContentType::json) \
	op(EResponseContentType::binary) 

enum class EResponseContentType : uint8;
template<> KOSMOS_API UEnum* StaticEnum<EResponseContentType>();

#define FOREACH_ENUM_ERESPONSESTATUS(op) \
	op(EResponseStatus::NotStarted) \
	op(EResponseStatus::Processing) \
	op(EResponseStatus::Failed) \
	op(EResponseStatus::Failed_ConnectionError) \
	op(EResponseStatus::Succeeded) 

enum class EResponseStatus : uint8;
template<> KOSMOS_API UEnum* StaticEnum<EResponseStatus>();

#define FOREACH_ENUM_ERESPONSEHTTPSTATUSCODE(op) \
	op(EResponseHttpStatusCode::Unknown) \
	op(EResponseHttpStatusCode::Continue) \
	op(EResponseHttpStatusCode::SwitchProtocol) \
	op(EResponseHttpStatusCode::Ok) \
	op(EResponseHttpStatusCode::Created) \
	op(EResponseHttpStatusCode::Accepted) \
	op(EResponseHttpStatusCode::Partial) \
	op(EResponseHttpStatusCode::NoContent) \
	op(EResponseHttpStatusCode::ResetContent) \
	op(EResponseHttpStatusCode::PartialContent) \
	op(EResponseHttpStatusCode::Ambiguous) \
	op(EResponseHttpStatusCode::Moved) \
	op(EResponseHttpStatusCode::Redirect) \
	op(EResponseHttpStatusCode::RedirectMethod) \
	op(EResponseHttpStatusCode::NotModified) \
	op(EResponseHttpStatusCode::UseProxy) \
	op(EResponseHttpStatusCode::RedirectKeepVerb) \
	op(EResponseHttpStatusCode::BadRequest) \
	op(EResponseHttpStatusCode::Denied) \
	op(EResponseHttpStatusCode::PaymentReq) \
	op(EResponseHttpStatusCode::Forbidden) \
	op(EResponseHttpStatusCode::NotFound) \
	op(EResponseHttpStatusCode::BadMethod) \
	op(EResponseHttpStatusCode::NoneAcceptable) \
	op(EResponseHttpStatusCode::ProxyAuthReq) \
	op(EResponseHttpStatusCode::RequestTimeout) \
	op(EResponseHttpStatusCode::Conflict) \
	op(EResponseHttpStatusCode::Gone) \
	op(EResponseHttpStatusCode::LengthRequired) \
	op(EResponseHttpStatusCode::PrecondFailed) \
	op(EResponseHttpStatusCode::RequestTooLarge) \
	op(EResponseHttpStatusCode::UriTooLong) \
	op(EResponseHttpStatusCode::UnsupportedMedia) \
	op(EResponseHttpStatusCode::TooManyRequests) \
	op(EResponseHttpStatusCode::RetryWith) \
	op(EResponseHttpStatusCode::ServerError) \
	op(EResponseHttpStatusCode::NotSupported) \
	op(EResponseHttpStatusCode::BadGateway) \
	op(EResponseHttpStatusCode::ServiceUnavail) \
	op(EResponseHttpStatusCode::GatewayTimeout) \
	op(EResponseHttpStatusCode::VersionNotSup) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
