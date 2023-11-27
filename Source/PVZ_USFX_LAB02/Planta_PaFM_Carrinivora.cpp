// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Carrinivora.h"

APlanta_PaFM_Carrinivora::APlanta_PaFM_Carrinivora()
{
	PlantaName = "Carrinivora";



	CarrinivoraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = CarrinivoraMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	if (ZombieMeshAsset.Succeeded())
	{
		CarrinivoraMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

