// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_PaFM_Nuez.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_PaFM_Nuez() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Nuez_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Nuez();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Planta();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlanta_PaFM_Nuez::StaticRegisterNativesAPlanta_PaFM_Nuez()
	{
	}
	UClass* Z_Construct_UClass_APlanta_PaFM_Nuez_NoRegister()
	{
		return APlanta_PaFM_Nuez::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_PaFM_Nuez_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NuezMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NuezMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Planta,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Planta_PaFM_Nuez.h" },
		{ "ModuleRelativePath", "Planta_PaFM_Nuez.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::NewProp_NuezMesh_MetaData[] = {
		{ "Category", "Planta_PaFM_Nuez" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planta_PaFM_Nuez.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::NewProp_NuezMesh = { "NuezMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanta_PaFM_Nuez, NuezMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::NewProp_NuezMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::NewProp_NuezMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::NewProp_NuezMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_PaFM_Nuez>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::ClassParams = {
		&APlanta_PaFM_Nuez::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_PaFM_Nuez()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_PaFM_Nuez_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_PaFM_Nuez, 2765453407);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_PaFM_Nuez>()
	{
		return APlanta_PaFM_Nuez::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_PaFM_Nuez(Z_Construct_UClass_APlanta_PaFM_Nuez, &APlanta_PaFM_Nuez::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_PaFM_Nuez"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_PaFM_Nuez);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
