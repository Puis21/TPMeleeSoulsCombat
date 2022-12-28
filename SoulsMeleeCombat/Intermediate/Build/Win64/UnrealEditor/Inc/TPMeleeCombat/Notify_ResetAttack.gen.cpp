// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/Notify_ResetAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_ResetAttack() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ResetAttack_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_ResetAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotify_ResetAttack::StaticRegisterNativesUNotify_ResetAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_ResetAttack);
	UClass* Z_Construct_UClass_UNotify_ResetAttack_NoRegister()
	{
		return UNotify_ResetAttack::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_ResetAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_ResetAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_ResetAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/Notify_ResetAttack.h" },
		{ "ModuleRelativePath", "Player/Notifies/Notify_ResetAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_ResetAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_ResetAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_ResetAttack_Statics::ClassParams = {
		&UNotify_ResetAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNotify_ResetAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_ResetAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_ResetAttack()
	{
		if (!Z_Registration_Info_UClass_UNotify_ResetAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_ResetAttack.OuterSingleton, Z_Construct_UClass_UNotify_ResetAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_ResetAttack.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotify_ResetAttack>()
	{
		return UNotify_ResetAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_ResetAttack);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_ResetAttack, UNotify_ResetAttack::StaticClass, TEXT("UNotify_ResetAttack"), &Z_Registration_Info_UClass_UNotify_ResetAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_ResetAttack), 2379117269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetAttack_h_4106627567(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_ResetAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
