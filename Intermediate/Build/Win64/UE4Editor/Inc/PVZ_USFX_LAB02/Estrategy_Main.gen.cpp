// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Estrategy_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategy_Main() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategy_Main_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategy_Main();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AEstrategy_Main::StaticRegisterNativesAEstrategy_Main()
	{
	}
	UClass* Z_Construct_UClass_AEstrategy_Main_NoRegister()
	{
		return AEstrategy_Main::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategy_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategy_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategy_Main_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Estrategy_Main.h" },
		{ "ModuleRelativePath", "Estrategy_Main.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategy_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategy_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategy_Main_Statics::ClassParams = {
		&AEstrategy_Main::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategy_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategy_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategy_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategy_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategy_Main, 3607256290);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstrategy_Main>()
	{
		return AEstrategy_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategy_Main(Z_Construct_UClass_AEstrategy_Main, &AEstrategy_Main::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstrategy_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategy_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
