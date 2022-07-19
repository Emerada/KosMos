// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/UDPReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPReceiver() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_AUDPReceiver_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_AUDPReceiver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
// End Cross Module References
	DEFINE_FUNCTION(AUDPReceiver::execDataRecv)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_str);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DataRecv(Z_Param_Out_str,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUDPReceiver::execStartUDPReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_YourChosenSocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TheIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThePort);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartUDPReceiver(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort,Z_Param_Out_success);
		P_NATIVE_END;
	}
	void AUDPReceiver::StaticRegisterNativesAUDPReceiver()
	{
		UClass* Class = AUDPReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DataRecv", &AUDPReceiver::execDataRecv },
			{ "StartUDPReceiver", &AUDPReceiver::execStartUDPReceiver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics
	{
		struct UDPReceiver_eventDataRecv_Parms
		{
			FString str;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventDataRecv_Parms, str), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_success_SetBit(void* Obj)
	{
		((UDPReceiver_eventDataRecv_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPReceiver_eventDataRecv_Parms), &Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "DataRecv", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::UDPReceiver_eventDataRecv_Parms), Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_DataRecv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUDPReceiver_DataRecv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics
	{
		struct UDPReceiver_eventStartUDPReceiver_Parms
		{
			FString YourChosenSocketName;
			FString TheIP;
			int32 ThePort;
			bool success;
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
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_YourChosenSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_YourChosenSocketName = { "YourChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventStartUDPReceiver_Parms, YourChosenSocketName), METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_YourChosenSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_YourChosenSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventStartUDPReceiver_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_TheIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventStartUDPReceiver_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ThePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ThePort_MetaData)) };
	void Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_success_SetBit(void* Obj)
	{
		((UDPReceiver_eventStartUDPReceiver_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPReceiver_eventStartUDPReceiver_Parms), &Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_YourChosenSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_TheIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ThePort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "StartUDPReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::UDPReceiver_eventStartUDPReceiver_Parms), Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUDPReceiver);
	UClass* Z_Construct_UClass_AUDPReceiver_NoRegister()
	{
		return AUDPReceiver::StaticClass();
	}
	struct Z_Construct_UClass_AUDPReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_AUDPReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUDPReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUDPReceiver_DataRecv, "DataRecv" }, // 2256837833
		{ &Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver, "StartUDPReceiver" }, // 650168498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UDPReceiver.h" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenSocketName_MetaData[] = {
		{ "Category", "ReceiverUDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenSocketName = { "ChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPReceiver, ChosenSocketName), METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenIP_MetaData[] = {
		{ "Category", "ReceiverUDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenIP = { "ChosenIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPReceiver, ChosenIP), METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenPort_MetaData[] = {
		{ "Category", "ReceiverUDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenPort = { "ChosenPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUDPReceiver, ChosenPort), METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP_MetaData[] = {
		{ "Category", "ReceiverUDP" },
		{ "ModuleRelativePath", "Public/UDPReceiver.h" },
	};
#endif
	void Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP_SetBit(void* Obj)
	{
		((AUDPReceiver*)Obj)->bUseUDP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP = { "bUseUDP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUDPReceiver), &Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUDPReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPReceiver_Statics::NewProp_ChosenPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUDPReceiver_Statics::NewProp_bUseUDP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUDPReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUDPReceiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUDPReceiver_Statics::ClassParams = {
		&AUDPReceiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUDPReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUDPReceiver()
	{
		if (!Z_Registration_Info_UClass_AUDPReceiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUDPReceiver.OuterSingleton, Z_Construct_UClass_AUDPReceiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUDPReceiver.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<AUDPReceiver>()
	{
		return AUDPReceiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUDPReceiver);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUDPReceiver, AUDPReceiver::StaticClass, TEXT("AUDPReceiver"), &Z_Registration_Info_UClass_AUDPReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUDPReceiver), 1573746140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_2558604992(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_UDPReceiver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
