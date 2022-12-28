// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
#ifdef TPMELEECOMBAT_AnimInstanceInterface_generated_h
#error "AnimInstanceInterface.generated.h already included, missing '#pragma once' in AnimInstanceInterface.h"
#endif
#define TPMELEECOMBAT_AnimInstanceInterface_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_RPC_WRAPPERS \
	virtual void BPUpdateCombatType_Implementation(EWeaponType WeaponType) {}; \
 \
	DECLARE_FUNCTION(execUpdateWeaponAttachedToHand); \
	DECLARE_FUNCTION(execUpdateCombatType); \
	DECLARE_FUNCTION(execBPUpdateCombatType);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPUpdateCombatType_Implementation(EWeaponType WeaponType) {}; \
 \
	DECLARE_FUNCTION(execUpdateWeaponAttachedToHand); \
	DECLARE_FUNCTION(execUpdateCombatType); \
	DECLARE_FUNCTION(execBPUpdateCombatType);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_EVENT_PARMS \
	struct AnimInstanceInterface_eventBPUpdateCombatType_Parms \
	{ \
		EWeaponType WeaponType; \
	};


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_CALLBACK_WRAPPERS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPMELEECOMBAT_API UAnimInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPMELEECOMBAT_API, UAnimInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstanceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPMELEECOMBAT_API UAnimInstanceInterface(UAnimInstanceInterface&&); \
	TPMELEECOMBAT_API UAnimInstanceInterface(const UAnimInstanceInterface&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPMELEECOMBAT_API UAnimInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPMELEECOMBAT_API UAnimInstanceInterface(UAnimInstanceInterface&&); \
	TPMELEECOMBAT_API UAnimInstanceInterface(const UAnimInstanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPMELEECOMBAT_API, UAnimInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstanceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstanceInterface)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimInstanceInterface(); \
	friend struct Z_Construct_UClass_UAnimInstanceInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimInstanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), TPMELEECOMBAT_API) \
	DECLARE_SERIALIZER(UAnimInstanceInterface)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimInstanceInterface() {} \
public: \
	typedef UAnimInstanceInterface UClassType; \
	typedef IAnimInstanceInterface ThisClass; \
	static void Execute_BPUpdateCombatType(UObject* O, EWeaponType WeaponType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimInstanceInterface() {} \
public: \
	typedef UAnimInstanceInterface UClassType; \
	typedef IAnimInstanceInterface ThisClass; \
	static void Execute_BPUpdateCombatType(UObject* O, EWeaponType WeaponType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_10_PROLOG \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_EVENT_PARMS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_CALLBACK_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_CALLBACK_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UAnimInstanceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
