// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Corporate_AmericaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorporate_AmericaGameMode() {}
// Cross Module References
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ACorporate_AmericaGameMode_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ACorporate_AmericaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
// End Cross Module References
	void ACorporate_AmericaGameMode::StaticRegisterNativesACorporate_AmericaGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACorporate_AmericaGameMode_NoRegister()
	{
		return ACorporate_AmericaGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ACorporate_AmericaGameMode()
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
				{ "IncludePath", "Corporate_AmericaGameMode.h" },
				{ "ModuleRelativePath", "Corporate_AmericaGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACorporate_AmericaGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACorporate_AmericaGameMode::StaticClass,
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
	IMPLEMENT_CLASS(ACorporate_AmericaGameMode, 1738794446);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorporate_AmericaGameMode(Z_Construct_UClass_ACorporate_AmericaGameMode, &ACorporate_AmericaGameMode::StaticClass, TEXT("/Script/Corporate_America"), TEXT("ACorporate_AmericaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorporate_AmericaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
