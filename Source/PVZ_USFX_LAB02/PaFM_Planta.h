// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaFM_Planta.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APaFM_Planta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaFM_Planta();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	bool disparo;
	bool disparoAtras;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void ShotTimerExpired();

	FString GetPlantaName();


protected:

	// Dando nombre al Zombie
	FString PlantaName;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* PlantaMesh;

	void FireShot(FVector FireDirection);

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset1;
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	//Si tiene permitido disparar
	uint32 bCanFire : 1;

	float TiempoTranscurrido;
	float CurrentTiempoTranscurrido;
	//bool DispararAtras;

	//float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	float Health = 20.0f;
	float MovementSpeed = 6.1f;
	
	float dano;

	void disparar();
	void noDisparar();

	// Agrega una variable para almacenar el temporizador de entrada
	FTimerHandle MineroEntradaTimerHandle;

	// Agrega una variable para almacenar el temporizador de salida
	FTimerHandle MineroSalidaTimerHandle;

};
