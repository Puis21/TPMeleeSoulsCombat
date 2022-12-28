// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/DamageType/AttackDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackDamageType() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UAttackDamageType_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UAttackDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EDamageType();
// End Cross Module References
	void UAttackDamageType::StaticRegisterNativesUAttackDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackDamageType);
	UClass* Z_Construct_UClass_UAttackDamageType_NoRegister()
	{
		return UAttackDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UAttackDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/Weapons/DamageType/AttackDamageType.h" },
		{ "ModuleRelativePath", "Player/Weapons/DamageType/AttackDamageType.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage Type" },
		{ "ModuleRelativePath", "Player/Weapons/DamageType/AttackDamageType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackDamageType, DamageType), Z_Construct_UEnum_TPMeleeCombat_EDamageType, METADATA_PARAMS(Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType_MetaData)) }; // 403459661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDamageType_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackDamageType_Statics::ClassParams = {
		&UAttackDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttackDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDamageType_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackDamageType()
	{
		if (!Z_Registration_Info_UClass_UAttackDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackDamageType.OuterSingleton, Z_Construct_UClass_UAttackDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackDamageType.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UAttackDamageType>()
	{
		return UAttackDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackDamageType);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_DamageType_AttackDamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_DamageType_AttackDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackDamageType, UAttackDamageType::StaticClass, TEXT("UAttackDamageType"), &Z_Registration_Info_UClass_UAttackDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackDamageType), 696867120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_DamageType_AttackDamageType_h_3598759794(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_DamageType_AttackDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_DamageType_AttackDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
