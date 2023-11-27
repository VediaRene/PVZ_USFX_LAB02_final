// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planta.h"
#include "Estrategy_Planta.h"
#include "PaFM_Zombie.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APaFM_Zombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaFM_Zombie();





	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float VelocityBrickBoss;
	FVector DirectionBrickBoss;
	float MovingX;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ZombieMesh;

	void KillZombie();
public:


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	float MovementSpeed = 6.1f;

	FString GetZombibeName();

	////////////////////////////////////////////////////////////
private:

	//The current Battle Strategy
	IEstrategy_Planta* Estrategy_Planta;

public:
	// Change the Maneuver and set "BattleStrategy" variable
	void ArmandoEstrategia(AActor* myEstrategia);
	// Engage with the current Battle Strategy
	void ejecutarEstrategia(AActor* zombie);
	///////////////////////////////////////////////////////////
protected:

	float vida;
	// Dando nombre al Zombie
	FString ZombieName;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* ZombieBoxComponent;
public:
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal,
		FVector NormalImpulse, const FHitResult& Hit)override;//esta funcion nos notifica cada golpe que de la clase.


};
