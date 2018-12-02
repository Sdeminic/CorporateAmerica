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
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_UEmployeeMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AEmployee::StaticRegisterNativesAEmployee()
	{
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
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Corporate_America,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Employee.h" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AEmployee, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AEmployee, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "First person camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AEmployee, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh3P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Pawn mesh: Other players view" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh3P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh3P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, Mesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh3P_MetaData, ARRAY_COUNT(NewProp_Mesh3P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
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
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh3P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh1P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEmployee>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEmployee::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AEmployee, 2076368557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmployee(Z_Construct_UClass_AEmployee, &AEmployee::StaticClass, TEXT("/Script/Corporate_America"), TEXT("AEmployee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmployee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
