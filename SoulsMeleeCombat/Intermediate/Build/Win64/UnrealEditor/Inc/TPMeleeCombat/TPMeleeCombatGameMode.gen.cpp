// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/TPMeleeCombatGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPMeleeCombatGameMode() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeCombatGameMode_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeCombatGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void ATPMeleeCombatGameMode::StaticRegisterNativesATPMeleeCombatGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPMeleeCombatGameMode);
	UClass* Z_Construct_UClass_ATPMeleeCombatGameMode_NoRegister()
	{
		return ATPMeleeCombatGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPMeleeCombatGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPMeleeCombatGameMode.h" },
		{ "ModuleRelativePath", "TPMeleeCombatGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPMeleeCombatGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::ClassParams = {
		&ATPMeleeCombatGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPMeleeCombatGameMode()
	{
		if (!Z_Registration_Info_UClass_ATPMeleeCombatGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPMeleeCombatGameMode.OuterSingleton, Z_Construct_UClass_ATPMeleeCombatGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPMeleeCombatGameMode.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ATPMeleeCombatGameMode>()
	{
		return ATPMeleeCombatGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPMeleeCombatGameMode);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeCombatGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeCombatGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPMeleeCombatGameMode, ATPMeleeCombatGameMode::StaticClass, TEXT("ATPMeleeCombatGameMode"), &Z_Registration_Info_UClass_ATPMeleeCombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPMeleeCombatGameMode), 322035004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeCombatGameMode_h_889789087(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeCombatGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeCombatGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
