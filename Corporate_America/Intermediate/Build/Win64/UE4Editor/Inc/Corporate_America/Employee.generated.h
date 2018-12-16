// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef CORPORATE_AMERICA_Employee_generated_h
#error "Employee.generated.h already included, missing '#pragma once' in Employee.h"
#endif
#define CORPORATE_AMERICA_Employee_generated_h

#define Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS \
	virtual bool Server_SendRotation_Validate(FRotator ); \
	virtual void Server_SendRotation_Implementation(FRotator Rotation); \
	virtual bool Server_OnFire_Validate(); \
	virtual void Server_OnFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_SendRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendRotation_Validate(Z_Param_Rotation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendRotation_Validate")); \
			return; \
		} \
		P_THIS->Server_SendRotation_Implementation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnFire_Validate")); \
			return; \
		} \
		P_THIS->Server_OnFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AmmoToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmmo(Z_Param_AmmoToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPullTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PullTrigger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCameraRotation(); \
		P_NATIVE_END; \
	}


#define Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendRotation_Validate(FRotator ); \
	virtual void Server_SendRotation_Implementation(FRotator Rotation); \
	virtual bool Server_OnFire_Validate(); \
	virtual void Server_OnFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_SendRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendRotation_Validate(Z_Param_Rotation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendRotation_Validate")); \
			return; \
		} \
		P_THIS->Server_SendRotation_Implementation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_OnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnFire_Validate")); \
			return; \
		} \
		P_THIS->Server_OnFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AmmoToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmmo(Z_Param_AmmoToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPullTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PullTrigger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCameraRotation(); \
		P_NATIVE_END; \
	}


#define Corporate_America_Source_Corporate_America_Employee_h_12_EVENT_PARMS \
	struct Employee_eventServer_SendRotation_Parms \
	{ \
		FRotator Rotation; \
	};


#define Corporate_America_Source_Corporate_America_Employee_h_12_CALLBACK_WRAPPERS
#define Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmployee(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AEmployee(); \
public: \
	DECLARE_CLASS(AEmployee, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AEmployee) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEmployee(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AEmployee(); \
public: \
	DECLARE_CLASS(AEmployee, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AEmployee) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Corporate_America_Source_Corporate_America_Employee_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmployee(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmployee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmployee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmployee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmployee(AEmployee&&); \
	NO_API AEmployee(const AEmployee&); \
public:


#define Corporate_America_Source_Corporate_America_Employee_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmployee(AEmployee&&); \
	NO_API AEmployee(const AEmployee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmployee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmployee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEmployee)


#define Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponBP() { return STRUCT_OFFSET(AEmployee, WeaponBP); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AEmployee, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(AEmployee, Weapon); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AEmployee, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__CameraRotation() { return STRUCT_OFFSET(AEmployee, CameraRotation); }


#define Corporate_America_Source_Corporate_America_Employee_h_9_PROLOG \
	Corporate_America_Source_Corporate_America_Employee_h_12_EVENT_PARMS


#define Corporate_America_Source_Corporate_America_Employee_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS \
	Corporate_America_Source_Corporate_America_Employee_h_12_CALLBACK_WRAPPERS \
	Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS \
	Corporate_America_Source_Corporate_America_Employee_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Corporate_America_Source_Corporate_America_Employee_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Employee_h_12_CALLBACK_WRAPPERS \
	Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Employee_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Corporate_America_Source_Corporate_America_Employee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
