// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTree;
class AActor;
class AController;
class UPrimitiveComponent;
class UDamageType;
struct FHitResult;
enum class EStats : uint8;
enum class ECharacterActions : uint8;
enum class ECharacterState : uint8;
#ifdef TPMELEECOMBAT_MasterAI_generated_h
#error "MasterAI.generated.h already included, missing '#pragma once' in MasterAI.h"
#endif
#define TPMELEECOMBAT_MasterAI_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBehaviorTree); \
	DECLARE_FUNCTION(execRotateToTarget); \
	DECLARE_FUNCTION(execTakePointDamage); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execOnCurrentStatUpdated); \
	DECLARE_FUNCTION(execOnActionEnd); \
	DECLARE_FUNCTION(execOnActionBegin); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execPerformAction); \
	DECLARE_FUNCTION(execPerformAttack);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBehaviorTree); \
	DECLARE_FUNCTION(execRotateToTarget); \
	DECLARE_FUNCTION(execTakePointDamage); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execOnCurrentStatUpdated); \
	DECLARE_FUNCTION(execOnActionEnd); \
	DECLARE_FUNCTION(execOnActionBegin); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateBegin); \
	DECLARE_FUNCTION(execPerformAction); \
	DECLARE_FUNCTION(execPerformAttack);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterAI(); \
	friend struct Z_Construct_UClass_AMasterAI_Statics; \
public: \
	DECLARE_CLASS(AMasterAI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(AMasterAI) \
	virtual UObject* _getUObject() const override { return const_cast<AMasterAI*>(this); }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAMasterAI(); \
	friend struct Z_Construct_UClass_AMasterAI_Statics; \
public: \
	DECLARE_CLASS(AMasterAI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(AMasterAI) \
	virtual UObject* _getUObject() const override { return const_cast<AMasterAI*>(this); }


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterAI(AMasterAI&&); \
	NO_API AMasterAI(const AMasterAI&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterAI(AMasterAI&&); \
	NO_API AMasterAI(const AMasterAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasterAI)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_31_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class AMasterAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
