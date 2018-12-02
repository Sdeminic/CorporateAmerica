// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TP_ThirdPerson/TP_ThirdPersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_ThirdPersonGameMode() {}
// Cross Module References
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
// End Cross Module References
	void ATP_ThirdPersonGameMode::StaticRegisterNativesATP_ThirdPersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode_NoRegister()
	{
		return ATP_ThirdPersonGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATP_ThirdPersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Corporate_America,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TP_ThirdPerson/TP_ThirdPersonGameMode.h" },
				{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATP_ThirdPersonGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATP_ThirdPersonGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_ThirdPersonGameMode, 1628541755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_ThirdPersonGameMode(Z_Construct_UClass_ATP_ThirdPersonGameMode, &ATP_ThirdPersonGameMode::StaticClass, TEXT("/Script/Corporate_America"), TEXT("ATP_ThirdPersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_ThirdPersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
