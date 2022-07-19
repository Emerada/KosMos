// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/CountryInformationStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountryInformationStruct() {}
// Cross Module References
	KOSMOS_API UScriptStruct* Z_Construct_UScriptStruct_FCountryInformationStruct();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCountryInformationStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCountryInformationStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CountryInformationStruct;
class UScriptStruct* FCountryInformationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CountryInformationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CountryInformationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountryInformationStruct, Z_Construct_UPackage__Script_KosMos(), TEXT("CountryInformationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CountryInformationStruct.OuterSingleton;
}
template<> KOSMOS_API UScriptStruct* StaticStruct<FCountryInformationStruct>()
{
	return FCountryInformationStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCountryInformationStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProvinceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProvinceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CityName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CityName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CountryInformationStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountryInformationStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_ProvinceName_MetaData[] = {
		{ "Category", "CountryInformation" },
		{ "ModuleRelativePath", "Public/CountryInformationStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_ProvinceName = { "ProvinceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInformationStruct, ProvinceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_ProvinceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_ProvinceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_CityName_MetaData[] = {
		{ "Category", "CountryInformation" },
		{ "ModuleRelativePath", "Public/CountryInformationStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_CityName = { "CityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInformationStruct, CityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_CityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_CityName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_RoadName_MetaData[] = {
		{ "Category", "CountryInformation" },
		{ "ModuleRelativePath", "Public/CountryInformationStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_RoadName = { "RoadName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCountryInformationStruct, RoadName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_RoadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_RoadName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_ProvinceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_CityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewProp_RoadName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CountryInformationStruct",
		sizeof(FCountryInformationStruct),
		alignof(FCountryInformationStruct),
		Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCountryInformationStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_CountryInformationStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CountryInformationStruct.InnerSingleton, Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CountryInformationStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_CountryInformationStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_CountryInformationStruct_h_Statics::ScriptStructInfo[] = {
		{ FCountryInformationStruct::StaticStruct, Z_Construct_UScriptStruct_FCountryInformationStruct_Statics::NewStructOps, TEXT("CountryInformationStruct"), &Z_Registration_Info_UScriptStruct_CountryInformationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCountryInformationStruct), 2547281403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_CountryInformationStruct_h_529694126(TEXT("/Script/KosMos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_CountryInformationStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_CountryInformationStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
