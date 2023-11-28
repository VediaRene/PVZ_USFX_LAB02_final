// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_ZombieMinero.h"

APaFM_ZombieMinero::APaFM_ZombieMinero()
{
	ZombieName = "Minero";

	ZombiemirerolMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = ZombiemirerolMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ZombieMeshAsset.Succeeded())
	{
		ZombiemirerolMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}

	VelocityBrickBoss = 10.0f;
	vida = 100;
}
