// Fill out your copyright notice in the Description page of Project Settings.


#include "Ob_Publicador.h"
#include "Ob_Suscriptor_Interface.h"
// Sets default values
AOb_Publicador::AOb_Publicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOb_Publicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOb_Publicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOb_Publicador::Suscriptor(AActor* Suscriptor)
{
	//Agrega un Suscriptor a la lista
	Suscriptores.Add(Suscriptor);

}

void AOb_Publicador::DeSuscribir(AActor* SuscriptorDelete)
{
	//Elimina un Suscriptor de la lista
	Suscriptores.Remove(SuscriptorDelete);
}

void AOb_Publicador::NotificarSuscriptores()
{

	//Ciclo repetitivo que recorre la lista de suscriptores
	for (AActor* Actor : Suscriptores)
	{
		//Castea cada uno de los actores de la lista a ISuscriptor
		IOb_Suscriptor_Interface* Sub = Cast<IOb_Suscriptor_Interface>(Actor);
		if (Sub)
		{
			//Notifica a cada uno de los suscriptores de la lista que algo a pasado
			Sub->Actualizar(this);
		}
	}

}

