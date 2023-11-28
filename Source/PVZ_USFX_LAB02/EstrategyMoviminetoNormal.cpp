// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategyMoviminetoNormal.h"
#include "PaFM_Zombie.h"

// Sets default values
AEstrategyMoviminetoNormal::AEstrategyMoviminetoNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategyMoviminetoNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategyMoviminetoNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategyMoviminetoNormal::atacar(AActor* zombie)
{

}

