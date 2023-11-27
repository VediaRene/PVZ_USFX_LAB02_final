// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Subject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubject() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubject_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void USubject::StaticRegisterNativesUSubject()
	{
	}
	UClass* Z_Construct_UClass_USubject_NoRegister()
	{
		return USubject::StaticClass();
	}
	struct Z_Construct_UClass_USubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubject_Statics::ClassParams = {
		&USubject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubject, 1858416749);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<USubject>()
	{
		return USubject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubject(Z_Construct_UClass_USubject, &USubject::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("USubject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
