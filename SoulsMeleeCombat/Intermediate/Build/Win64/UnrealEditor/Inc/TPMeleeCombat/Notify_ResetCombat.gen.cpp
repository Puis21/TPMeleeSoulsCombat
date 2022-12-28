// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/Notify_ResetCombat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_ResetCombat() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ResetCombat_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ResetCombat();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotify_ResetCombat::StaticRegisterNativesUNotify_ResetCombat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_ResetCombat);
	UClass* Z_Construct_UClass_UNotify_ResetCombat_NoRegister()
	{
		return UNotify_ResetCombat::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_ResetCombat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_ResetCombat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_ResetCombat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/Notify_ResetCombat.h" },
		{ "ModuleRelativePath", "Player/Notifies/Notify_ResetCombat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_ResetCombat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_ResetCombat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_ResetCombat_Statics::ClassParams = {
		&UNotify_ResetCombat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotify_ResetCombat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_ResetCombat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_ResetCombat()
	{
		if (!Z_Registration_Info_UClass_UNotify_ResetCombat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_ResetCombat.OuterSingleton, Z_Construct_UClass_UNotify_ResetCombat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_ResetCombat.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotify_ResetCombat>()
	{
		return UNotify_ResetCombat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_ResetCombat);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetCombat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetCombat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_ResetCombat, UNotify_ResetCombat::StaticClass, TEXT("UNotify_ResetCombat"), &Z_Registration_Info_UClass_UNotify_ResetCombat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_ResetCombat), 3924519419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetCombat_h_1617686213(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetCombat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetCombat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
