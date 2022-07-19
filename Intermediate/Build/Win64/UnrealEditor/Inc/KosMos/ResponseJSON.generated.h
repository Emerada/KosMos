// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResponseJSON;
class UResponseJsonObject;
class UObject;
struct FLatentActionInfo;
enum class EResponseStatus : uint8;
enum class EResponseVerb : uint8;
class UResponseJsonValue;
enum class EResponseContentType : uint8;
#ifdef KOSMOS_ResponseJSON_generated_h
#error "ResponseJSON.generated.h already included, missing '#pragma once' in ResponseJSON.h"
#endif
#define KOSMOS_ResponseJSON_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_72_DELEGATE \
struct _Script_KosMos_eventOnRequestComplete_Parms \
{ \
	UResponseJSON* Request; \
}; \
static inline void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UResponseJSON* Request) \
{ \
	_Script_KosMos_eventOnRequestComplete_Parms Parms; \
	Parms.Request=Request; \
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_73_DELEGATE \
struct _Script_KosMos_eventOnRequestFail_Parms \
{ \
	UResponseJSON* Request; \
}; \
static inline void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UResponseJSON* Request) \
{ \
	_Script_KosMos_eventOnRequestFail_Parms Parms; \
	Parms.Request=Request; \
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetResponseContentAsString); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execExecuteProcessRequest); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetVerb); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetResponseValue); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetStringRequestContent); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetResponseContentAsString); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execExecuteProcessRequest); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetVerb); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetResponseValue); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetStringRequestContent); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResponseJSON(); \
	friend struct Z_Construct_UClass_UResponseJSON_Statics; \
public: \
	DECLARE_CLASS(UResponseJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJSON)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUResponseJSON(); \
	friend struct Z_Construct_UClass_UResponseJSON_Statics; \
public: \
	DECLARE_CLASS(UResponseJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJSON)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJSON) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJSON); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJSON(UResponseJSON&&); \
	NO_API UResponseJSON(const UResponseJSON&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJSON(UResponseJSON&&); \
	NO_API UResponseJSON(const UResponseJSON&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJSON); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJSON)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_82_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h_85_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ResponseJSON."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class UResponseJSON>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJSON_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
