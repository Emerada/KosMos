// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/ResponseSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseSettings() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_UResponseSettings_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_UResponseSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KosMos();
// End Cross Module References
	void UResponseSettings::StaticRegisterNativesUResponseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResponseSettings);
	UClass* Z_Construct_UClass_UResponseSettings_NoRegister()
	{
		return UResponseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UResponseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[];
#endif
		static void NewProp_bExtendedLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseChunkedParser_MetaData[];
#endif
		static void NewProp_bUseChunkedParser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseChunkedParser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostErrorsToMessageLog_MetaData[];
#endif
		static void NewProp_bPostErrorsToMessageLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostErrorsToMessageLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResponseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///UResponseSettings\n" },
		{ "IncludePath", "ResponseSettings.h" },
		{ "ModuleRelativePath", "Public/ResponseSettings.h" },
		{ "ToolTip", "//UResponseSettings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "KosMos" },
		{ "ModuleRelativePath", "Public/ResponseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
	{
		((UResponseSettings*)Obj)->bExtendedLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog = { "bExtendedLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResponseSettings), &Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser_MetaData[] = {
		{ "Category", "KosMos" },
		{ "ModuleRelativePath", "Public/ResponseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser_SetBit(void* Obj)
	{
		((UResponseSettings*)Obj)->bUseChunkedParser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser = { "bUseChunkedParser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResponseSettings), &Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData[] = {
		{ "Category", "TcpSocket" },
		{ "ModuleRelativePath", "Public/ResponseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit(void* Obj)
	{
		((UResponseSettings*)Obj)->bPostErrorsToMessageLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog = { "bPostErrorsToMessageLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResponseSettings), &Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResponseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSettings_Statics::NewProp_bExtendedLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSettings_Statics::NewProp_bUseChunkedParser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResponseSettings_Statics::NewProp_bPostErrorsToMessageLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResponseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResponseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResponseSettings_Statics::ClassParams = {
		&UResponseSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResponseSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UResponseSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResponseSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResponseSettings()
	{
		if (!Z_Registration_Info_UClass_UResponseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResponseSettings.OuterSingleton, Z_Construct_UClass_UResponseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResponseSettings.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<UResponseSettings>()
	{
		return UResponseSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResponseSettings);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResponseSettings, UResponseSettings::StaticClass, TEXT("UResponseSettings"), &Z_Registration_Info_UClass_UResponseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResponseSettings), 2975062667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSettings_h_1737699391(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_ResponseSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
