// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInfoStruct;
class AActor;
class UPrimitiveComponent;
class UMaterial;
#ifdef KOSMOS_DynamicMaterialActor_generated_h
#error "DynamicMaterialActor.generated.h already included, missing '#pragma once' in DynamicMaterialActor.h"
#endif
#define KOSMOS_DynamicMaterialActor_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInfoStruct_Statics; \
	KOSMOS_API static class UScriptStruct* StaticStruct();


template<> KOSMOS_API UScriptStruct* StaticStruct<struct FInfoStruct>();

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitHitActorInfoStruct); \
	DECLARE_FUNCTION(execFindInfoMaterialsChange); \
	DECLARE_FUNCTION(execInitDynamicMaterialItem);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitHitActorInfoStruct); \
	DECLARE_FUNCTION(execFindInfoMaterialsChange); \
	DECLARE_FUNCTION(execInitDynamicMaterialItem);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicMaterialActor(); \
	friend struct Z_Construct_UClass_ADynamicMaterialActor_Statics; \
public: \
	DECLARE_CLASS(ADynamicMaterialActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ADynamicMaterialActor)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesADynamicMaterialActor(); \
	friend struct Z_Construct_UClass_ADynamicMaterialActor_Statics; \
public: \
	DECLARE_CLASS(ADynamicMaterialActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ADynamicMaterialActor)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynamicMaterialActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicMaterialActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicMaterialActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMaterialActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicMaterialActor(ADynamicMaterialActor&&); \
	NO_API ADynamicMaterialActor(const ADynamicMaterialActor&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicMaterialActor(ADynamicMaterialActor&&); \
	NO_API ADynamicMaterialActor(const ADynamicMaterialActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicMaterialActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMaterialActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADynamicMaterialActor)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_26_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class ADynamicMaterialActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
