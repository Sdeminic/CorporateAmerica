// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Employee.generated.h"

UCLASS()
class AEmployee : public ACharacter
{
	GENERATED_BODY()
		// Sets default values for this character's properties
		AEmployee();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

<<<<<<< HEAD
	//UPROPERTY(EditDefaultsOnly, Category = "Setup")
		//TSubclassOf<class AGun> GunBlueprint;
=======
	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class UCapsuleComponent* CapsuleComponent;
>>>>>>> parent of a4ac5a9... Movement Collides

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void PullTrigger();
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		int32 GetAmmo();
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void SetAmmo(int32 AmmoToSet);

	virtual void UnPossessed() override;
private:
	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FirstPersonCameraComponent;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		//AGun* Gun;

	UPROPERTY(EditAnywhere)
		int32 Ammo = 10;
	UPROPERTY(EditAnywhere)
		float ShotCooldown = 1.0;

	float LastShot;
};