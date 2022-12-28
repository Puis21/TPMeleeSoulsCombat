// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseEquipable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCollisionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EWeaponType, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::None", (int64)EWeaponType::None },
		{ "EWeaponType::LightSword", (int64)EWeaponType::LightSword },
		{ "EWeaponType::GreatSword", (int64)EWeaponType::GreatSword },
		{ "EWeaponType::DualSwords", (int64)EWeaponType::DualSwords },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DualSwords.DisplayName", "DualSwords" },
		{ "DualSwords.Name", "EWeaponType::DualSwords" },
		{ "GreatSword.DisplayName", "GreatSword" },
		{ "GreatSword.Name", "EWeaponType::GreatSword" },
		{ "LightSword.DisplayName", "LightSword" },
		{ "LightSword.Name", "EWeaponType::LightSword" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWeaponType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	DEFINE_FUNCTION(ABaseWeapon::execApplyDamage)
	{
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_HitResult);
		P_NATIVE_END;
	}
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
		UClass* Class = ABaseWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &ABaseWeapon::execApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics
	{
		struct BaseWeapon_eventApplyDamage_Parms
		{
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseWeapon_eventApplyDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::BaseWeapon_eventApplyDamage_Parms), Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseWeapon_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseWeapon);
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_eWeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eWeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eWeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_m_sHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeaponCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeaponCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordSheathMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordSheathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SwordSheathMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordDrawMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordDrawMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SwordDrawMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightAttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargedAttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChargedAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChargedAttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FallingAttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallingAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FallingAttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintingAttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintingAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SprintingAttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DodgeMontage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionStatCost_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionStatCost_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionStatCost_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionStatCost_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionStatCost;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionDamageMultiplier_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionDamageMultiplier_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionDamageMultiplier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionDamageMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEquipable,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseWeapon_ApplyDamage, "ApplyDamage" }, // 434113840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Weapons/BaseWeapon.h" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType_MetaData[] = {
		{ "Category", "Weapon Type" },
		{ "Comment", "//void SetAttachedToHand(bool IsAttached); /// MOVED TO PLAYER CHARACTER\n" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
		{ "ToolTip", "void SetAttachedToHand(bool IsAttached);  MOVED TO PLAYER CHARACTER" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType = { "eWeaponType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, eWeaponType), Z_Construct_UEnum_TPMeleeCombat_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType_MetaData)) }; // 1473469626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_sHandSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SocketName" },
		{ "DisplayName", "Right Hand Attached Socket" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_sHandSocketName = { "m_sHandSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, m_sHandSocketName), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_sHandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_sHandSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_fDamage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_fDamage = { "m_fDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, m_fDamage), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_fDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_fDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_MainWeaponCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CollisionComp" },
		{ "DisplayName", "MainWeaponCollisionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_MainWeaponCollision = { "MainWeaponCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, MainWeaponCollision), Z_Construct_UClass_UCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_MainWeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_MainWeaponCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Type" },
		{ "DisplayName", "Damage Type Class" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DamageTypeClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage_Inner = { "SwordSheathMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage_MetaData[] = {
		{ "Category", "Anim | Sword Sheath" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage = { "SwordSheathMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, SwordSheathMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage_Inner = { "SwordDrawMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage_MetaData[] = {
		{ "Category", "Anim | Sword Draw" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage = { "SwordDrawMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, SwordDrawMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage_Inner = { "LightAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage = { "LightAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, LightAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage_Inner = { "HeavyAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage = { "HeavyAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, HeavyAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage_Inner = { "ChargedAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage = { "ChargedAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, ChargedAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage_Inner = { "FallingAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage = { "FallingAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, FallingAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage_Inner = { "SprintingAttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage = { "SprintingAttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, SprintingAttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage_Inner = { "DodgeMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage_MetaData[] = {
		{ "Category", "Anim | Sword Combo" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage = { "DodgeMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, DodgeMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_ValueProp = { "ActionStatCost", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_Key_KeyProp = { "ActionStatCost_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost = { "ActionStatCost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, ActionStatCost), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_MetaData)) }; // 2246722876
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_ValueProp = { "ActionDamageMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_Key_KeyProp = { "ActionDamageMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player/Weapons/BaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier = { "ActionDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, ActionDamageMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_MetaData)) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_eWeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_sHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_m_fDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_MainWeaponCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DamageTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordSheathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SwordDrawMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_LightAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_HeavyAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ChargedAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FallingAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SprintingAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_DodgeMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionStatCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_ActionDamageMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		if (!Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1473469626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseWeapon, ABaseWeapon::StaticClass, TEXT("ABaseWeapon"), &Z_Registration_Info_UClass_ABaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseWeapon), 2223997729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_2344291973(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
