// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEquipable.h"
#include "GameFramework/Character.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "Engine/SkeletalMeshSocket.h"

// Sets default values
ABaseEquipable::ABaseEquipable():
m_bIsEquipped(false),
m_sAttachedSocketName("None")
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Comp"));
	RootComponent = RootComp;

	ItemSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSkeletalMesh"));
	ItemSkeletalMesh->SetupAttachment(RootComp);

	ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
	ItemStaticMesh->SetupAttachment(RootComp);

}

// Called when the game starts or when spawned
void ABaseEquipable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEquipable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseEquipable::OnEquipped()
{
	//m_bIsEquipped = true;
	AttachActor(m_sAttachedSocketName);
	UE_LOG(LogTemp, Log, TEXT("Equipped"));
}

void ABaseEquipable::OnUnequipped()
{
	if (m_bIsEquipped)
	{
		m_bIsEquipped = false;
	}
}

void ABaseEquipable::AttachActor(FName SocketName)
{
	/*ACharacter* Character = Cast<ACharacter>(GetOwner());

	if (Character)
	{
		UE_LOG(LogTemp, Log, TEXT("Character"));
		const USkeletalMeshSocket* EquipSocket = Character->GetMesh()->GetSocketByName(SocketName);
		if (EquipSocket)
		{
			EquipSocket->AttachActor(this, Character->GetMesh());
			UE_LOG(LogTemp, Log, TEXT("Attached"));
		}
	}*/

	ATPMeleeCombatPlayer* Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		//UE_LOG(LogTemp, Log, TEXT("Player"));
		const USkeletalMeshSocket* EquipSocket = Player->GetMesh()->GetSocketByName(SocketName);
		if (EquipSocket)
		{
			//UE_LOG(LogTemp, Log, TEXT("Attached"));
			EquipSocket->AttachActor(this, Player->GetMesh());
			//Do we have owner and/or instigator? REMEMBER
		}
	}	

}