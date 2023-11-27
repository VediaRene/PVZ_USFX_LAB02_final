// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_Zombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_Zombie() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APaFM_Zombie::StaticRegisterNativesAPaFM_Zombie()
	{
	}
	UClass* Z_Construct_UClass_APaFM_Zombie_NoRegister()
	{
		return APaFM_Zombie::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_Zombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieBoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_Zombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_Zombie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_Zombie.h" },
		{ "ModuleRelativePath", "PaFM_Zombie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieMesh_MetaData[] = {
		{ "Category", "PaFM_Zombie" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_Zombie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieMesh = { "ZombieMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_Zombie, ZombieMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieBoxComponent_MetaData[] = {
		{ "Category", "PaFM_Zombie" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_Zombie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieBoxComponent = { "ZombieBoxComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_Zombie, ZombieBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieBoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_Zombie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_Zombie_Statics::NewProp_ZombieBoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_Zombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_Zombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_Zombie_Statics::ClassParams = {
		&APaFM_Zombie::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_Zombie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_Zombie_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_Zombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_Zombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_Zombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_Zombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_Zombie, 2785068509);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_Zombie>()
	{
		return APaFM_Zombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_Zombie(Z_Construct_UClass_APaFM_Zombie, &APaFM_Zombie::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_Zombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_Zombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
