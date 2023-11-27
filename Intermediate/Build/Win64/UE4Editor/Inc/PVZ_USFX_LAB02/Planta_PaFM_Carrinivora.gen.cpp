// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_PaFM_Carrinivora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_PaFM_Carrinivora() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Carrinivora_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Carrinivora();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Planta();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlanta_PaFM_Carrinivora::StaticRegisterNativesAPlanta_PaFM_Carrinivora()
	{
	}
	UClass* Z_Construct_UClass_APlanta_PaFM_Carrinivora_NoRegister()
	{
		return APlanta_PaFM_Carrinivora::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrinivoraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrinivoraMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Planta,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Planta_PaFM_Carrinivora.h" },
		{ "ModuleRelativePath", "Planta_PaFM_Carrinivora.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::NewProp_CarrinivoraMesh_MetaData[] = {
		{ "Category", "Planta_PaFM_Carrinivora" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planta_PaFM_Carrinivora.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::NewProp_CarrinivoraMesh = { "CarrinivoraMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanta_PaFM_Carrinivora, CarrinivoraMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::NewProp_CarrinivoraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::NewProp_CarrinivoraMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::NewProp_CarrinivoraMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_PaFM_Carrinivora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::ClassParams = {
		&APlanta_PaFM_Carrinivora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_PaFM_Carrinivora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_PaFM_Carrinivora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_PaFM_Carrinivora, 3335459362);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_PaFM_Carrinivora>()
	{
		return APlanta_PaFM_Carrinivora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_PaFM_Carrinivora(Z_Construct_UClass_APlanta_PaFM_Carrinivora, &APlanta_PaFM_Carrinivora::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_PaFM_Carrinivora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_PaFM_Carrinivora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
