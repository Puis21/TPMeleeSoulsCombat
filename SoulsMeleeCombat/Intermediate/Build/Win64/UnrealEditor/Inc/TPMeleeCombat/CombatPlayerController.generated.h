// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStats : uint8;
#ifdef TPMELEECOMBAT_CombatPlayerController_generated_h
#error "CombatPlayerController.generated.h already included, missing '#pragma once' in CombatPlayerController.h"
#endif
#define TPMELEECOMBAT_CombatPlayerController_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStatsUpdated);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStatsUpdated);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatPlayerController(); \
	friend struct Z_Construct_UClass_ACombatPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACombatPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ACombatPlayerController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACombatPlayerController(); \
	friend struct Z_Construct_UClass_ACombatPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACombatPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ACombatPlayerController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatPlayerController(ACombatPlayerController&&); \
	NO_API ACombatPlayerController(const ACombatPlayerController&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatPlayerController(ACombatPlayerController&&); \
	NO_API ACombatPlayerController(const ACombatPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatPlayerController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_15_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class ACombatPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
