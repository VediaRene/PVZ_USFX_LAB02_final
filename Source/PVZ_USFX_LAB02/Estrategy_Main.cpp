// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategy_Main.h"
#include "PaFM_Zombie.h"
#include "EstrategyMovimientoMinero.h"
// Sets default values
AEstrategy_Main::AEstrategy_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategy_Main::BeginPlay()
{
	Super::BeginPlay();
	

	////Enemies alert log
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT(""));
	////Spawn the Battle Ship
	APaFM_Zombie* PaFM_Zombie = GetWorld()->SpawnActor<APaFM_Zombie>(APaFM_Zombie::StaticClass(), FVector(-600.0f, -200.0f, 160.0f),FRotator::ZeroRotator);
	AEstrategyMovimientoMinero* EstrategyMovimientoMinero = GetWorld()->SpawnActor<AEstrategyMovimientoMinero>(AEstrategyMovimientoMinero::StaticClass());
	//PaFM_Zombie->ArmandoEstrategia(EstrategyMovimientoMinero);
	PaFM_Zombie->ejecutarEstrategia(EstrategyMovimientoMinero);

}

// Called every frame
void AEstrategy_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

