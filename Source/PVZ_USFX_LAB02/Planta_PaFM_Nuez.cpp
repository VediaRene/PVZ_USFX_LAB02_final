// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Nuez.h"

APlanta_PaFM_Nuez::APlanta_PaFM_Nuez()
{
	PlantaName = "Nuez";



	NuezMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = NuezMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (ZombieMeshAsset.Succeeded())
	{
		NuezMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

void APlanta_PaFM_Nuez::BeginPlay()
{
	Super::BeginPlay();
}
