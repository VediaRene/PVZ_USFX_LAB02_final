// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ob_Suscriptor_Interface.h"
#include "Ob_Publicador.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AOb_Publicador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOb_Publicador();

private:
	//The Subscribers of this Publisher
	UPROPERTY()
	TArray<AActor*> Suscriptores = TArray<AActor*>();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Agrega un Suscriptor a la lista
	virtual void Suscriptor(AActor* Suscriptor);
	//Elimina un Suscriptor de la lista
	virtual void DeSuscribir(AActor* SuscriptorDelete);
	//Notifica a los Suscriptores
	virtual void NotificarSuscriptores();


};
