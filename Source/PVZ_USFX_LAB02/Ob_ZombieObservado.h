// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_Planta.h"
#include "Ob_Habilidad_Interface.h"
#include "Ob_Suscriptor_Interface.h"
#include "Ob_ZombieObservado.generated.h"

/**
 * 
 */
class AOb_Torre_Localizador;
UCLASS()
class PVZ_USFX_LAB02_API AOb_ZombieObservado : public APaFM_Planta, public IOb_Suscriptor_Interface, public IOb_Habilidad_Interface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOb_ZombieObservado();
private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
	AOb_Torre_Localizador* Ob_Torre_Localizador;
public:
	class APaFM_Zombie* ZombieMinero;
	class APaFM_Zombie* ZombieVolador;
	class APaFM_Zombie* ZombieNormal;
	bool DarEstrategia;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Called when this Subscriber is destroyed, it will unsubscribe this from the Clock Tower
		virtual void Destroyed() override;
public:
	//Called when the Plublisher changed its state, it will execute this Subscriber routine
		virtual void Actualizar(class AOb_Publicador* Publicador) override;
	//Execute this Subscriber routine
	virtual void MovimientoDisparo();
	//Set the Clock Tower of this Subscriber
	void SetOb_Torre_Localizador(AOb_Torre_Localizador* myOb_Torre_Localizador);

	void SetZombie(TArray<AActor*> zombie);

	bool MoverMienro;
	bool MoverVolador;
	
};
