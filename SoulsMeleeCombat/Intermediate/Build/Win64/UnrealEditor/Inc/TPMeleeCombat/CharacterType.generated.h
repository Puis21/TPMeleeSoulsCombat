// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPMELEECOMBAT_CharacterType_generated_h
#error "CharacterType.generated.h already included, missing '#pragma once' in CharacterType.h"
#endif
#define TPMELEECOMBAT_CharacterType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Nothing) \
	op(ECharacterState::ECS_Attacking) \
	op(ECharacterState::ECS_Dodging) \
	op(ECharacterState::ECS_GeneralAction) \
	op(ECharacterState::ECS_Dead) \
	op(ECharacterState::ECS_Disabled) 

enum class ECharacterState : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECharacterState>();

#define FOREACH_ENUM_ECHARACTERACTIONS(op) \
	op(ECharacterActions::ECA_Nothing) \
	op(ECharacterActions::ECA_GeneralAction) \
	op(ECharacterActions::ECA_LightAttack) \
	op(ECharacterActions::ECA_HeavyAttack) \
	op(ECharacterActions::ECA_ChargedAttack) \
	op(ECharacterActions::ECA_FallingAttack) \
	op(ECharacterActions::ECA_SprintingAttack) \
	op(ECharacterActions::ECA_Dodge) \
	op(ECharacterActions::ECA_EnterCombat) \
	op(ECharacterActions::ECA_ExitCombat) 

enum class ECharacterActions : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECharacterActions>();

#define FOREACH_ENUM_EMOVEMENTSPEEDMODE(op) \
	op(EMovementSpeedMode::EMM_Walking) \
	op(EMovementSpeedMode::EMM_Jogging) \
	op(EMovementSpeedMode::EMM_Sprinting) 

enum class EMovementSpeedMode : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EMovementSpeedMode>();

#define FOREACH_ENUM_ESTATS(op) \
	op(EStats::ES_NONE) \
	op(EStats::ES_Health) \
	op(EStats::ES_Stamina) \
	op(EStats::ES_Armor) 

enum class EStats : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EStats>();

#define FOREACH_ENUM_ECOLLISIONPART(op) \
	op(ECollisionPart::MainWeapon) \
	op(ECollisionPart::OffHandWeapon) \
	op(ECollisionPart::RightFoot) 

enum class ECollisionPart : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECollisionPart>();

#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::None) \
	op(EDamageType::MeleeDamage) \
	op(EDamageType::KnockdownDamage) 

enum class EDamageType : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EDamageType>();

#define FOREACH_ENUM_EAIATTACKRANGE(op) \
	op(EAIAttackRange::None) \
	op(EAIAttackRange::CloseRange) \
	op(EAIAttackRange::MediumRange) 

enum class EAIAttackRange : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EAIAttackRange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
