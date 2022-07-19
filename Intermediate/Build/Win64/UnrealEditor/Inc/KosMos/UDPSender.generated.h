// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOSMOS_UDPSender_generated_h
#error "UDPSender.generated.h already included, missing '#pragma once' in UDPSender.h"
#endif
#define KOSMOS_UDPSender_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartUDPSender); \
	DECLARE_FUNCTION(execUDPSender_SendString);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartUDPSender); \
	DECLARE_FUNCTION(execUDPSender_SendString);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUDPSender(); \
	friend struct Z_Construct_UClass_AUDPSender_Statics; \
public: \
	DECLARE_CLASS(AUDPSender, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(AUDPSender)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAUDPSender(); \
	friend struct Z_Construct_UClass_AUDPSender_Statics; \
public: \
	DECLARE_CLASS(AUDPSender, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(AUDPSender)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPSender(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPSender(AUDPSender&&); \
	NO_API AUDPSender(const AUDPSender&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPSender(AUDPSender&&); \
	NO_API AUDPSender(const AUDPSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPSender); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUDPSender)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_10_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class AUDPSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
