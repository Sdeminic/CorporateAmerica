// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Employee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmployee() {}
// Cross Module References
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_AEmployee_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_AEmployee();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_GetAmmo();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_PullTrigger();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_SetAmmo();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEmployee::StaticRegisterNativesAEmployee()
	{
		UClass* Class = AEmployee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmmo", &AEmployee::execGetAmmo },
			{ "PullTrigger", &AEmployee::execPullTrigger },
			{ "SetAmmo", &AEmployee::execSetAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AEmployee_GetAmmo()
	{
		struct Employee_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Employee_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "GetAmmo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Employee_eventGetAmmo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmployee_PullTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"Setup\")\nTSubclassOf<class AGun> GunBlueprint;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "PullTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmployee_SetAmmo()
	{
		struct Employee_eventSetAmmo_Parms
		{
			int32 AmmoToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoToSet = { UE4CodeGen_Private::EPropertyClass::Int, "AmmoToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Employee_eventSetAmmo_Parms, AmmoToSet), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmmoToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "SetAmmo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Employee_eventSetAmmo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEmployee_NoRegister()
	{
		return AEmployee::StaticClass();
	}
	UClass* Z_Construct_UClass_AEmployee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Corporate_America,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AEmployee_GetAmmo, "GetAmmo" }, // 365521985
				{ &Z_Construct_UFunction_AEmployee_PullTrigger, "PullTrigger" }, // 2583892433
				{ &Z_Construct_UFunction_AEmployee_SetAmmo, "SetAmmo" }, // 4030656231
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Employee.h" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotCooldown_MetaData[] = {
				{ "Category", "Employee" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "ShotCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AEmployee, ShotCooldown), METADATA_PARAMS(NewProp_ShotCooldown_MetaData, ARRAY_COUNT(NewProp_ShotCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
				{ "Category", "Employee" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = \"true\"))\nAGun* Gun;" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo = { UE4CodeGen_Private::EPropertyClass::Int, "Ammo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AEmployee, Ammo), METADATA_PARAMS(NewProp_Ammo_MetaData, ARRAY_COUNT(NewProp_Ammo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "First person camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AEmployee, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
<<<<<<< HEAD
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh1P_MetaData, ARRAY_COUNT(NewProp_Mesh1P_MetaData)) };
=======
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh1P_MetaData, ARRAY_COUNT(NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, MovementComponent), Z_Construct_UClass_UEmployeeMovement_NoRegister, METADATA_PARAMS(NewProp_MovementComponent_MetaData, ARRAY_COUNT(NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(NewProp_CapsuleComponent_MetaData)) };
>>>>>>> parent of a4ac5a9... Movement Collides
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShotCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ammo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh1P,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEmployee>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEmployee::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(AEmployee, 3418711111);
=======
	IMPLEMENT_CLASS(AEmployee, 2076368557);
>>>>>>> parent of a4ac5a9... Movement Collides
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmployee(Z_Construct_UClass_AEmployee, &AEmployee::StaticClass, TEXT("/Script/Corporate_America"), TEXT("AEmployee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmployee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
