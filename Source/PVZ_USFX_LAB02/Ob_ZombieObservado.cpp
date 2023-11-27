// Fill out your copyright notice in the Description page of Project Settings.


#include "Ob_ZombieObservado.h"
#include "Ob_Publicador.h"
#include "PaFM_Zombie.h"
#include "Ob_Torre_Localizador.h"


AOb_ZombieObservado::AOb_ZombieObservado()
{
	PrimaryActorTick.bCanEverTick = true;

	disparo = false;
}

void AOb_ZombieObservado::BeginPlay()
{
	Super::BeginPlay();
}

void AOb_ZombieObservado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AOb_ZombieObservado::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!Ob_Torre_Localizador) {UE_LOG(LogTemp, Error, TEXT("Destroyed(): ClockTower is NULL, make sure it's initialized."));
	  return;
	}
	//Unsubscribe from the Clock Tower if it's destroyed
	Ob_Torre_Localizador->DeSuscribir(this);
}

void AOb_ZombieObservado::Actualizar(AOb_Publicador* Publicador)
{
	MovimientoDisparo();
}

void AOb_ZombieObservado::MovimientoDisparo()
{
	
	//Mensaje de error si el zombie no existe
	if (!Ob_Torre_Localizador) {
		UE_LOG(LogTemp, Error, TEXT("Tranformacion():El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Estado = Ob_Torre_Localizador->GetCambiarDisparo();

	if (!Estado.Compare("AtaqueNormal"))
	{
		//Ejecuta sus acciones estando calmado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado  %s, La Planta dispara adelante "), *Estado));

		//Puedes poner lo que quieras aqui
		disparo = true;
		disparoAtras = false;
	
	}
	else if (!Estado.Compare("AtaqueAtras"))
	{
		//Ejecuta sus acciones estando enojado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s,  La Planta dispara hacia atras"), *Estado));
		//Puedes poner lo que quieras aqui
		disparoAtras = true;
		disparo = false;
	}
	//else if (!Estado.Compare("AtaqueDoble"))
	//{
	//	//Ejecuta sus acciones estando frenetico
	//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s,  La Planta dispara adelante y hacia atras"), *Estado));
	//	//Puedes poner lo que quieras aqui
	//	disparo = true;
 //       disparoAtras = true;
	//}
}

void AOb_ZombieObservado::SetOb_Torre_Localizador(AOb_Torre_Localizador* myOb_Torre_Localizador)
{
	//Log Error if the passed Clock Tower is NULL
	if (!myOb_Torre_Localizador) {UE_LOG(LogTemp, Error,TEXT("SetClockTower(): myClockTower is NULL, make sure it'sinitialized."));
	 return;
	}
	//Set the Clock Tower and Subscribe to that
	Ob_Torre_Localizador = myOb_Torre_Localizador;
	Ob_Torre_Localizador->Suscriptor(this);
}

void AOb_ZombieObservado::SetZombie(AActor* zombie)
{
	myZombie = Cast<APaFM_Zombie>(zombie);	
}




