// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Ob_Habilidad_Interface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOb_Habilidad_Interface() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UOb_Habilidad_Interface_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UOb_Habilidad_Interface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UOb_Habilidad_Interface::StaticRegisterNativesUOb_Habilidad_Interface()
	{
	}
	UClass* Z_Construct_UClass_UOb_Habilidad_Interface_NoRegister()
	{
		return UOb_Habilidad_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UOb_Habilidad_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOb_Habilidad_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOb_Habilidad_Interface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ob_Habilidad_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOb_Habilidad_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOb_Habilidad_Interface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOb_Habilidad_Interface_Statics::ClassParams = {
		&UOb_Habilidad_Interface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOb_Habilidad_Interface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOb_Habilidad_Interface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOb_Habilidad_Interface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOb_Habilidad_Interface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOb_Habilidad_Interface, 455163206);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UOb_Habilidad_Interface>()
	{
		return UOb_Habilidad_Interface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOb_Habilidad_Interface(Z_Construct_UClass_UOb_Habilidad_Interface, &UOb_Habilidad_Interface::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UOb_Habilidad_Interface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOb_Habilidad_Interface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
