// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPMeleeCombat_init() {}
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TPMeleeCombat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TPMeleeCombat()
	{
		if (!Z_Registration_Info_UPackage__Script_TPMeleeCombat.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TPMeleeCombat",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9C796217,
				0x8DCB10C8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TPMeleeCombat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TPMeleeCombat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TPMeleeCombat(Z_Construct_UPackage__Script_TPMeleeCombat, TEXT("/Script/TPMeleeCombat"), Z_Registration_Info_UPackage__Script_TPMeleeCombat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C796217, 0x8DCB10C8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
