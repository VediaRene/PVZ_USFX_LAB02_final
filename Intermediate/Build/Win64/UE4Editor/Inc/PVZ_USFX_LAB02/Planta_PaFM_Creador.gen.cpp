// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_PaFM_Creador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_PaFM_Creador() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Creador_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Creador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void APlanta_PaFM_Creador::StaticRegisterNativesAPlanta_PaFM_Creador()
	{
	}
	UClass* Z_Construct_UClass_APlanta_PaFM_Creador_NoRegister()
	{
		return APlanta_PaFM_Creador::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_PaFM_Creador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_PaFM_Creador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Creador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Planta_PaFM_Creador.h" },
		{ "ModuleRelativePath", "Planta_PaFM_Creador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_PaFM_Creador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_PaFM_Creador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_PaFM_Creador_Statics::ClassParams = {
		&APlanta_PaFM_Creador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Creador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Creador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_PaFM_Creador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_PaFM_Creador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_PaFM_Creador, 1496958598);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_PaFM_Creador>()
	{
		return APlanta_PaFM_Creador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_PaFM_Creador(Z_Construct_UClass_APlanta_PaFM_Creador, &APlanta_PaFM_Creador::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_PaFM_Creador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_PaFM_Creador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
