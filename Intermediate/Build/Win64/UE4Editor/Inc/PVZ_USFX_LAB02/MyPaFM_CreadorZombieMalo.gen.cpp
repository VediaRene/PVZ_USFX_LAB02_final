// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/MyPaFM_CreadorZombieMalo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPaFM_CreadorZombieMalo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMyPaFM_CreadorZombieMalo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_CreadorZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AMyPaFM_CreadorZombieMalo::StaticRegisterNativesAMyPaFM_CreadorZombieMalo()
	{
	}
	UClass* Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_NoRegister()
	{
		return AMyPaFM_CreadorZombieMalo::StaticClass();
	}
	struct Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_CreadorZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyPaFM_CreadorZombieMalo.h" },
		{ "ModuleRelativePath", "MyPaFM_CreadorZombieMalo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPaFM_CreadorZombieMalo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::ClassParams = {
		&AMyPaFM_CreadorZombieMalo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPaFM_CreadorZombieMalo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPaFM_CreadorZombieMalo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPaFM_CreadorZombieMalo, 1681366153);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AMyPaFM_CreadorZombieMalo>()
	{
		return AMyPaFM_CreadorZombieMalo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPaFM_CreadorZombieMalo(Z_Construct_UClass_AMyPaFM_CreadorZombieMalo, &AMyPaFM_CreadorZombieMalo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AMyPaFM_CreadorZombieMalo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPaFM_CreadorZombieMalo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
