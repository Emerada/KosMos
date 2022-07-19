// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KosMos/Public/DynamicMaterialActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMaterialActor() {}
// Cross Module References
	KOSMOS_API UScriptStruct* Z_Construct_UScriptStruct_FInfoStruct();
	UPackage* Z_Construct_UPackage__Script_KosMos();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ADynamicMaterialActor_NoRegister();
	KOSMOS_API UClass* Z_Construct_UClass_ADynamicMaterialActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InfoStruct;
class UScriptStruct* FInfoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InfoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InfoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInfoStruct, Z_Construct_UPackage__Script_KosMos(), TEXT("InfoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InfoStruct.OuterSingleton;
}
template<> KOSMOS_API UScriptStruct* StaticStruct<FInfoStruct>()
{
	return FInfoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInfoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InfoActor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InfoMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfoMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInfoStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoActor_MetaData[] = {
		{ "Category", "InfoStruct" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoActor = { "InfoActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInfoStruct, InfoActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoActor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials_Inner = { "InfoMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials_MetaData[] = {
		{ "Category", "InfoStruct" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials = { "InfoMaterials", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInfoStruct, InfoMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfoStruct_Statics::NewProp_InfoMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
		nullptr,
		&NewStructOps,
		"InfoStruct",
		sizeof(FInfoStruct),
		alignof(FInfoStruct),
		Z_Construct_UScriptStruct_FInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfoStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInfoStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfoStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInfoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_InfoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InfoStruct.InnerSingleton, Z_Construct_UScriptStruct_FInfoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InfoStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(ADynamicMaterialActor::execInitHitActorInfoStruct)
	{
		P_GET_TARRAY_REF(FInfoStruct,Z_Param_Out_RefInfoStruct);
		P_GET_OBJECT(AActor,Z_Param_RefActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_RefComponent);
		P_GET_OBJECT(UMaterial,Z_Param_InitMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitHitActorInfoStruct(Z_Param_Out_RefInfoStruct,Z_Param_RefActor,Z_Param_RefComponent,Z_Param_InitMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMaterialActor::execFindInfoMaterialsChange)
	{
		P_GET_TARRAY_REF(FInfoStruct,Z_Param_Out_RefInfoStruct);
		P_GET_OBJECT(AActor,Z_Param_RefActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindInfoMaterialsChange(Z_Param_Out_RefInfoStruct,Z_Param_RefActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMaterialActor::execInitDynamicMaterialItem)
	{
		P_GET_OBJECT(UMaterial,Z_Param_InitMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitDynamicMaterialItem(Z_Param_InitMaterial);
		P_NATIVE_END;
	}
	void ADynamicMaterialActor::StaticRegisterNativesADynamicMaterialActor()
	{
		UClass* Class = ADynamicMaterialActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindInfoMaterialsChange", &ADynamicMaterialActor::execFindInfoMaterialsChange },
			{ "InitDynamicMaterialItem", &ADynamicMaterialActor::execInitDynamicMaterialItem },
			{ "InitHitActorInfoStruct", &ADynamicMaterialActor::execInitHitActorInfoStruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics
	{
		struct DynamicMaterialActor_eventFindInfoMaterialsChange_Parms
		{
			TArray<FInfoStruct> RefInfoStruct;
			AActor* RefActor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefInfoStruct_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RefInfoStruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefInfoStruct_Inner = { "RefInfoStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInfoStruct, METADATA_PARAMS(nullptr, 0) }; // 1656012450
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefInfoStruct = { "RefInfoStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventFindInfoMaterialsChange_Parms, RefInfoStruct), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1656012450
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefActor = { "RefActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventFindInfoMaterialsChange_Parms, RefActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefInfoStruct_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefInfoStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::NewProp_RefActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMaterialActor, nullptr, "FindInfoMaterialsChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::DynamicMaterialActor_eventFindInfoMaterialsChange_Parms), Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics
	{
		struct DynamicMaterialActor_eventInitDynamicMaterialItem_Parms
		{
			UMaterial* InitMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::NewProp_InitMaterial = { "InitMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventInitDynamicMaterialItem_Parms, InitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::NewProp_InitMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMaterialActor, nullptr, "InitDynamicMaterialItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::DynamicMaterialActor_eventInitDynamicMaterialItem_Parms), Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics
	{
		struct DynamicMaterialActor_eventInitHitActorInfoStruct_Parms
		{
			TArray<FInfoStruct> RefInfoStruct;
			AActor* RefActor;
			UPrimitiveComponent* RefComponent;
			UMaterial* InitMaterial;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefInfoStruct_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RefInfoStruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefInfoStruct_Inner = { "RefInfoStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInfoStruct, METADATA_PARAMS(nullptr, 0) }; // 1656012450
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefInfoStruct = { "RefInfoStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventInitHitActorInfoStruct_Parms, RefInfoStruct), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1656012450
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefActor = { "RefActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventInitHitActorInfoStruct_Parms, RefActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefComponent = { "RefComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventInitHitActorInfoStruct_Parms, RefComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_InitMaterial = { "InitMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicMaterialActor_eventInitHitActorInfoStruct_Parms, InitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefInfoStruct_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefInfoStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_RefComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::NewProp_InitMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMaterialActor, nullptr, "InitHitActorInfoStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::DynamicMaterialActor_eventInitHitActorInfoStruct_Parms), Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicMaterialActor);
	UClass* Z_Construct_UClass_ADynamicMaterialActor_NoRegister()
	{
		return ADynamicMaterialActor::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicMaterialActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitActorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitActorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitActorArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoOnce_MetaData[];
#endif
		static void NewProp_bDoOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoOnce2_MetaData[];
#endif
		static void NewProp_bDoOnce2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoOnce2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfoStruct_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoStruct_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfoStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicMaterialActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KosMos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADynamicMaterialActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynamicMaterialActor_FindInfoMaterialsChange, "FindInfoMaterialsChange" }, // 2705873333
		{ &Z_Construct_UFunction_ADynamicMaterialActor_InitDynamicMaterialItem, "InitDynamicMaterialItem" }, // 716353698
		{ &Z_Construct_UFunction_ADynamicMaterialActor_InitHitActorInfoStruct, "InitHitActorInfoStruct" }, // 3238195850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMaterialActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMaterialActor.h" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray_Inner = { "HitActorArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray_MetaData[] = {
		{ "Category", "DynamicMaterialActor" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray = { "HitActorArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicMaterialActor, HitActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce_MetaData[] = {
		{ "Category", "DynamicMaterialActor" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	void Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce_SetBit(void* Obj)
	{
		((ADynamicMaterialActor*)Obj)->bDoOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce = { "bDoOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADynamicMaterialActor), &Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2_MetaData[] = {
		{ "Category", "DynamicMaterialActor" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	void Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2_SetBit(void* Obj)
	{
		((ADynamicMaterialActor*)Obj)->bDoOnce2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2 = { "bDoOnce2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADynamicMaterialActor), &Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct_Inner = { "InfoStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInfoStruct, METADATA_PARAMS(nullptr, 0) }; // 1656012450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct_MetaData[] = {
		{ "Category", "DynamicMaterialActor" },
		{ "ModuleRelativePath", "Public/DynamicMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct = { "InfoStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicMaterialActor, InfoStruct), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct_MetaData)) }; // 1656012450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicMaterialActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_HitActorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_bDoOnce2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMaterialActor_Statics::NewProp_InfoStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicMaterialActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicMaterialActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicMaterialActor_Statics::ClassParams = {
		&ADynamicMaterialActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADynamicMaterialActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicMaterialActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMaterialActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicMaterialActor()
	{
		if (!Z_Registration_Info_UClass_ADynamicMaterialActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicMaterialActor.OuterSingleton, Z_Construct_UClass_ADynamicMaterialActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADynamicMaterialActor.OuterSingleton;
	}
	template<> KOSMOS_API UClass* StaticClass<ADynamicMaterialActor>()
	{
		return ADynamicMaterialActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicMaterialActor);
	struct Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ScriptStructInfo[] = {
		{ FInfoStruct::StaticStruct, Z_Construct_UScriptStruct_FInfoStruct_Statics::NewStructOps, TEXT("InfoStruct"), &Z_Registration_Info_UScriptStruct_InfoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInfoStruct), 1656012450U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicMaterialActor, ADynamicMaterialActor::StaticClass, TEXT("ADynamicMaterialActor"), &Z_Registration_Info_UClass_ADynamicMaterialActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicMaterialActor), 2997556728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_3047283843(TEXT("/Script/KosMos"),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Emeralda_Plugins_KosMos_Source_KosMos_Public_DynamicMaterialActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
