// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpActor.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h" //UNUSED?
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickUpActor::APickUpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ActorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ActorMesh"));
	RootComponent = ActorMesh;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereCollision->SetupAttachment(ActorMesh);
	SphereCollision->InitSphereRadius(50.f);

}

// Called when the game starts or when spawned
void APickUpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickUpActor::InteractPure(AActor* CallerActor, APawn* CallerPawn)
{
	FActorSpawnParameters SpawnParams;
	Weapon = GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass, GetTransform(), SpawnParams);
	if (Weapon)
	{
		UE_LOG(LogTemp, Log, TEXT("Spawned"));
		Weapon->SetOwner(CallerActor);
		Weapon->SetInstigator(CallerPawn);
		Weapon->OnEquipped();

		//OLD WAY OF SETTING MAIN WEAPON TO PLAYER // MBY Revert? Inside BaseWeapon
		/*Player = Cast<ATPMeleeCombatPlayer>(Caller);
		if (Player)
		{
			Player->SetMainWeapon(Weapon);
		}*/

	}
}

