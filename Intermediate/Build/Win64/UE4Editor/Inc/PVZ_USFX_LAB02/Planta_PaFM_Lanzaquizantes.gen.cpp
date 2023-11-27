// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Planta_PaFM_Lanzaquizantes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_PaFM_Lanzaquizantes() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APaFM_Planta();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlanta_PaFM_Lanzaquizantes::execDisparar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disparar();
		P_NATIVE_END;
	}
	void APlanta_PaFM_Lanzaquizantes::StaticRegisterNativesAPlanta_PaFM_Lanzaquizantes()
	{
		UClass* Class = APlanta_PaFM_Lanzaquizantes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disparar", &APlanta_PaFM_Lanzaquizantes::execDisparar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Planta_PaFM_Lanzaquizantes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes, nullptr, "Disparar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_NoRegister()
	{
		return APlanta_PaFM_Lanzaquizantes::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanzaguisantesMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LanzaguisantesMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Planta,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanta_PaFM_Lanzaquizantes_Disparar, "Disparar" }, // 669479047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Planta_PaFM_Lanzaquizantes.h" },
		{ "ModuleRelativePath", "Planta_PaFM_Lanzaquizantes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::NewProp_LanzaguisantesMesh_MetaData[] = {
		{ "Category", "Planta_PaFM_Lanzaquizantes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planta_PaFM_Lanzaquizantes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::NewProp_LanzaguisantesMesh = { "LanzaguisantesMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanta_PaFM_Lanzaquizantes, LanzaguisantesMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::NewProp_LanzaguisantesMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::NewProp_LanzaguisantesMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::NewProp_LanzaguisantesMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_PaFM_Lanzaquizantes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::ClassParams = {
		&APlanta_PaFM_Lanzaquizantes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_PaFM_Lanzaquizantes, 1733523900);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlanta_PaFM_Lanzaquizantes>()
	{
		return APlanta_PaFM_Lanzaquizantes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_PaFM_Lanzaquizantes(Z_Construct_UClass_APlanta_PaFM_Lanzaquizantes, &APlanta_PaFM_Lanzaquizantes::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlanta_PaFM_Lanzaquizantes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_PaFM_Lanzaquizantes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
