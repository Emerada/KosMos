// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResponseJSON;
#ifdef KOSMOS_TimeLock_generated_h
#error "TimeLock.generated.h already included, missing '#pragma once' in TimeLock.h"
#endif
#define KOSMOS_TimeLock_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallBack); \
	DECLARE_FUNCTION(execGetSystemTime); \
	DECLARE_FUNCTION(execInitTimeLock);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallBack); \
	DECLARE_FUNCTION(execGetSystemTime); \
	DECLARE_FUNCTION(execInitTimeLock);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeLock(); \
	friend struct Z_Construct_UClass_ATimeLock_Statics; \
public: \
	DECLARE_CLASS(ATimeLock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ATimeLock)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATimeLock(); \
	friend struct Z_Construct_UClass_ATimeLock_Statics; \
public: \
	DECLARE_CLASS(ATimeLock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ATimeLock)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeLock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeLock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeLock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeLock(ATimeLock&&); \
	NO_API ATimeLock(const ATimeLock&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeLock(ATimeLock&&); \
	NO_API ATimeLock(const ATimeLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeLock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeLock)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_9_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class ATimeLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
