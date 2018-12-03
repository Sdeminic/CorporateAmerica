// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EmployeeMovement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CORPORATE_AMERICA_API UEmployeeMovement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEmployeeMovement();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddMovementInputFwd(float InputVal);
	void AddMovementInputRight(float InputVal);

	UPROPERTY(EditAnywhere)
		float MaxWalkSpeed = 10.f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	

	FVector Velocity;
	float MovementInputFwd;
	float MovementInputRight;
};
