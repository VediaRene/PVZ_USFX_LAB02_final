// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Ob_Torre_Localizador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOb_Torre_Localizador() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOb_Torre_Localizador_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOb_Torre_Localizador();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOb_Publicador();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AOb_Torre_Localizador::StaticRegisterNativesAOb_Torre_Localizador()
	{
	}
	UClass* Z_Construct_UClass_AOb_Torre_Localizador_NoRegister()
	{
		return AOb_Torre_Localizador::StaticClass();
	}
	struct Z_Construct_UClass_AOb_Torre_Localizador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOb_Torre_Localizador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOb_Publicador,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOb_Torre_Localizador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Ob_Torre_Localizador.h" },
		{ "ModuleRelativePath", "Ob_Torre_Localizador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOb_Torre_Localizador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOb_Torre_Localizador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOb_Torre_Localizador_Statics::ClassParams = {
		&AOb_Torre_Localizador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOb_Torre_Localizador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOb_Torre_Localizador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOb_Torre_Localizador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOb_Torre_Localizador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOb_Torre_Localizador, 549054848);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AOb_Torre_Localizador>()
	{
		return AOb_Torre_Localizador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOb_Torre_Localizador(Z_Construct_UClass_AOb_Torre_Localizador, &AOb_Torre_Localizador::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AOb_Torre_Localizador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOb_Torre_Localizador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
