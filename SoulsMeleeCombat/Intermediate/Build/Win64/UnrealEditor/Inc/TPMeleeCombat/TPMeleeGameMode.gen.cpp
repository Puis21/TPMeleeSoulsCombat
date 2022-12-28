// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/TPMeleeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPMeleeGameMode() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeGameMode_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void ATPMeleeGameMode::StaticRegisterNativesATPMeleeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPMeleeGameMode);
	UClass* Z_Construct_UClass_ATPMeleeGameMode_NoRegister()
	{
		return ATPMeleeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPMeleeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPMeleeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPMeleeGameMode.h" },
		{ "ModuleRelativePath", "TPMeleeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPMeleeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPMeleeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPMeleeGameMode_Statics::ClassParams = {
		&ATPMeleeGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATPMeleeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPMeleeGameMode()
	{
		if (!Z_Registration_Info_UClass_ATPMeleeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPMeleeGameMode.OuterSingleton, Z_Construct_UClass_ATPMeleeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPMeleeGameMode.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ATPMeleeGameMode>()
	{
		return ATPMeleeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPMeleeGameMode);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPMeleeGameMode, ATPMeleeGameMode::StaticClass, TEXT("ATPMeleeGameMode"), &Z_Registration_Info_UClass_ATPMeleeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPMeleeGameMode), 1528833026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeGameMode_h_925641186(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_TPMeleeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
