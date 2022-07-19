// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATCPIP;
#ifdef KOSMOS_TCPIP_generated_h
#error "TCPIP.generated.h already included, missing '#pragma once' in TCPIP.h"
#endif
#define KOSMOS_TCPIP_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTCPData); \
	DECLARE_FUNCTION(execClearStringVar); \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execMessageReceived); \
	DECLARE_FUNCTION(execConnected); \
	DECLARE_FUNCTION(execDisconnected); \
	DECLARE_FUNCTION(execInitTCPIP);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTCPData); \
	DECLARE_FUNCTION(execClearStringVar); \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execMessageReceived); \
	DECLARE_FUNCTION(execConnected); \
	DECLARE_FUNCTION(execDisconnected); \
	DECLARE_FUNCTION(execInitTCPIP);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATCPIP(); \
	friend struct Z_Construct_UClass_ATCPIP_Statics; \
public: \
	DECLARE_CLASS(ATCPIP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ATCPIP)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATCPIP(); \
	friend struct Z_Construct_UClass_ATCPIP_Statics; \
public: \
	DECLARE_CLASS(ATCPIP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(ATCPIP)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATCPIP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATCPIP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCPIP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCPIP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATCPIP(ATCPIP&&); \
	NO_API ATCPIP(const ATCPIP&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATCPIP(ATCPIP&&); \
	NO_API ATCPIP(const ATCPIP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCPIP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCPIP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATCPIP)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_9_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class ATCPIP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
