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

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UFUNCTION(BlueprintCallable)
		float GetCameraRotation() { return CameraRotation.Pitch; }

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		TSubclassOf<class AWeapon> WeaponBP;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void PullTrigger();
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		int32 GetAmmo();
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void SetAmmo(int32 AmmoToSet);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_OnFire();

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_SendRotation(FRotator Rotation);

	virtual void UnPossessed() override;

private:

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UChildActorComponent* Weapon;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(Replicated)
		FRotator CameraRotation;

	float Ammo, LastShot, ShotCooldown;
};