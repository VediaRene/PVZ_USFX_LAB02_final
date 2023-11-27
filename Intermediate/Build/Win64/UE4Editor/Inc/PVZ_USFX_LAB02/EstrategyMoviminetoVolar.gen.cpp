// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/EstrategyMoviminetoVolar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategyMoviminetoVolar() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategyMoviminetoVolar_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategyMoviminetoVolar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategy_Planta_NoRegister();
// End Cross Module References
	void AEstrategyMoviminetoVolar::StaticRegisterNativesAEstrategyMoviminetoVolar()
	{
	}
	UClass* Z_Construct_UClass_AEstrategyMoviminetoVolar_NoRegister()
	{
		return AEstrategyMoviminetoVolar::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategyMoviminetoVolar.h" },
		{ "ModuleRelativePath", "EstrategyMoviminetoVolar.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategy_Planta_NoRegister, (int32)VTABLE_OFFSET(AEstrategyMoviminetoVolar, IEstrategy_Planta), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategyMoviminetoVolar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::ClassParams = {
		&AEstrategyMoviminetoVolar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategyMoviminetoVolar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategyMoviminetoVolar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategyMoviminetoVolar, 1177295786);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstrategyMoviminetoVolar>()
	{
		return AEstrategyMoviminetoVolar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategyMoviminetoVolar(Z_Construct_UClass_AEstrategyMoviminetoVolar, &AEstrategyMoviminetoVolar::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstrategyMoviminetoVolar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategyMoviminetoVolar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
