// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/TCPIP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCPIP() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_ATCPIP_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ATCPIP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchDir();
// End Cross Module References
	DEFINE_FUNCTION(ATCPIP::execSendTCPData)
	{
		P_GET_OBJECT(ATCPIP,Z_Param_TCPIP);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendTCPData(Z_Param_TCPIP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execClearStringVar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStringVar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execHasSubstring)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_Substring);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchCase);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSubstring(Z_Param_SearchIn,Z_Param_Substring,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execMessageReceived)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Connection_Id);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MessageReceived(Z_Param_Connection_Id,Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Connection_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connected(Z_Param_Connection_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execDisconnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Connection_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnected(Z_Param_Connection_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATCPIP::execInitTCPIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTCPIP();
		P_NATIVE_END;
	}
	void ATCPIP::StaticRegisterNativesATCPIP()
	{
		UClass* Class = ATCPIP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearStringVar", &ATCPIP::execClearStringVar },
			{ "Connected", &ATCPIP::execConnected },
			{ "Disconnected", &ATCPIP::execDisconnected },
			{ "HasSubstring", &ATCPIP::execHasSubstring },
			{ "InitTCPIP", &ATCPIP::execInitTCPIP },
			{ "MessageReceived", &ATCPIP::execMessageReceived },
			{ "SendTCPData", &ATCPIP::execSendTCPData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "ClearStringVar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_ClearStringVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_ClearStringVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_Connected_Statics
	{
		struct TCPIP_eventConnected_Parms
		{
			int32 Connection_Id;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connection_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPIP_Connected_Statics::NewProp_Connection_Id = { "Connection_Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventConnected_Parms, Connection_Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPIP_Connected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_Connected_Statics::NewProp_Connection_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_Connected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_Connected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "Connected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATCPIP_Connected_Statics::TCPIP_eventConnected_Parms), Z_Construct_UFunction_ATCPIP_Connected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_Connected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_Connected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_Connected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_Connected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_Connected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_Disconnected_Statics
	{
		struct TCPIP_eventDisconnected_Parms
		{
			int32 Connection_Id;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connection_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPIP_Disconnected_Statics::NewProp_Connection_Id = { "Connection_Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventDisconnected_Parms, Connection_Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPIP_Disconnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_Disconnected_Statics::NewProp_Connection_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_Disconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_Disconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "Disconnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATCPIP_Disconnected_Statics::TCPIP_eventDisconnected_Parms), Z_Construct_UFunction_ATCPIP_Disconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_Disconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_Disconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_Disconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_Disconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_Disconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_HasSubstring_Statics
	{
		struct TCPIP_eventHasSubstring_Parms
		{
			FString SearchIn;
			FString Substring;
			TEnumAsByte<ESearchCase::Type> SearchCase;
			TEnumAsByte<ESearchDir::Type> SearchDir;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Substring_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Substring;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchCase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchIn = { "SearchIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventHasSubstring_Parms, SearchIn), METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_Substring_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_Substring = { "Substring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventHasSubstring_Parms, Substring), METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_Substring_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_Substring_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventHasSubstring_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(nullptr, 0) }; // 1578437248
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchDir = { "SearchDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventHasSubstring_Parms, SearchDir), Z_Construct_UEnum_CoreUObject_ESearchDir, METADATA_PARAMS(nullptr, 0) }; // 3439898328
	void Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPIP_eventHasSubstring_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPIP_eventHasSubstring_Parms), &Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_Substring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_SearchDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_SearchCase", "IgnoreCase" },
		{ "CPP_Default_SearchDir", "FromStart" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "HasSubstring", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::TCPIP_eventHasSubstring_Parms), Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_HasSubstring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_HasSubstring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "InitTCPIP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_InitTCPIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_InitTCPIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_MessageReceived_Statics
	{
		struct TCPIP_eventMessageReceived_Parms
		{
			int32 Connection_Id;
			TArray<uint8> Message;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connection_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Connection_Id = { "Connection_Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventMessageReceived_Parms, Connection_Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventMessageReceived_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Connection_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "MessageReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::TCPIP_eventMessageReceived_Parms), Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_MessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_MessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATCPIP_SendTCPData_Statics
	{
		struct TCPIP_eventSendTCPData_Parms
		{
			ATCPIP* TCPIP;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TCPIP;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_TCPIP = { "TCPIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TCPIP_eventSendTCPData_Parms, TCPIP), Z_Construct_UClass_ATCPIP_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPIP_eventSendTCPData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TCPIP_eventSendTCPData_Parms), &Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_TCPIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATCPIP, nullptr, "SendTCPData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::TCPIP_eventSendTCPData_Parms), Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATCPIP_SendTCPData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATCPIP_SendTCPData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATCPIP);
	UClass* Z_Construct_UClass_ATCPIP_NoRegister()
	{
		return ATCPIP::StaticClass();
	}
	struct Z_Construct_UClass_ATCPIP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localArrayStr01_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_localArrayStr01;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localArrayStr02_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_localArrayStr02;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpImage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HttpImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToDeviceValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToDeviceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToEventValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToEventValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFieldNameArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonFieldNameArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JsonFieldNameArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceValueArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceValueArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceValueArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_localEventArray01_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localEventArray01_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_localEventArray01;
		static const UECodeGen_Private::FStrPropertyParams NewProp_localEventArray02_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localEventArray02_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_localEventArray02;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterValueArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValueArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterValueArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventValueArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventValueArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventValueArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localModelID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_localModelID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATCPIP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATCPIP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATCPIP_ClearStringVar, "ClearStringVar" }, // 3634921337
		{ &Z_Construct_UFunction_ATCPIP_Connected, "Connected" }, // 2474640858
		{ &Z_Construct_UFunction_ATCPIP_Disconnected, "Disconnected" }, // 3911237172
		{ &Z_Construct_UFunction_ATCPIP_HasSubstring, "HasSubstring" }, // 36924332
		{ &Z_Construct_UFunction_ATCPIP_InitTCPIP, "InitTCPIP" }, // 419534315
		{ &Z_Construct_UFunction_ATCPIP_MessageReceived, "MessageReceived" }, // 2584257
		{ &Z_Construct_UFunction_ATCPIP_SendTCPData, "SendTCPData" }, // 2142817004
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TCPIP.h" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ipAddress_MetaData[] = {
		{ "Category", "TCPIP" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ipAddress), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_port_MetaData[] = {
		{ "Category", "TCPIP" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, port), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ConnectionId), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, DeviceName), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ModelID_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ModelID = { "ModelID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ModelID), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ModelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ModelID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr01_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr01 = { "localArrayStr01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, localArrayStr01), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr01_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr02_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr02 = { "localArrayStr02", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, localArrayStr02), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr02_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_HttpImage_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_HttpImage = { "HttpImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, HttpImage), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_HttpImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_HttpImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ToDeviceValue_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ToDeviceValue = { "ToDeviceValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ToDeviceValue), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToDeviceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToDeviceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ToParameterValue_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ToParameterValue = { "ToParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ToParameterValue), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ToEventValue_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ToEventValue = { "ToEventValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ToEventValue), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToEventValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ToEventValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray_Inner = { "JsonFieldNameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray = { "JsonFieldNameArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, JsonFieldNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray_Inner = { "DeviceValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray = { "DeviceValueArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, DeviceValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01_Inner = { "localEventArray01", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01 = { "localEventArray01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, localEventArray01), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02_Inner = { "localEventArray02", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02 = { "localEventArray02", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, localEventArray02), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray_Inner = { "ParameterValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray = { "ParameterValueArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, ParameterValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray_Inner = { "EventValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray = { "EventValueArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, EventValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCPIP_Statics::NewProp_localModelID_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Public/TCPIP.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATCPIP_Statics::NewProp_localModelID = { "localModelID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATCPIP, localModelID), METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::NewProp_localModelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::NewProp_localModelID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATCPIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ipAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ModelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr01,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localArrayStr02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_HttpImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ToDeviceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ToParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ToEventValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_JsonFieldNameArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_DeviceValueArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray01,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localEventArray02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_ParameterValueArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_EventValueArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATCPIP_Statics::NewProp_localModelID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATCPIP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATCPIP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATCPIP_Statics::ClassParams = {
		&ATCPIP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATCPIP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATCPIP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATCPIP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATCPIP()
	{
		if (!Z_Registration_Info_UClass_ATCPIP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATCPIP.OuterSingleton, Z_Construct_UClass_ATCPIP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATCPIP.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<ATCPIP>()
	{
		return ATCPIP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATCPIP);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATCPIP, ATCPIP::StaticClass, TEXT("ATCPIP"), &Z_Registration_Info_UClass_ATCPIP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATCPIP), 3566998980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_4292449630(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TCPIP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
