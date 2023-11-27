// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PaFM_ZombieCono.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_ZombieCono() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieCono_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_ZombieCono();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Zombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaFM_ZombieCono::StaticRegisterNativesAPaFM_ZombieCono()
	{
	}
	UClass* Z_Construct_UClass_APaFM_ZombieCono_NoRegister()
	{
		return APaFM_ZombieCono::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_ZombieCono_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_ZombieCono_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Zombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieCono_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_ZombieCono.h" },
		{ "ModuleRelativePath", "PaFM_ZombieCono.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_ZombieCono_Statics::NewProp_ConoMesh_MetaData[] = {
		{ "Category", "PaFM_ZombieCono" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaFM_ZombieCono.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaFM_ZombieCono_Statics::NewProp_ConoMesh = { "ConoMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_ZombieCono, ConoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieCono_Statics::NewProp_ConoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieCono_Statics::NewProp_ConoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_ZombieCono_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_ZombieCono_Statics::NewProp_ConoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_ZombieCono_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_ZombieCono>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_ZombieCono_Statics::ClassParams = {
		&APaFM_ZombieCono::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_ZombieCono_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieCono_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_ZombieCono_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_ZombieCono_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_ZombieCono()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_ZombieCono_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_ZombieCono, 4016612342);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APaFM_ZombieCono>()
	{
		return APaFM_ZombieCono::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_ZombieCono(Z_Construct_UClass_APaFM_ZombieCono, &APaFM_ZombieCono::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APaFM_ZombieCono"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_ZombieCono);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
