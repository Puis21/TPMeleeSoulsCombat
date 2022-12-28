// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPMELEECOMBAT_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define TPMELEECOMBAT_CombatComponent_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_9_DELEGATE \
struct _Script_TPMeleeCombat_eventOnEnableCombat_Parms \
{ \
	bool bEnableCombat; \
}; \
static inline void FOnEnableCombat_DelegateWrapper(const FMulticastScriptDelegate& OnEnableCombat, bool bEnableCombat) \
{ \
	_Script_TPMeleeCombat_eventOnEnableCombat_Parms Parms; \
	Parms.bEnableCombat=bEnableCombat ? true : false; \
	OnEnableCombat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_10_DELEGATE \
struct _Script_TPMeleeCombat_eventOnBlockingSet_Parms \
{ \
	bool bIsBlocking; \
}; \
static inline void FOnBlockingSet_DelegateWrapper(const FMulticastScriptDelegate& OnBlockingSet, bool bIsBlocking) \
{ \
	_Script_TPMeleeCombat_eventOnBlockingSet_Parms Parms; \
	Parms.bIsBlocking=bIsBlocking ? true : false; \
	OnBlockingSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_RPC_WRAPPERS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_15_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
