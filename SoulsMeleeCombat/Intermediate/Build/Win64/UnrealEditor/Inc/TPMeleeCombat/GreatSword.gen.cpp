// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/GreatSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreatSword() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AGreatSword_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AGreatSword();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void AGreatSword::StaticRegisterNativesAGreatSword()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreatSword);
	UClass* Z_Construct_UClass_AGreatSword_NoRegister()
	{
		return AGreatSword::StaticClass();
	}
	struct Z_Construct_UClass_AGreatSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreatSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreatSword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/Weapons/GreatSword.h" },
		{ "ModuleRelativePath", "Player/Weapons/GreatSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreatSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreatSword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreatSword_Statics::ClassParams = {
		&AGreatSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGreatSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGreatSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGreatSword()
	{
		if (!Z_Registration_Info_UClass_AGreatSword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGreatSword.OuterSingleton, Z_Construct_UClass_AGreatSword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGreatSword.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<AGreatSword>()
	{
		return AGreatSword::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreatSword);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_GreatSword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_GreatSword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGreatSword, AGreatSword::StaticClass, TEXT("AGreatSword"), &Z_Registration_Info_UClass_AGreatSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreatSword), 234855016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_GreatSword_h_3512742372(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_GreatSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_GreatSword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
