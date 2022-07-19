// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOSMOS_TcpSocketSubsystem_generated_h
#error "TcpSocketSubsystem.generated.h already included, missing '#pragma once' in TcpSocketSubsystem.h"
#endif
#define KOSMOS_TcpSocketSubsystem_generated_h

#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_15_DELEGATE \
struct _Script_KosMos_eventTcpSocketDisconnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketDisconnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketDisconnectDelegate, int32 ConnectionId) \
{ \
	_Script_KosMos_eventTcpSocketDisconnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketDisconnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_16_DELEGATE \
struct _Script_KosMos_eventTcpSocketConnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketConnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketConnectDelegate, int32 ConnectionId) \
{ \
	_Script_KosMos_eventTcpSocketConnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketConnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_17_DELEGATE \
struct _Script_KosMos_eventTcpSocketReceivedMessageDelegate_Parms \
{ \
	int32 ConnectionId; \
	TArray<uint8> Message; \
}; \
static inline void FTcpSocketReceivedMessageDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketReceivedMessageDelegate, int32 ConnectionId, TArray<uint8>& Message) \
{ \
	_Script_KosMos_eventTcpSocketReceivedMessageDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	Parms.Message=Message; \
	TcpSocketReceivedMessageDelegate.ProcessDelegate<UObject>(&Parms); \
	Message=Parms.Message; \
}


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_SPARSE_DATA
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTcpSocketSubsystem(); \
	friend struct Z_Construct_UClass_UTcpSocketSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTcpSocketSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UTcpSocketSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTcpSocketSubsystem(); \
	friend struct Z_Construct_UClass_UTcpSocketSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTcpSocketSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KosMos"), NO_API) \
	DECLARE_SERIALIZER(UTcpSocketSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTcpSocketSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTcpSocketSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpSocketSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpSocketSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpSocketSubsystem(UTcpSocketSubsystem&&); \
	NO_API UTcpSocketSubsystem(const UTcpSocketSubsystem&); \
public:


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpSocketSubsystem(UTcpSocketSubsystem&&); \
	NO_API UTcpSocketSubsystem(const UTcpSocketSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpSocketSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpSocketSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTcpSocketSubsystem)


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_23_PROLOG
#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_RPC_WRAPPERS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_INCLASS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_SPARSE_DATA \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOSMOS_API UClass* StaticClass<class UTcpSocketSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TcpSocketSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
