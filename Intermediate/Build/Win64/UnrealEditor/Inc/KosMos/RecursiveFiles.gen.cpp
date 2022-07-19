// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/RecursiveFiles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecursiveFiles() {}
// Cross Module References
	KOSMOS_API UClass* Z_Construct_UClass_ARecursiveFiles_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ARecursiveFiles();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ARoadSpline_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARecursiveFiles::execInitRoadSpline)
	{
		P_GET_OBJECT(UDataTable,Z_Param_localDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitRoadSpline(Z_Param_localDataTable);
		P_NATIVE_END;
	}
	void ARecursiveFiles::StaticRegisterNativesARecursiveFiles()
	{
		UClass* Class = ARecursiveFiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitRoadSpline", &ARecursiveFiles::execInitRoadSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics
	{
		struct RecursiveFiles_eventInitRoadSpline_Parms
		{
			UDataTable* localDataTable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_localDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::NewProp_localDataTable = { "localDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecursiveFiles_eventInitRoadSpline_Parms, localDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::NewProp_localDataTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RecursiveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecursiveFiles, nullptr, "InitRoadSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::RecursiveFiles_eventInitRoadSpline_Parms), Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecursiveFiles);
	UClass* Z_Construct_UClass_ARecursiveFiles_NoRegister()
	{
		return ARecursiveFiles::StaticClass();
	}
	struct Z_Construct_UClass_ARecursiveFiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoadSplines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadSplines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecursiveFiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecursiveFiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecursiveFiles_InitRoadSpline, "InitRoadSpline" }, // 3599532894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecursiveFiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecursiveFiles.h" },
		{ "ModuleRelativePath", "Public/RecursiveFiles.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_SplineMesh_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "// UPROPERTY(EditAnywhere,Category=Cesium)\n// TObjectPtr<class ACesiumGeoreference>CesiumGeoreference;\n" },
		{ "ModuleRelativePath", "Public/RecursiveFiles.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere,Category=Cesium)\nTObjectPtr<class ACesiumGeoreference>CesiumGeoreference;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_SplineMesh = { "SplineMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecursiveFiles, SplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_SplineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_SplineMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines_Inner = { "RoadSplines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoadSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecursiveFiles.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines = { "RoadSplines", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecursiveFiles, RoadSplines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecursiveFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_SplineMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecursiveFiles_Statics::NewProp_RoadSplines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecursiveFiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecursiveFiles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecursiveFiles_Statics::ClassParams = {
		&ARecursiveFiles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecursiveFiles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecursiveFiles_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecursiveFiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecursiveFiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecursiveFiles()
	{
		if (!Z_Registration_Info_UClass_ARecursiveFiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecursiveFiles.OuterSingleton, Z_Construct_UClass_ARecursiveFiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARecursiveFiles.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<ARecursiveFiles>()
	{
		return ARecursiveFiles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecursiveFiles);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RecursiveFiles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RecursiveFiles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARecursiveFiles, ARecursiveFiles::StaticClass, TEXT("ARecursiveFiles"), &Z_Registration_Info_UClass_ARecursiveFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecursiveFiles), 947388918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RecursiveFiles_h_2648279425(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RecursiveFiles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_RecursiveFiles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
