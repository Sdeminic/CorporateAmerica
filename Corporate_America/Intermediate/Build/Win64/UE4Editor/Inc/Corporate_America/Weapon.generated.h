// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef CORPORATE_AMERICA_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define CORPORATE_AMERICA_Weapon_generated_h

#define Corporate_America_Source_Corporate_America_Weapon_h_14_RPC_WRAPPERS \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector Location, FRotator Rotation); \
 \
	DECLARE_FUNCTION(execServer_OnFire) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnFire_Validate(Z_Param_Location,Z_Param_Rotation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnFire_Validate")); \
			return; \
		} \
		P_THIS->Server_OnFire_Implementation(Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define Corporate_America_Source_Corporate_America_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector Location, FRotator Rotation); \
 \
	DECLARE_FUNCTION(execServer_OnFire) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnFire_Validate(Z_Param_Location,Z_Param_Rotation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnFire_Validate")); \
			return; \
		} \
		P_THIS->Server_OnFire_Implementation(Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define Corporate_America_Source_Corporate_America_Weapon_h_14_EVENT_PARMS \
	struct Weapon_eventServer_OnFire_Parms \
	{ \
		FVector Location; \
		FRotator Rotation; \
	};


#define Corporate_America_Source_Corporate_America_Weapon_h_14_CALLBACK_WRAPPERS
#define Corporate_America_Source_Corporate_America_Weapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Corporate_America_Source_Corporate_America_Weapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Corporate_America_Source_Corporate_America_Weapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Corporate_America_Source_Corporate_America_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Corporate_America_Source_Corporate_America_Weapon_h_14_PRIVATE_PROPERTY_OFFSET
#define Corporate_America_Source_Corporate_America_Weapon_h_11_PROLOG \
	Corporate_America_Source_Corporate_America_Weapon_h_14_EVENT_PARMS


#define Corporate_America_Source_Corporate_America_Weapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Weapon_h_14_RPC_WRAPPERS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_CALLBACK_WRAPPERS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_INCLASS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Corporate_America_Source_Corporate_America_Weapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_CALLBACK_WRAPPERS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_INCLASS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Corporate_America_Source_Corporate_America_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
