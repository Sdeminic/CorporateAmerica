// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Corporate_AmericaHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorporate_AmericaHUD() {}
// Cross Module References
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ACorporate_AmericaHUD_NoRegister();
	CORPORATE_AMERICA_API UClass* Z_Construct_UClass_ACorporate_AmericaHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Corporate_America();
// End Cross Module References
	void ACorporate_AmericaHUD::StaticRegisterNativesACorporate_AmericaHUD()
	{
	}
	UClass* Z_Construct_UClass_ACorporate_AmericaHUD_NoRegister()
	{
		return ACorporate_AmericaHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ACorporate_AmericaHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Corporate_America,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Corporate_AmericaHUD.h" },
				{ "ModuleRelativePath", "Corporate_AmericaHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACorporate_AmericaHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACorporate_AmericaHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorporate_AmericaHUD, 2560304814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorporate_AmericaHUD(Z_Construct_UClass_ACorporate_AmericaHUD, &ACorporate_AmericaHUD::StaticClass, TEXT("/Script/Corporate_America"), TEXT("ACorporate_AmericaHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorporate_AmericaHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
