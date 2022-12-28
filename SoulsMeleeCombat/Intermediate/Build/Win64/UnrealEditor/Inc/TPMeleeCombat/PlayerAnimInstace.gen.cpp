// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstace() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UPlayerAnimInstace_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UPlayerAnimInstace();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EWeaponType();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UAnimInstanceInterface_NoRegister();
// End Cross Module References
	void UPlayerAnimInstace::StaticRegisterNativesUPlayerAnimInstace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstace);
	UClass* Z_Construct_UClass_UPlayerAnimInstace_NoRegister()
	{
		return UPlayerAnimInstace::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weapon_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsAttachedToHand_MetaData[];
#endif
		static void NewProp_m_bIsAttachedToHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsAttachedToHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnimInstace.h" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstace.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "PlayerAnimInstace" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstace.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInstace, Weapon), Z_Construct_UEnum_TPMeleeCombat_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon_MetaData)) }; // 1473469626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand_MetaData[] = {
		{ "Category", "PlayerAnimInstace" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstace.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand_SetBit(void* Obj)
	{
		((UPlayerAnimInstace*)Obj)->m_bIsAttachedToHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand = { "m_bIsAttachedToHand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimInstace), &Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstace_Statics::NewProp_m_bIsAttachedToHand,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPlayerAnimInstace_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(UPlayerAnimInstace, IAnimInstanceInterface), false },  // 2823615410
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstace_Statics::ClassParams = {
		&UPlayerAnimInstace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnimInstace_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstace_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimInstace()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInstace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstace.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInstace.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UPlayerAnimInstace>()
	{
		return UPlayerAnimInstace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstace);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_PlayerAnimInstace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_PlayerAnimInstace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstace, UPlayerAnimInstace::StaticClass, TEXT("UPlayerAnimInstace"), &Z_Registration_Info_UClass_UPlayerAnimInstace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstace), 351982788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_PlayerAnimInstace_h_1857808856(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_PlayerAnimInstace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_PlayerAnimInstace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
