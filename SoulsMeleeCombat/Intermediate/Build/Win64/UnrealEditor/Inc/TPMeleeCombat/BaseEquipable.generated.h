// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPMELEECOMBAT_BaseEquipable_generated_h
#error "BaseEquipable.generated.h already included, missing '#pragma once' in BaseEquipable.h"
#endif
#define TPMELEECOMBAT_BaseEquipable_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachActor); \
	DECLARE_FUNCTION(execOnEquipped);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachActor); \
	DECLARE_FUNCTION(execOnEquipped);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEquipable(); \
	friend struct Z_Construct_UClass_ABaseEquipable_Statics; \
public: \
	DECLARE_CLASS(ABaseEquipable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ABaseEquipable)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseEquipable(); \
	friend struct Z_Construct_UClass_ABaseEquipable_Statics; \
public: \
	DECLARE_CLASS(ABaseEquipable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ABaseEquipable)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEquipable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEquipable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEquipable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEquipable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEquipable(ABaseEquipable&&); \
	NO_API ABaseEquipable(const ABaseEquipable&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEquipable(ABaseEquipable&&); \
	NO_API ABaseEquipable(const ABaseEquipable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEquipable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEquipable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEquipable)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_14_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class ABaseEquipable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
