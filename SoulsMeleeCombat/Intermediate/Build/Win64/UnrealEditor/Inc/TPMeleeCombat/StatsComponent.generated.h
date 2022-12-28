// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStats : uint8;
#ifdef TPMELEECOMBAT_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define TPMELEECOMBAT_StatsComponent_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_12_DELEGATE \
struct _Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms \
{ \
	EStats StatType; \
	float Value; \
}; \
static inline void FOnCurrentStatUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentStatUpdated, EStats StatType, float Value) \
{ \
	_Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms Parms; \
	Parms.StatType=StatType; \
	Parms.Value=Value; \
	OnCurrentStatUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBaseStats_Statics; \
	TPMELEECOMBAT_API static class UScriptStruct* StaticStruct();


template<> TPMELEECOMBAT_API UScriptStruct* StaticStruct<struct FBaseStats>();

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRegen); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execModifyCurrentStatValue);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRegen); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execModifyCurrentStatValue);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsComponent(UStatsComponent&&); \
	NO_API UStatsComponent(const UStatsComponent&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsComponent(UStatsComponent&&); \
	NO_API UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_26_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
