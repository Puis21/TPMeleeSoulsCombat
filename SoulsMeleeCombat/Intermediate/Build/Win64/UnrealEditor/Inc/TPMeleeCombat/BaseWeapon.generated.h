// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef TPMELEECOMBAT_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define TPMELEECOMBAT_BaseWeapon_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, ABaseEquipable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_INCLASS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, ABaseEquipable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_26_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseWeapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::None) \
	op(EWeaponType::LightSword) \
	op(EWeaponType::GreatSword) \
	op(EWeaponType::DualSwords) 

enum class EWeaponType : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
