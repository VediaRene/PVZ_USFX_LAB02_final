// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/EstrategyMoviminetoNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategyMoviminetoNormal() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategyMoviminetoNormal_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategyMoviminetoNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategy_Planta_NoRegister();
// End Cross Module References
	void AEstrategyMoviminetoNormal::StaticRegisterNativesAEstrategyMoviminetoNormal()
	{
	}
	UClass* Z_Construct_UClass_AEstrategyMoviminetoNormal_NoRegister()
	{
		return AEstrategyMoviminetoNormal::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategyMoviminetoNormal.h" },
		{ "ModuleRelativePath", "EstrategyMoviminetoNormal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategy_Planta_NoRegister, (int32)VTABLE_OFFSET(AEstrategyMoviminetoNormal, IEstrategy_Planta), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategyMoviminetoNormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::ClassParams = {
		&AEstrategyMoviminetoNormal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategyMoviminetoNormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategyMoviminetoNormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategyMoviminetoNormal, 4273946107);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstrategyMoviminetoNormal>()
	{
		return AEstrategyMoviminetoNormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategyMoviminetoNormal(Z_Construct_UClass_AEstrategyMoviminetoNormal, &AEstrategyMoviminetoNormal::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstrategyMoviminetoNormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategyMoviminetoNormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
