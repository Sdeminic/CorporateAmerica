#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "UnrealNetwork.h"
#include "Projectile.h"
#include "Employee.h"
#include "Animation/AnimInstance.h"

// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AWeapon::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			Server_OnFire(FP_MuzzleLocation->GetComponentLocation(), FP_MuzzleLocation->GetComponentRotation());
		}
	}
}

void AWeapon::Client_OnFire()
{
	// try and play a firing animation if specified
	if (FireAnimationFP != NULL && AnimInstanceFP != NULL)
	{
		//AnimInstanceFP->Montage_Play(FireAnimationFP, 1.f);	
	}
	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimationTP != NULL && AnimInstanceTP != NULL)
	{
		AnimInstanceTP->Montage_Play(FireAnimationTP, 1.f);
	}
}

void AWeapon::Server_OnFire_Implementation(FVector Location, FRotator Rotation)
{
	const FRotator SpawnRotation = Rotation;

	// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
	const FVector SpawnLocation = Location;

	//Set Spawn Collision Handling Override
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

	// spawn the projectile at the muzzle
	GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

	// try and play a firing animation if specified
	if (FireAnimationTP != NULL && AnimInstanceTP != NULL)
	{
		AnimInstanceTP->Montage_Play(FireAnimationTP, 1.f);
	}

}

bool AWeapon::Server_OnFire_Validate(FVector Location, FRotator Rotation)
{
	return true;
}


void AWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeapon, AnimInstanceFP);
	DOREPLIFETIME(AWeapon, AnimInstanceTP);
}