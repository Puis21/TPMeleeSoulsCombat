// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class AActor;
class AController;
class UPrimitiveComponent;
class UDamageType;
enum class EStats : uint8;
enum class ECharacterActions : uint8;
enum class ECharacterState : uint8;
#ifdef TPMELEECOMBAT_TPMeleeCombatPlayer_generated_h
#error "TPMeleeCombatPlayer.generated.h already included, missing '#pragma once' in TPMeleeCombatPlayer.h"
#endif
#define TPMELEECOMBAT_TPMeleeCombatPlayer_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_RPC_WRAPPERS \
	virtual void TrackChargeAttack_Implementation(FKey Key); \
 \
	DECLARE_FUNCTION(execTrackChargeAttack); \
	DECLARE_FUNCTION(execTakePointDamage); \
	DECLARE_FUNCTION(execOnCurrentStatUpdated); \
	DECLARE_FUNCTION(execOnActionEnd); \
	DECLARE_FUNCTION(execOnActionBegin); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execChargeAttackEvent);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TrackChargeAttack_Implementation(FKey Key); \
 \
	DECLARE_FUNCTION(execTrackChargeAttack); \
	DECLARE_FUNCTION(execTakePointDamage); \
	DECLARE_FUNCTION(execOnCurrentStatUpdated); \
	DECLARE_FUNCTION(execOnActionEnd); \
	DECLARE_FUNCTION(execOnActionBegin); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execChargeAttackEvent);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_EVENT_PARMS \
	struct TPMeleeCombatPlayer_eventTrackChargeAttack_Parms \
	{ \
		FKey Key; \
	};


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_CALLBACK_WRAPPERS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPMeleeCombatPlayer(); \
	friend struct Z_Construct_UClass_ATPMeleeCombatPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPMeleeCombatPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ATPMeleeCombatPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ATPMeleeCombatPlayer*>(this); }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_INCLASS \
private: \
	static void StaticRegisterNativesATPMeleeCombatPlayer(); \
	friend struct Z_Construct_UClass_ATPMeleeCombatPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPMeleeCombatPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ATPMeleeCombatPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ATPMeleeCombatPlayer*>(this); }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPMeleeCombatPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPMeleeCombatPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPMeleeCombatPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPMeleeCombatPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPMeleeCombatPlayer(ATPMeleeCombatPlayer&&); \
	NO_API ATPMeleeCombatPlayer(const ATPMeleeCombatPlayer&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPMeleeCombatPlayer(ATPMeleeCombatPlayer&&); \
	NO_API ATPMeleeCombatPlayer(const ATPMeleeCombatPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPMeleeCombatPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPMeleeCombatPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPMeleeCombatPlayer)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_25_PROLOG \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_EVENT_PARMS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_CALLBACK_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_CALLBACK_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class ATPMeleeCombatPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
