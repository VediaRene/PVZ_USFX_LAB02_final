// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Lanzaquizantes.h"

APlanta_PaFM_Lanzaquizantes::APlanta_PaFM_Lanzaquizantes()
{
	PlantaName = "Lanzaquizantes";



	LanzaguisantesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = LanzaguisantesMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (ZombieMeshAsset.Succeeded())
	{
		LanzaguisantesMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}

	TiempoEntreDisparos = 1.0f; // Establece el tiempo entre disparos (ajústalo según tus necesidades)
	TiempoUltimoDisparo = 0.0f;
}

void APlanta_PaFM_Lanzaquizantes::Disparar()
{

}
