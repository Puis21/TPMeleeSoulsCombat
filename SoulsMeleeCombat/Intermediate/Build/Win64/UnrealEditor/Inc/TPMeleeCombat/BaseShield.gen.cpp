// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/BaseShield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShield() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseShield_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseShield();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void ABaseShield::StaticRegisterNativesABaseShield()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseShield);
	UClass* Z_Construct_UClass_ABaseShield_NoRegister()
	{
		return ABaseShield::StaticClass();
	}
	struct Z_Construct_UClass_ABaseShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseShield_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/Weapons/BaseShield.h" },
		{ "ModuleRelativePath", "Player/Weapons/BaseShield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShield>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShield_Statics::ClassParams = {
		&ABaseShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseShield()
	{
		if (!Z_Registration_Info_UClass_ABaseShield.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseShield.OuterSingleton, Z_Construct_UClass_ABaseShield_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseShield.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ABaseShield>()
	{
		return ABaseShield::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseShield);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseShield_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseShield_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseShield, ABaseShield::StaticClass, TEXT("ABaseShield"), &Z_Registration_Info_UClass_ABaseShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShield), 3034418021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseShield_h_1817454379(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseShield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseShield_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
