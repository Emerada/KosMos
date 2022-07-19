// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/TimeLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeLock() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_ATimeLock_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ATimeLock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseJSON_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATimeLock::execCallBack)
	{
		P_GET_OBJECT(UResponseJSON,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallBack(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeLock::execGetSystemTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSystemTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeLock::execInitTimeLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTimeLock();
		P_NATIVE_END;
	}
	void ATimeLock::StaticRegisterNativesATimeLock()
	{
		UClass* Class = ATimeLock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallBack", &ATimeLock::execCallBack },
			{ "GetSystemTime", &ATimeLock::execGetSystemTime },
			{ "InitTimeLock", &ATimeLock::execInitTimeLock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeLock_CallBack_Statics
	{
		struct TimeLock_eventCallBack_Parms
		{
			UResponseJSON* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimeLock_CallBack_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeLock_eventCallBack_Parms, Request), Z_Construct_UClass_UResponseJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeLock_CallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeLock_CallBack_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeLock_CallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeLock_CallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeLock, nullptr, "CallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATimeLock_CallBack_Statics::TimeLock_eventCallBack_Parms), Z_Construct_UFunction_ATimeLock_CallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeLock_CallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeLock_CallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeLock_CallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeLock_CallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeLock_CallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics
	{
		struct TimeLock_eventGetSystemTime_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeLock_eventGetSystemTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeLock, nullptr, "GetSystemTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::TimeLock_eventGetSystemTime_Parms), Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeLock_GetSystemTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeLock_GetSystemTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeLock, nullptr, "InitTimeLock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeLock_InitTimeLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeLock_InitTimeLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeLock);
	UClass* Z_Construct_UClass_ATimeLock_NoRegister()
	{
		return ATimeLock::StaticClass();
	}
	struct Z_Construct_UClass_ATimeLock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeToInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Future_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Future;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeLock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeLock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeLock_CallBack, "CallBack" }, // 2725744098
		{ &Z_Construct_UFunction_ATimeLock_GetSystemTime, "GetSystemTime" }, // 777972116
		{ &Z_Construct_UFunction_ATimeLock_InitTimeLock, "InitTimeLock" }, // 4011918480
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeLock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeLock.h" },
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeLock_Statics::NewProp_TimeToInt_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeLock_Statics::NewProp_TimeToInt = { "TimeToInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeLock, TimeToInt), METADATA_PARAMS(Z_Construct_UClass_ATimeLock_Statics::NewProp_TimeToInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeLock_Statics::NewProp_TimeToInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeLock_Statics::NewProp_Future_MetaData[] = {
		{ "Category", "TimeLock" },
		{ "ModuleRelativePath", "Public/TimeLock.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeLock_Statics::NewProp_Future = { "Future", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeLock, Future), METADATA_PARAMS(Z_Construct_UClass_ATimeLock_Statics::NewProp_Future_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeLock_Statics::NewProp_Future_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeLock_Statics::NewProp_TimeToInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeLock_Statics::NewProp_Future,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeLock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeLock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeLock_Statics::ClassParams = {
		&ATimeLock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimeLock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimeLock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimeLock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeLock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeLock()
	{
		if (!Z_Registration_Info_UClass_ATimeLock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeLock.OuterSingleton, Z_Construct_UClass_ATimeLock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeLock.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<ATimeLock>()
	{
		return ATimeLock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeLock);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeLock, ATimeLock::StaticClass, TEXT("ATimeLock"), &Z_Registration_Info_UClass_ATimeLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeLock), 343669807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_3086201830(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_TimeLock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
