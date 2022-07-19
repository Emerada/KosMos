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
enum class ERJson : uint8;
#ifdef KOSMOS_ResponseJsonValue_generated_h
#error "ResponseJsonValue.generated.h already included, missing '#pragma once' in ResponseJsonValue.h"
#endif
#define KOSMOS_ResponseJsonValue_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsInt64); \
	DECLARE_FUNCTION(execAsInt32); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execReset);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsInt64); \
	DECLARE_FUNCTION(execAsInt32); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execReset);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResponseJsonValue(); \
	friend struct Z_Construct_UClass_UResponseJsonValue_Statics; \
public: \
	DECLARE_CLASS(UResponseJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJsonValue)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUResponseJsonValue(); \
	friend struct Z_Construct_UClass_UResponseJsonValue_Statics; \
public: \
	DECLARE_CLASS(UResponseJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UResponseJsonValue)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJsonValue(UResponseJsonValue&&); \
	NO_API UResponseJsonValue(const UResponseJsonValue&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponseJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponseJsonValue(UResponseJsonValue&&); \
	NO_API UResponseJsonValue(const UResponseJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponseJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponseJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponseJsonValue)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_20_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ResponseJsonValue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class UResponseJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseJsonValue_h


#define FOREACH_ENUM_ERJSON(op) \
	op(ERJson::None) \
	op(ERJson::Null) \
	op(ERJson::String) \
	op(ERJson::Number) \
	op(ERJson::Boolean) \
	op(ERJson::Array) \
	op(ERJson::Object) 

enum class ERJson : uint8;
template<> KOSMOS_API UEnum* StaticEnum<ERJson>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
