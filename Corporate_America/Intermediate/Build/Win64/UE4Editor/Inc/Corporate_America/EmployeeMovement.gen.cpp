// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EmployeeMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmployeeMovement() {}
// Cross Module References
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_UEmployeeMovement_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_UEmployeeMovement();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
// End Cross Module References
	void UEmployeeMovement::StaticRegisterNativesUEmployeeMovement()
	{
	}
	UClass* Z_Construct_UClass_UEmployeeMovement_NoRegister()
	{
		return UEmployeeMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UEmployeeMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Corporate_America,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "EmployeeMovement.h" },
				{ "ModuleRelativePath", "EmployeeMovement.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
				{ "Category", "EmployeeMovement" },
				{ "ModuleRelativePath", "EmployeeMovement.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEmployeeMovement, MaxWalkSpeed), METADATA_PARAMS(NewProp_MaxWalkSpeed_MetaData, ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxWalkSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEmployeeMovement>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEmployeeMovement::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UEmployeeMovement, 3464849916);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmployeeMovement(Z_Construct_UClass_UEmployeeMovement, &UEmployeeMovement::StaticClass, TEXT("/Script/Corporate_America"), TEXT("UEmployeeMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmployeeMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
