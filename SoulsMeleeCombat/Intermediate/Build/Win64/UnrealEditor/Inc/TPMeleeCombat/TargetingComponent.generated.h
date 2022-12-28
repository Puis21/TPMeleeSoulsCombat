// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TPMELEECOMBAT_TargetingComponent_generated_h
#error "TargetingComponent.generated.h already included, missing '#pragma once' in TargetingComponent.h"
#endif
#define TPMELEECOMBAT_TargetingComponent_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindTarget);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindTarget);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct Z_Construct_UClass_UTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct Z_Construct_UClass_UTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingComponent(UTargetingComponent&&); \
	NO_API UTargetingComponent(const UTargetingComponent&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingComponent(UTargetingComponent&&); \
	NO_API UTargetingComponent(const UTargetingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_23_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UTargetingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h


#define FOREACH_ENUM_EROTATIONMODE(op) \
	op(ERotationMode::OrientToCamera) \
	op(ERotationMode::OrientToMovement) 

enum class ERotationMode : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<ERotationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
