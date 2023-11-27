// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_ZombieNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_ZombieNormal() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieNormal_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieNormal();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaFM_ZombieNormal::StaticRegisterNativesAPaFM_ZombieNormal()
	{
	}
	UClass* Z_Construct_UClass_APaFM_ZombieNormal_NoRegister()
	{
		return APaFM_ZombieNormal::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_ZombieNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieNormalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieNormalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_ZombieNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Zombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieNormal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_ZombieNormal.h" },
		{ "ModuleRelativePath", "PaFM_ZombieNormal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieNormal_Statics::NewProp_ZombieNormalMesh_MetaData[] = {
		{ "Category", "PaFM_ZombieNormal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_ZombieNormal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_ZombieNormal_Statics::NewProp_ZombieNormalMesh = { "ZombieNormalMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_ZombieNormal, ZombieNormalMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieNormal_Statics::NewProp_ZombieNormalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieNormal_Statics::NewProp_ZombieNormalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_ZombieNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_ZombieNormal_Statics::NewProp_ZombieNormalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_ZombieNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_ZombieNormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_ZombieNormal_Statics::ClassParams = {
		&APaFM_ZombieNormal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_ZombieNormal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieNormal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_ZombieNormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_ZombieNormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_ZombieNormal, 823890341);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_ZombieNormal>()
	{
		return APaFM_ZombieNormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_ZombieNormal(Z_Construct_UClass_APaFM_ZombieNormal, &APaFM_ZombieNormal::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_ZombieNormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_ZombieNormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
