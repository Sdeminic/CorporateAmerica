// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CORPORATE_AMERICA_Employee_generated_h
#error "Employee.generated.h already included, missing '#pragma once' in Employee.h"
#endif
#define CORPORATE_AMERICA_Employee_generated_h

#define Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS
#define Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmployee(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AEmployee(); \
public: \
	DECLARE_CLASS(AEmployee, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AEmployee) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEmployee(); \
	friend CORPORATE_AMERICA_API class UClass* Z_Construct_UClass_AEmployee(); \
public: \
	DECLARE_CLASS(AEmployee, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Corporate_America"), NO_API) \
	DECLARE_SERIALIZER(AEmployee) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


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


#define Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET
#define Corporate_America_Source_Corporate_America_Employee_h_9_PROLOG
#define Corporate_America_Source_Corporate_America_Employee_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS \
	Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS \
	Corporate_America_Source_Corporate_America_Employee_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Corporate_America_Source_Corporate_America_Employee_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Corporate_America_Source_Corporate_America_Employee_h_12_PRIVATE_PROPERTY_OFFSET \
	Corporate_America_Source_Corporate_America_Employee_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Employee_h_12_INCLASS_NO_PURE_DECLS \
	Corporate_America_Source_Corporate_America_Employee_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Corporate_America_Source_Corporate_America_Employee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
