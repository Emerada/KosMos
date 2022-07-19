// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOSMOS_UDPReceiver_generated_h
#error "UDPReceiver.generated.h already included, missing '#pragma once' in UDPReceiver.h"
#endif
#define KOSMOS_UDPReceiver_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDataRecv); \
	DECLARE_FUNCTION(execStartUDPReceiver);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDataRecv); \
	DECLARE_FUNCTION(execStartUDPReceiver);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUDPReceiver(); \
	friend struct Z_Construct_UClass_AUDPReceiver_Statics; \
public: \
	DECLARE_CLASS(AUDPReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(AUDPReceiver)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAUDPReceiver(); \
	friend struct Z_Construct_UClass_AUDPReceiver_Statics; \
public: \
	DECLARE_CLASS(AUDPReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(AUDPReceiver)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPReceiver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPReceiver(AUDPReceiver&&); \
	NO_API AUDPReceiver(const AUDPReceiver&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPReceiver(AUDPReceiver&&); \
	NO_API AUDPReceiver(const AUDPReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUDPReceiver)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_10_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class AUDPReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
