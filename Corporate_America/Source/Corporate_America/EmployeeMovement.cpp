// Fill out your copyright notice in the Description page of Project Settings.

#include "EmployeeMovement.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UEmployeeMovement::UEmployeeMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UEmployeeMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEmployeeMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor *Owner = GetOwner();
	if (!Owner) return;
	
	FVector NewLocation;
	FHitResult HitResult;
	NewLocation = MaxWalkSpeed * MovementInputFwd * Owner->GetActorForwardVector();
	Owner->SetActorLocation(Owner->GetActorLocation() + NewLocation, true, &HitResult, ETeleportType::None);
	NewLocation = MaxWalkSpeed * MovementInputRight * Owner->GetActorRightVector();
	Owner->SetActorLocation(Owner->GetActorLocation() + NewLocation, true, &HitResult, ETeleportType::None);

	MovementInputFwd = 0.f;
	MovementInputRight = 0.f;
}

void UEmployeeMovement::AddMovementInputFwd(float InputVal)
{
	MovementInputFwd += InputVal;
}

void UEmployeeMovement::AddMovementInputRight(float InputVal)
{
	MovementInputRight += InputVal;
}

