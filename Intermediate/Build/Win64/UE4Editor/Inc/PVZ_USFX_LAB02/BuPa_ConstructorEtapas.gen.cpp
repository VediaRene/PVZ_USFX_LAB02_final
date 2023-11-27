// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/BuPa_ConstructorEtapas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuPa_ConstructorEtapas() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABuPa_ConstructorEtapas_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABuPa_ConstructorEtapas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ABuPa_ConstructorEtapas::StaticRegisterNativesABuPa_ConstructorEtapas()
	{
	}
	UClass* Z_Construct_UClass_ABuPa_ConstructorEtapas_NoRegister()
	{
		return ABuPa_ConstructorEtapas::StaticClass();
	}
	struct Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuPa_ConstructorEtapas.h" },
		{ "ModuleRelativePath", "BuPa_ConstructorEtapas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuPa_ConstructorEtapas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::ClassParams = {
		&ABuPa_ConstructorEtapas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuPa_ConstructorEtapas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuPa_ConstructorEtapas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuPa_ConstructorEtapas, 3891917515);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ABuPa_ConstructorEtapas>()
	{
		return ABuPa_ConstructorEtapas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuPa_ConstructorEtapas(Z_Construct_UClass_ABuPa_ConstructorEtapas, &ABuPa_ConstructorEtapas::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ABuPa_ConstructorEtapas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuPa_ConstructorEtapas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
