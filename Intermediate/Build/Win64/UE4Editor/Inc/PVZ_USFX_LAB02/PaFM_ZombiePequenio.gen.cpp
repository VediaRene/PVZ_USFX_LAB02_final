// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_ZombiePequenio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_ZombiePequenio() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombiePequenio_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombiePequenio();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaFM_ZombiePequenio::StaticRegisterNativesAPaFM_ZombiePequenio()
	{
	}
	UClass* Z_Construct_UClass_APaFM_ZombiePequenio_NoRegister()
	{
		return APaFM_ZombiePequenio::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_ZombiePequenio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombiePequenioMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombiePequenioMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_ZombiePequenio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Zombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombiePequenio_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_ZombiePequenio.h" },
		{ "ModuleRelativePath", "PaFM_ZombiePequenio.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombiePequenio_Statics::NewProp_ZombiePequenioMesh_MetaData[] = {
		{ "Category", "PaFM_ZombiePequenio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_ZombiePequenio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_ZombiePequenio_Statics::NewProp_ZombiePequenioMesh = { "ZombiePequenioMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_ZombiePequenio, ZombiePequenioMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombiePequenio_Statics::NewProp_ZombiePequenioMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombiePequenio_Statics::NewProp_ZombiePequenioMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_ZombiePequenio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_ZombiePequenio_Statics::NewProp_ZombiePequenioMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_ZombiePequenio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_ZombiePequenio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_ZombiePequenio_Statics::ClassParams = {
		&APaFM_ZombiePequenio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_ZombiePequenio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombiePequenio_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombiePequenio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombiePequenio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_ZombiePequenio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_ZombiePequenio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_ZombiePequenio, 283500114);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_ZombiePequenio>()
	{
		return APaFM_ZombiePequenio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_ZombiePequenio(Z_Construct_UClass_APaFM_ZombiePequenio, &APaFM_ZombiePequenio::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_ZombiePequenio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_ZombiePequenio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
