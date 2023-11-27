// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_ZombieVolador.h"

APaFM_ZombieVolador::APaFM_ZombieVolador()
{
	ZombieName = "Volador";

	//ZombieName = "Normal";

	ZombieVoladorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = ZombieVoladorMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (ZombieMeshAsset.Succeeded())
	{
		ZombieVoladorMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}

	MovementSpeed = 0.1f;

	vida = 60;
}

void APaFM_ZombieVolador::BeginPlay()
{
		Super::BeginPlay();
}
