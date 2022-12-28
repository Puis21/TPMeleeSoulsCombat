// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/Notify_AttachWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotify_AttachWeapon() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_AttachWeapon_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotify_AttachWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotify_AttachWeapon::StaticRegisterNativesUNotify_AttachWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotify_AttachWeapon);
	UClass* Z_Construct_UClass_UNotify_AttachWeapon_NoRegister()
	{
		return UNotify_AttachWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UNotify_AttachWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToHand_MetaData[];
#endif
		static void NewProp_bAttachToHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotify_AttachWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_AttachWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/Notify_AttachWeapon.h" },
		{ "ModuleRelativePath", "Player/Notifies/Notify_AttachWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand_MetaData[] = {
		{ "Category", "Notify_AttachWeapon" },
		{ "ModuleRelativePath", "Player/Notifies/Notify_AttachWeapon.h" },
	};
#endif
	void Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand_SetBit(void* Obj)
	{
		((UNotify_AttachWeapon*)Obj)->bAttachToHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand = { "bAttachToHand", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNotify_AttachWeapon), &Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotify_AttachWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotify_AttachWeapon_Statics::NewProp_bAttachToHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotify_AttachWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotify_AttachWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotify_AttachWeapon_Statics::ClassParams = {
		&UNotify_AttachWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotify_AttachWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_AttachWeapon_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotify_AttachWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotify_AttachWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotify_AttachWeapon()
	{
		if (!Z_Registration_Info_UClass_UNotify_AttachWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotify_AttachWeapon.OuterSingleton, Z_Construct_UClass_UNotify_AttachWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotify_AttachWeapon.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotify_AttachWeapon>()
	{
		return UNotify_AttachWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotify_AttachWeapon);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_AttachWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_AttachWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotify_AttachWeapon, UNotify_AttachWeapon::StaticClass, TEXT("UNotify_AttachWeapon"), &Z_Registration_Info_UClass_UNotify_AttachWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotify_AttachWeapon), 3742386808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_AttachWeapon_h_1004436028(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_AttachWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_Notify_AttachWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
