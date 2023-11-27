// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Repetidora.h"

APlanta_PaFM_Repetidora::APlanta_PaFM_Repetidora()
{
	PlantaName = "Repetidora";

	//ZombieName = "Normal";

	repetidoraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = repetidoraMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (ZombieMeshAsset.Succeeded())
	{
		repetidoraMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

void APlanta_PaFM_Repetidora::BeginPlay()
{
	Super::BeginPlay();
}
