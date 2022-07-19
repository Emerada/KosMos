// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKosMos_init() {}
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_TcpSocketConnectDelegate__DelegateSignature();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_TcpSocketDisconnectDelegate__DelegateSignature();
	KOSMOS_API UFunction* Z_Construct_UDelegateFunction_KosMos_TcpSocketReceivedMessageDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KosMos;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KosMos()
	{
		if (!Z_Registration_Info_UPackage__Script_KosMos.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_OnRequestComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_OnRequestFail__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_ResponseCallDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_TcpSocketConnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_TcpSocketDisconnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KosMos_TcpSocketReceivedMessageDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KosMos",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x26565160,
				0x9F001726,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KosMos.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KosMos.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KosMos(Z_Construct_UPackage__Script_KosMos, TEXT("/Script/KosMos"), Z_Registration_Info_UPackage__Script_KosMos, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x26565160, 0x9F001726));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
