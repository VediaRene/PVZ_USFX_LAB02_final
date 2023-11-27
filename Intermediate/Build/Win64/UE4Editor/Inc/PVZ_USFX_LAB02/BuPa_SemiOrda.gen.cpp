// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/BuPa_SemiOrda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuPa_SemiOrda() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABuPa_SemiOrda_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABuPa_SemiOrda();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UBuPa_SemiOrda_Interface_NoRegister();
// End Cross Module References
	void ABuPa_SemiOrda::StaticRegisterNativesABuPa_SemiOrda()
	{
	}
	UClass* Z_Construct_UClass_ABuPa_SemiOrda_NoRegister()
	{
		return ABuPa_SemiOrda::StaticClass();
	}
	struct Z_Construct_UClass_ABuPa_SemiOrda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuPa_SemiOrda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuPa_SemiOrda_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuPa_SemiOrda.h" },
		{ "ModuleRelativePath", "BuPa_SemiOrda.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuPa_SemiOrda_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuPa_SemiOrda_Interface_NoRegister, (int32)VTABLE_OFFSET(ABuPa_SemiOrda, IBuPa_SemiOrda_Interface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuPa_SemiOrda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuPa_SemiOrda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuPa_SemiOrda_Statics::ClassParams = {
		&ABuPa_SemiOrda::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuPa_SemiOrda_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuPa_SemiOrda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuPa_SemiOrda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuPa_SemiOrda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuPa_SemiOrda, 44638954);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ABuPa_SemiOrda>()
	{
		return ABuPa_SemiOrda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuPa_SemiOrda(Z_Construct_UClass_ABuPa_SemiOrda, &ABuPa_SemiOrda::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ABuPa_SemiOrda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuPa_SemiOrda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
