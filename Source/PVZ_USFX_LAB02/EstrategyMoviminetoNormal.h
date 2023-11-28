// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategy_Planta.h"
#include "EstrategyMoviminetoNormal.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEstrategyMoviminetoNormal : public AActor, public IEstrategy_Planta
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategyMoviminetoNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Funcion virtual atacar
	virtual void atacar(AActor* zombie) override;

};
