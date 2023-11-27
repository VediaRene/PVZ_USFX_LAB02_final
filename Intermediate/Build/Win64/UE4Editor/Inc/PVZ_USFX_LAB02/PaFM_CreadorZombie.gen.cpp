// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_CreadorZombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_CreadorZombie() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_CreadorZombie_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_CreadorZombie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void APaFM_CreadorZombie::StaticRegisterNativesAPaFM_CreadorZombie()
	{
	}
	UClass* Z_Construct_UClass_APaFM_CreadorZombie_NoRegister()
	{
		return APaFM_CreadorZombie::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_CreadorZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_CreadorZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_CreadorZombie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_CreadorZombie.h" },
		{ "ModuleRelativePath", "PaFM_CreadorZombie.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_CreadorZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_CreadorZombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_CreadorZombie_Statics::ClassParams = {
		&APaFM_CreadorZombie::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_CreadorZombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_CreadorZombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_CreadorZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_CreadorZombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_CreadorZombie, 1114356387);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_CreadorZombie>()
	{
		return APaFM_CreadorZombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_CreadorZombie(Z_Construct_UClass_APaFM_CreadorZombie, &APaFM_CreadorZombie::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_CreadorZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_CreadorZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
