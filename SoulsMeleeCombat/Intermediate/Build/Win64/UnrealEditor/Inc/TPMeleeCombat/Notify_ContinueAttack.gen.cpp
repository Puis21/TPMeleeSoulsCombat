// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/Notify_ContinueAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_ContinueAttack() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ContinueAttack_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ContinueAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotify_ContinueAttack::StaticRegisterNativesUNotify_ContinueAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_ContinueAttack);
	UClass* Z_Construct_UClass_UNotify_ContinueAttack_NoRegister()
	{
		return UNotify_ContinueAttack::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_ContinueAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_ContinueAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_ContinueAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/Notify_ContinueAttack.h" },
		{ "ModuleRelativePath", "Player/Notifies/Notify_ContinueAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_ContinueAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_ContinueAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_ContinueAttack_Statics::ClassParams = {
		&UNotify_ContinueAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNotify_ContinueAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_ContinueAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_ContinueAttack()
	{
		if (!Z_Registration_Info_UClass_UNotify_ContinueAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_ContinueAttack.OuterSingleton, Z_Construct_UClass_UNotify_ContinueAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_ContinueAttack.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotify_ContinueAttack>()
	{
		return UNotify_ContinueAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_ContinueAttack);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ContinueAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ContinueAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_ContinueAttack, UNotify_ContinueAttack::StaticClass, TEXT("UNotify_ContinueAttack"), &Z_Registration_Info_UClass_UNotify_ContinueAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_ContinueAttack), 3316483064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ContinueAttack_h_2331543783(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ContinueAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ContinueAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
