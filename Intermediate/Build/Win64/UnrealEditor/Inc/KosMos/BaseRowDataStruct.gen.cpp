// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/BaseRowDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRowDataStruct() {}
// Cross Module References
	KOSMOS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRowDataStruct();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBaseRowDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBaseRowDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseRowDataStruct;
class UScriptStruct* FBaseRowDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseRowDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseRowDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseRowDataStruct, Z_Construct_UPackage__Script_KosMos(), TEXT("BaseRowDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BaseRowDataStruct.OuterSingleton;
}
template<> KOSMOS_API UScriptStruct* StaticStruct<FBaseRowDataStruct>()
{
	return FBaseRowDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_City;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mileage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mileage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseRowDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_City_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, City), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_City_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_RoadName_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_RoadName = { "RoadName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, RoadName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_RoadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_RoadName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Mileage_MetaData[] = {
		{ "Category", "BaseRowData" },
		{ "ModuleRelativePath", "Public/BaseRowDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Mileage = { "Mileage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseRowDataStruct, Mileage), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Mileage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Mileage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_City,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_RoadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewProp_Mileage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BaseRowDataStruct",
		sizeof(FBaseRowDataStruct),
		alignof(FBaseRowDataStruct),
		Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseRowDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseRowDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseRowDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseRowDataStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_BaseRowDataStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_BaseRowDataStruct_h_Statics::ScriptStructInfo[] = {
		{ FBaseRowDataStruct::StaticStruct, Z_Construct_UScriptStruct_FBaseRowDataStruct_Statics::NewStructOps, TEXT("BaseRowDataStruct"), &Z_Registration_Info_UScriptStruct_BaseRowDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseRowDataStruct), 169903509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_BaseRowDataStruct_h_2556643826(TEXT("/Script/KosMos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_BaseRowDataStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_BaseRowDataStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
