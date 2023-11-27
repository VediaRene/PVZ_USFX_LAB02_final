// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_ZombieMinero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_ZombieMinero() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieMinero_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieMinero();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaFM_ZombieMinero::StaticRegisterNativesAPaFM_ZombieMinero()
	{
	}
	UClass* Z_Construct_UClass_APaFM_ZombieMinero_NoRegister()
	{
		return APaFM_ZombieMinero::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_ZombieMinero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombiemirerolMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombiemirerolMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_ZombieMinero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Zombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieMinero_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_ZombieMinero.h" },
		{ "ModuleRelativePath", "PaFM_ZombieMinero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieMinero_Statics::NewProp_ZombiemirerolMesh_MetaData[] = {
		{ "Category", "PaFM_ZombieMinero" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_ZombieMinero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_ZombieMinero_Statics::NewProp_ZombiemirerolMesh = { "ZombiemirerolMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_ZombieMinero, ZombiemirerolMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieMinero_Statics::NewProp_ZombiemirerolMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieMinero_Statics::NewProp_ZombiemirerolMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_ZombieMinero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_ZombieMinero_Statics::NewProp_ZombiemirerolMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_ZombieMinero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_ZombieMinero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_ZombieMinero_Statics::ClassParams = {
		&APaFM_ZombieMinero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_ZombieMinero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieMinero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieMinero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieMinero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_ZombieMinero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_ZombieMinero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_ZombieMinero, 61809561);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_ZombieMinero>()
	{
		return APaFM_ZombieMinero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_ZombieMinero(Z_Construct_UClass_APaFM_ZombieMinero, &APaFM_ZombieMinero::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_ZombieMinero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_ZombieMinero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
