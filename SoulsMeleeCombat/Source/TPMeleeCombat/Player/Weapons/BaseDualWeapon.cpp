// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDualWeapon.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"

ABaseDualWeapon::ABaseDualWeapon()
{
	SecondItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondItemMesh"));
	SecondItemStaticMesh->SetupAttachment(RootComponent);

	LeftHandCollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("LeftHandCollisionComponent"));
	RightFootCollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("RightFootCollisionComponent"));
}

void ABaseDualWeapon::BeginPlay()
{
	Super::BeginPlay();

	LeftHandCollisionComponent->OnHit.AddDynamic(this, &ABaseDualWeapon::ApplyDamage);
	RightFootCollisionComponent->OnHit.AddDynamic(this, &ABaseDualWeapon::ApplyDamage);
}

void ABaseDualWeapon::ActivateCollision(ECollisionPart CollPart)
{
	//Super::ActivateCollision(CollPart);

	switch (CollPart)
	{
	case ECollisionPart::MainWeapon:
		MainWeaponCollision->EnableCollision();
		UE_LOG(LogTemp, Log, TEXT("ActivatedCol Main"));
		break;

	case ECollisionPart::OffHandWeapon:
		LeftHandCollisionComponent->EnableCollision();
		UE_LOG(LogTemp, Log, TEXT("ActivatedCol Off"));
		break;

	case ECollisionPart::RightFoot:
		RightFootCollisionComponent->EnableCollision();
		break;

	default:
		break;
	}
}

void ABaseDualWeapon::DeactivateCollision(ECollisionPart CollPart)
{
	//Super::DeactivateCollision(CollPart);

	switch (CollPart)
	{
	case ECollisionPart::MainWeapon:
		MainWeaponCollision->DisableCollision();
		break;

	case ECollisionPart::OffHandWeapon:
		LeftHandCollisionComponent->DisableCollision();
		break;

	case ECollisionPart::RightFoot:
		RightFootCollisionComponent->DisableCollision();
		break;

	default:
		break;
	}
}

void ABaseDualWeapon::OnEquipped()
{
	Super::OnEquipped();

	LeftHandCollisionComponent->SetCollisionMeshComponent(SecondItemStaticMesh);
	RightFootCollisionComponent->SetCollisionMeshComponent(Player->GetMesh());

	LeftHandCollisionComponent->AddActorToIgnore(GetOwner());
	RightFootCollisionComponent->AddActorToIgnore(GetOwner());

	if (Player)
	{
		if (Player->GetCombatComponent()->GetIsAttachedToHand())
		{
			AttachOffHandWeapon(SecondWeaponHandSocket);
		}
		else
		{
			AttachOffHandWeapon(SecondWeaponAttachSocket);
		}
	}
}

void ABaseDualWeapon::ToggleCombat(bool bEnableCombat)
{
	Super::ToggleCombat(bEnableCombat);

	if (bEnableCombat)
	{
		AttachOffHandWeapon(SecondWeaponHandSocket);
		//UE_LOG(LogTemp, Log, TEXT("Left Hand"));
	}
	else
	{
		AttachOffHandWeapon(SecondWeaponAttachSocket);
		//UE_LOG(LogTemp, Log, TEXT("Left Hip"));
	}

}

void ABaseDualWeapon::ApplyDamage(FHitResult HitResult)
{
	//UE_LOG(LogTemp, Log, TEXT("TRy DMG??"));
	ATPMeleeCombatPlayer* Character;
	Character = Cast<ATPMeleeCombatPlayer>(HitResult.GetActor());
	if (Character)
	{
		if (!Character->CanReceiveDamage()) return;
		UGameplayStatics::ApplyPointDamage(HitResult.GetActor(), GetAttackDamage(), GetOwner()->GetActorForwardVector(), HitResult, GetInstigatorController(), this, UDamageType::StaticClass());
		//UE_LOG(LogTemp, Log, TEXT("OffHand DMG: %f"), GetAttackDamage());
	}
}

void ABaseDualWeapon::AttachOffHandWeapon(FName SocketName)
{
	//ATPMeleeCombatPlayer* PlayerChar = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		//UE_LOG(LogTemp, Log, TEXT("Attached"));
		SecondItemStaticMesh->AttachToComponent(Player->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);
		//UE_LOG(LogTemp, Log, TEXT("Mesh"));
		//Do we have owner and/or instigator? REMEMBER

	}
}
