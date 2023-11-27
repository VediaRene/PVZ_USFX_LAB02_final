// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategy_Planta.h"
#include "EstrategyMoviminetoVolar.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEstrategyMoviminetoVolar : public AActor, public IEstrategy_Planta
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategyMoviminetoVolar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector salirMinero;
	FVector entrarMinero;
	//FTimerHandle UnusedHandle;
	class APaFM_Zombie* PaFM_Zombie;
	// Agrega una variable para almacenar el temporizador de entrada
	FTimerHandle MineroEntradaTimerHandle;

	// Agrega una variable para almacenar el temporizador de salida
	FTimerHandle MineroSalidaTimerHandle;

	bool salir;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Funcion virtual atacar
	virtual void atacar(AActor* zombie) override;
	//Funcion para mover abajo
	void moverAbajo();
	//Funcion para mover arriba
	void moverArriba();
};
