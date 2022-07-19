// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/UDPSender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPSender() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_AUDPSender_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_AUDPSender();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
// End Cross Module References
	DEFINE_FUNCTION(AUDPSender::execStartUDPSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_YourChosenSocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TheIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThePort);
		P_GET_UBOOL(Z_Param_UDP);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartUDPSender(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort,Z_Param_UDP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUDPSender::execUDPSender_SendString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UDPSender_SendString(Z_Param_ToSend);
		P_NATIVE_END;
	}
	void AUDPSender::StaticRegisterNativesAUDPSender()
	{
		UClass* Class = AUDPSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartUDPSender", &AUDPSender::execStartUDPSender },
			{ "UDPSender_SendString", &AUDPSender::execUDPSender_SendString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics
	{
		struct UDPSender_eventStartUDPSender_Parms
		{
			FString YourChosenSocketName;
			FString TheIP;
			int32 ThePort;
			bool UDP;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YourChosenSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_YourChosenSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TheIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThePort;
		static void NewProp_UDP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UDP;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_YourChosenSocketName = { "YourChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, YourChosenSocketName), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData)) };
	void Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_UDP_SetBit(void* Obj)
	{
		((UDPSender_eventStartUDPSender_Parms*)Obj)->UDP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_UDP = { "UDP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPSender_eventStartUDPSender_Parms), &Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_UDP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPSender_eventStartUDPSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPSender_eventStartUDPSender_Parms), &Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_YourChosenSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_UDP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPSender, nullptr, "StartUDPSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::UDPSender_eventStartUDPSender_Parms), Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPSender_StartUDPSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics
	{
		struct UDPSender_eventUDPSender_SendString_Parms
		{
			FString ToSend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ToSend = { "ToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventUDPSender_SendString_Parms, ToSend), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPSender_eventUDPSender_SendString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPSender_eventUDPSender_SendString_Parms), &Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ToSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPSender, nullptr, "UDPSender_SendString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::UDPSender_eventUDPSender_SendString_Parms), Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPSender_UDPSender_SendString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUDPSender_UDPSender_SendString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUDPSender);
	UClass* Z_Construct_UClass_AUDPSender_NoRegister()
	{
		return AUDPSender::StaticClass();
	}
	struct Z_Construct_UClass_AUDPSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnScreenDebugMessages_MetaData[];
#endif
		static void NewProp_ShowOnScreenDebugMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOnScreenDebugMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChosenSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChosenIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChosenPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUDP_MetaData[];
#endif
		static void NewProp_bUseUDP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUDP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUDPSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUDPSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUDPSender_StartUDPSender, "StartUDPSender" }, // 225906452
		{ &Z_Construct_UFunction_AUDPSender_UDPSender_SendString, "UDPSender_SendString" }, // 795813928
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UDPSender.h" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages_MetaData[] = {
		{ "Category", "UDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	void Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages_SetBit(void* Obj)
	{
		((AUDPSender*)Obj)->ShowOnScreenDebugMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages = { "ShowOnScreenDebugMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUDPSender), &Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenSocketName_MetaData[] = {
		{ "Category", "SendUDP" },
		{ "Comment", "//const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool UDP\n" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
		{ "ToolTip", "const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, bool UDP" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenSocketName = { "ChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPSender, ChosenSocketName), METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenIP_MetaData[] = {
		{ "Category", "SendUDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenIP = { "ChosenIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPSender, ChosenIP), METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenPort_MetaData[] = {
		{ "Category", "SendUDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenPort = { "ChosenPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPSender, ChosenPort), METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP_MetaData[] = {
		{ "Category", "SendUDP" },
		{ "ModuleRelativePath", "Public/UDPSender.h" },
	};
#endif
	void Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP_SetBit(void* Obj)
	{
		((AUDPSender*)Obj)->bUseUDP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP = { "bUseUDP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUDPSender), &Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUDPSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPSender_Statics::NewProp_ShowOnScreenDebugMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPSender_Statics::NewProp_ChosenPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPSender_Statics::NewProp_bUseUDP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUDPSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUDPSender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUDPSender_Statics::ClassParams = {
		&AUDPSender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUDPSender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUDPSender()
	{
		if (!Z_Registration_Info_UClass_AUDPSender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUDPSender.OuterSingleton, Z_Construct_UClass_AUDPSender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUDPSender.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<AUDPSender>()
	{
		return AUDPSender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUDPSender);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUDPSender, AUDPSender::StaticClass, TEXT("AUDPSender"), &Z_Registration_Info_UClass_AUDPSender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUDPSender), 2484087276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_738734840(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPSender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
