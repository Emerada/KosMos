// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/RoadSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadSpline() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_ARoadSpline_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ARoadSpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ARoadSpline::StaticRegisterNativesARoadSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoadSpline);
	UClass* Z_Construct_UClass_ARoadSpline_NoRegister()
	{
		return ARoadSpline::StaticClass();
	}
	struct Z_Construct_UClass_ARoadSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoadSpline.h" },
		{ "ModuleRelativePath", "Public/RoadSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Comment", "// UPROPERTY()\n// FString RoadName;\n//\n// UPROPERTY()\n// FString Mileage;\n//\n// UPROPERTY()\n// TArray<FString>City;\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadSpline.h" },
		{ "ToolTip", "UPROPERTY()\nFString RoadName;\n\nUPROPERTY()\nFString Mileage;\n\nUPROPERTY()\nTArray<FString>City;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoadSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoadSpline_Statics::ClassParams = {
		&ARoadSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoadSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoadSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadSpline()
	{
		if (!Z_Registration_Info_UClass_ARoadSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadSpline.OuterSingleton, Z_Construct_UClass_ARoadSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoadSpline.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<ARoadSpline>()
	{
		return ARoadSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadSpline);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RoadSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RoadSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoadSpline, ARoadSpline::StaticClass, TEXT("ARoadSpline"), &Z_Registration_Info_UClass_ARoadSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadSpline), 918251014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RoadSpline_h_2849214157(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RoadSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RoadSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
