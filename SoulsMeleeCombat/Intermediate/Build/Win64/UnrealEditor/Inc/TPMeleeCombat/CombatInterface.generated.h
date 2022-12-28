// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECollisionPart : uint8;
#ifdef TPMELEECOMBAT_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define TPMELEECOMBAT_CombatInterface_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleCombat); \
	DECLARE_FUNCTION(execEnableIFrames); \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execCanReceiveDamage); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execResetCombat); \
	DECLARE_FUNCTION(execResetAttack); \
	DECLARE_FUNCTION(execContinueAttack);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleCombat); \
	DECLARE_FUNCTION(execEnableIFrames); \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execCanReceiveDamage); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execResetCombat); \
	DECLARE_FUNCTION(execResetAttack); \
	DECLARE_FUNCTION(execContinueAttack);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPMELEECOMBAT_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPMELEECOMBAT_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPMELEECOMBAT_API UCombatInterface(UCombatInterface&&); \
	TPMELEECOMBAT_API UCombatInterface(const UCombatInterface&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPMELEECOMBAT_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPMELEECOMBAT_API UCombatInterface(UCombatInterface&&); \
	TPMELEECOMBAT_API UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPMELEECOMBAT_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), TPMELEECOMBAT_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_13_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
