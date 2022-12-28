// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/UI/CharacterOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterOverlay() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCharacterOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UCharacterOverlay::StaticRegisterNativesUCharacterOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterOverlay);
	UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister()
	{
		return UCharacterOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaStatBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaStatBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthStatBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthStatBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CharacterOverlay.h" },
		{ "ModuleRelativePath", "UI/CharacterOverlay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_StaminaStatBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_StaminaStatBar = { "StaminaStatBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, StaminaStatBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_StaminaStatBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_StaminaStatBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthStatBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthStatBar = { "HealthStatBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HealthStatBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthStatBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthStatBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_StaminaStatBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthStatBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams = {
		&UCharacterOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterOverlay()
	{
		if (!Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton, Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UCharacterOverlay>()
	{
		return UCharacterOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOverlay);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_UI_CharacterOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_UI_CharacterOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterOverlay, UCharacterOverlay::StaticClass, TEXT("UCharacterOverlay"), &Z_Registration_Info_UClass_UCharacterOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterOverlay), 3642479646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_UI_CharacterOverlay_h_3406235369(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_UI_CharacterOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_UI_CharacterOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
