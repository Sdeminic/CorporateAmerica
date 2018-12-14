// Fill out your copyright notice in the Description page of Project Settings.

// Fill out your copyright notice in the Description page of Project Settings.

#include "Employee.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Weapon.h"
#include "UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEmployee::AEmployee()
{
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	Weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Active Weapon"));
	Weapon->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

}

// Called when the game starts or when spawned
void AEmployee::BeginPlay()
{
	Super::BeginPlay();
	if (Weapon->GetChildActor()) {
		Weapon->GetChildActor()->SetOwner(this);
	}
	LastShot = FPlatformTime::Seconds();
}

// Called every frame
void AEmployee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Role == ROLE_AutonomousProxy) {
		Server_SendRotation(GetControlRotation());//Cast<AWeapon>(Weapon->GetChildActor())->FP_MuzzleLocation->GetComponentRotation());
	}
	
	FirstPersonCameraComponent->SetWorldRotation(CameraRotation);
}

void AEmployee::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AEmployee::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AEmployee::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AEmployee::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AEmployee::SetupPlayerInputComponent(UInputComponent * InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	// Bind movement events
	InputComponent->BindAxis("MoveForward", this, &AEmployee::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AEmployee::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	InputComponent->BindAxis("TurnRate", this, &AEmployee::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	InputComponent->BindAxis("LookUpRate", this, &AEmployee::LookUpAtRate);
	InputComponent->BindAction("Fire", IE_Pressed, this, &AEmployee::PullTrigger);
}

void AEmployee::PullTrigger()
{
	if (!Weapon) return;
	if (Role == ROLE_SimulatedProxy) {
		Cast<AWeapon>(Weapon->GetChildActor())->Client_OnFire();
	}
	else{
		Server_OnFire();
		Cast<AWeapon>(Weapon->GetChildActor())->Client_OnFire();
	}

	if (Ammo >= 1 && FPlatformTime::Seconds() - LastShot > ShotCooldown) {
		
		--Ammo;
		LastShot = FPlatformTime::Seconds();
	}
}

int32 AEmployee::GetAmmo()
{
	return Ammo;
}

void AEmployee::SetAmmo(int32 AmmoToSet)
{
	Ammo = AmmoToSet;
}

void AEmployee::Server_OnFire_Implementation()
{
	Cast<AWeapon>(Weapon->GetChildActor())->OnFire();
}

bool AEmployee::Server_OnFire_Validate()
{
	return true;
}

void AEmployee::Server_SendRotation_Implementation(FRotator Rotation)
{
	CameraRotation = Rotation;
}

bool AEmployee::Server_SendRotation_Validate(FRotator Rotation)
{
	return true;
}

void AEmployee::UnPossessed()
{
	Super::UnPossessed();
	if (!Weapon) { return; }
	Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}


void AEmployee::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AEmployee, CameraRotation);
}