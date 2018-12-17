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
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_GetCameraRotation();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_PullTrigger();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_Server_OnFire();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_Server_SendRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CORPORATE_AMERICA_API UFunction* Z_Construct_UFunction_AEmployee_SetAmmo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AEmployee_Server_OnFire = FName(TEXT("Server_OnFire"));
	void AEmployee::Server_OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEmployee_Server_OnFire),NULL);
	}
	static FName NAME_AEmployee_Server_SendRotation = FName(TEXT("Server_SendRotation"));
	void AEmployee::Server_SendRotation(FRotator Rotation)
	{
		Employee_eventServer_SendRotation_Parms Parms;
		Parms.Rotation=Rotation;
		ProcessEvent(FindFunctionChecked(NAME_AEmployee_Server_SendRotation),&Parms);
	}
	void AEmployee::StaticRegisterNativesAEmployee()
	{
		UClass* Class = AEmployee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmmo", &AEmployee::execGetAmmo },
			{ "GetCameraRotation", &AEmployee::execGetCameraRotation },
			{ "PullTrigger", &AEmployee::execPullTrigger },
			{ "Server_OnFire", &AEmployee::execServer_OnFire },
			{ "Server_SendRotation", &AEmployee::execServer_SendRotation },
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
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "GetAmmo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Employee_eventGetAmmo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmployee_GetCameraRotation()
	{
		struct Employee_eventGetCameraRotation_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Employee_eventGetCameraRotation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "GetCameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Employee_eventGetCameraRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"Setup\")\nTSubclassOf<class AWeapon> WeaponBP;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "PullTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmployee_Server_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "Server_OnFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEmployee_Server_SendRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Employee_eventServer_SendRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "Server_SendRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A80CC0, sizeof(Employee_eventServer_SendRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmployee, "SetAmmo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Employee_eventSetAmmo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_AEmployee_GetAmmo, "GetAmmo" }, // 3828485126
				{ &Z_Construct_UFunction_AEmployee_GetCameraRotation, "GetCameraRotation" }, // 984399353
				{ &Z_Construct_UFunction_AEmployee_PullTrigger, "PullTrigger" }, // 2435681941
				{ &Z_Construct_UFunction_AEmployee_Server_OnFire, "Server_OnFire" }, // 1356047154
				{ &Z_Construct_UFunction_AEmployee_Server_SendRotation, "Server_SendRotation" }, // 446258569
				{ &Z_Construct_UFunction_AEmployee_SetAmmo, "SetAmmo" }, // 29724320
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
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "ShotCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AEmployee, ShotCooldown), METADATA_PARAMS(NewProp_ShotCooldown_MetaData, ARRAY_COUNT(NewProp_ShotCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ammo = { UE4CodeGen_Private::EPropertyClass::Float, "Ammo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AEmployee, Ammo), METADATA_PARAMS(NewProp_Ammo_MetaData, ARRAY_COUNT(NewProp_Ammo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AEmployee, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_CameraRotation_MetaData, ARRAY_COUNT(NewProp_CameraRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AEmployee, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh1P_MetaData, ARRAY_COUNT(NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Employee.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "Weapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AEmployee, Weapon), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(NewProp_Weapon_MetaData, ARRAY_COUNT(NewProp_Weapon_MetaData)) };
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
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShotCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ammo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh1P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
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
	IMPLEMENT_CLASS(AEmployee, 3629097064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmployee(Z_Construct_UClass_AEmployee, &AEmployee::StaticClass, TEXT("/Script/Corporate_America"), TEXT("AEmployee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmployee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
