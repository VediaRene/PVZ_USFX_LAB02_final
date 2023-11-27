// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Girasol.h"

APlanta_PaFM_Girasol::APlanta_PaFM_Girasol()
{
	PlantaName = "Girasol";



	GirasolMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = GirasolMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	if (ZombieMeshAsset.Succeeded())
	{
		GirasolMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

void APlanta_PaFM_Girasol::BeginPlay()
{
	Super::BeginPlay();
}
