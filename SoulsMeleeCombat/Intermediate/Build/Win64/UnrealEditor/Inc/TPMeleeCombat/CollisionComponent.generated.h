// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef TPMELEECOMBAT_CollisionComponent_generated_h
#error "CollisionComponent.generated.h already included, missing '#pragma once' in CollisionComponent.h"
#endif
#define TPMELEECOMBAT_CollisionComponent_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_11_DELEGATE \
struct _Script_TPMeleeCombat_eventOnHit_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FOnHit_DelegateWrapper(const FMulticastScriptDelegate& OnHit, FHitResult HitResult) \
{ \
	_Script_TPMeleeCombat_eventOnHit_Parms Parms; \
	Parms.HitResult=HitResult; \
	OnHit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_RPC_WRAPPERS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionComponent(); \
	friend struct Z_Construct_UClass_UCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(UCollisionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UCollisionComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCollisionComponent(); \
	friend struct Z_Construct_UClass_UCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(UCollisionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UCollisionComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollisionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollisionComponent(UCollisionComponent&&); \
	NO_API UCollisionComponent(const UCollisionComponent&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollisionComponent(UCollisionComponent&&); \
	NO_API UCollisionComponent(const UCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollisionComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_13_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
