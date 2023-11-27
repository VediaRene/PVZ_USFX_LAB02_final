// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_ZombieVolador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_ZombieVolador() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieVolador_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieVolador();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaFM_ZombieVolador::StaticRegisterNativesAPaFM_ZombieVolador()
	{
	}
	UClass* Z_Construct_UClass_APaFM_ZombieVolador_NoRegister()
	{
		return APaFM_ZombieVolador::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_ZombieVolador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieVoladorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieVoladorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_ZombieVolador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Zombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieVolador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_ZombieVolador.h" },
		{ "ModuleRelativePath", "PaFM_ZombieVolador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieVolador_Statics::NewProp_ZombieVoladorMesh_MetaData[] = {
		{ "Category", "PaFM_ZombieVolador" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_ZombieVolador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_ZombieVolador_Statics::NewProp_ZombieVoladorMesh = { "ZombieVoladorMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_ZombieVolador, ZombieVoladorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieVolador_Statics::NewProp_ZombieVoladorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieVolador_Statics::NewProp_ZombieVoladorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_ZombieVolador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_ZombieVolador_Statics::NewProp_ZombieVoladorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_ZombieVolador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_ZombieVolador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_ZombieVolador_Statics::ClassParams = {
		&APaFM_ZombieVolador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_ZombieVolador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieVolador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieVolador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieVolador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_ZombieVolador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_ZombieVolador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_ZombieVolador, 1874280693);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_ZombieVolador>()
	{
		return APaFM_ZombieVolador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_ZombieVolador(Z_Construct_UClass_APaFM_ZombieVolador, &APaFM_ZombieVolador::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_ZombieVolador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_ZombieVolador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
