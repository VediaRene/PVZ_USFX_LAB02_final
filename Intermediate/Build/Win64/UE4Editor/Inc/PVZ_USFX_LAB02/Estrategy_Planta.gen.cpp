// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Estrategy_Planta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategy_Planta() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategy_Planta_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategy_Planta();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UEstrategy_Planta::StaticRegisterNativesUEstrategy_Planta()
	{
	}
	UClass* Z_Construct_UClass_UEstrategy_Planta_NoRegister()
	{
		return UEstrategy_Planta::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategy_Planta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategy_Planta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategy_Planta_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estrategy_Planta.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategy_Planta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategy_Planta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategy_Planta_Statics::ClassParams = {
		&UEstrategy_Planta::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstrategy_Planta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategy_Planta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategy_Planta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategy_Planta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategy_Planta, 4105329704);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UEstrategy_Planta>()
	{
		return UEstrategy_Planta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategy_Planta(Z_Construct_UClass_UEstrategy_Planta, &UEstrategy_Planta::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UEstrategy_Planta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategy_Planta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
