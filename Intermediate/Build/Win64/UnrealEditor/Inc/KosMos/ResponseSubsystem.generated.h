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
class UResponseJsonValue;
enum class EResponseVerb : uint8;
enum class EResponseContentType : uint8;
#ifdef KOSMOS_ResponseSubsystem_generated_h
#error "ResponseSubsystem.generated.h already included, missing '#pragma once' in ResponseSubsystem.h"
#endif
#define KOSMOS_ResponseSubsystem_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_13_DELEGATE \
struct _Script_KosMos_eventResponseCallDelegate_Parms \
{ \
	UResponseJSON* Request; \
}; \
static inline void FResponseCallDelegate_DelegateWrapper(const FScriptDelegate& ResponseCallDelegate, UResponseJSON* Request) \
{ \
	_Script_KosMos_eventResponseCallDelegate_Parms Parms; \
	Parms.Request=Request; \
	ResponseCallDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponseCallResponse_Statics; \
	KOSMOS_API static class UScriptStruct* StaticStruct();


template<> KOSMOS_API UScriptStruct* StaticStruct<struct FResponseCallResponse>();

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestLog); \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructResponseJsonObject); \
	DECLARE_FUNCTION(execConstructResponseJsonObject); \
	DECLARE_FUNCTION(execConstructResponseRequestExt); \
	DECLARE_FUNCTION(execConstructResponseRequest); \
	DECLARE_FUNCTION(execCallURL);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestLog); \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructResponseJsonObject); \
	DECLARE_FUNCTION(execConstructResponseJsonObject); \
	DECLARE_FUNCTION(execConstructResponseRequestExt); \
	DECLARE_FUNCTION(execConstructResponseRequest); \
	DECLARE_FUNCTION(execCallURL);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResponseSubsystem(); \
	friend struct Z_Construct_UClass_UResponseSubsystem_Statics; \
public: \
	DECLARE_CLASS(UResponseSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUResponseSubsystem(); \
	friend struct Z_Construct_UClass_UResponseSubsystem_Statics; \
public: \
	DECLARE_CLASS(UResponseSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseSubsystem(UResponseSubsystem&&); \
	NO_API UResponseSubsystem(const UResponseSubsystem&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseSubsystem(UResponseSubsystem&&); \
	NO_API UResponseSubsystem(const UResponseSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResponseSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_39_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class UResponseSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
