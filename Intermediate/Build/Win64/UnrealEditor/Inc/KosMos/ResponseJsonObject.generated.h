// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResponseJsonObject;
 
class UResponseJsonValue;
#ifdef KOSMOS_ResponseJsonObject_generated_h
#error "ResponseJsonObject.generated.h already included, missing '#pragma once' in ResponseJsonObject.h"
#endif
#define KOSMOS_ResponseJsonObject_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteToFilePath); \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetIntegerArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetMapFields_bool); \
	DECLARE_FUNCTION(execSetMapFields_int64); \
	DECLARE_FUNCTION(execSetMapFields_int32); \
	DECLARE_FUNCTION(execSetMapFields_uint8); \
	DECLARE_FUNCTION(execSetMapFields_string); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetInt64Field); \
	DECLARE_FUNCTION(execGetInt64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteToFilePath); \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetIntegerArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetMapFields_bool); \
	DECLARE_FUNCTION(execSetMapFields_int64); \
	DECLARE_FUNCTION(execSetMapFields_int32); \
	DECLARE_FUNCTION(execSetMapFields_uint8); \
	DECLARE_FUNCTION(execSetMapFields_string); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetInt64Field); \
	DECLARE_FUNCTION(execGetInt64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResponseJsonObject(); \
	friend struct Z_Construct_UClass_UResponseJsonObject_Statics; \
public: \
	DECLARE_CLASS(UResponseJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJsonObject)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUResponseJsonObject(); \
	friend struct Z_Construct_UClass_UResponseJsonObject_Statics; \
public: \
	DECLARE_CLASS(UResponseJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJsonObject)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJsonObject(UResponseJsonObject&&); \
	NO_API UResponseJsonObject(const UResponseJsonObject&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJsonObject(UResponseJsonObject&&); \
	NO_API UResponseJsonObject(const UResponseJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJsonObject)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_13_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ResponseJsonObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class UResponseJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
