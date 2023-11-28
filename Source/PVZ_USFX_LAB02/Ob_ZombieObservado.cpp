// Fill out your copyright notice in the Description page of Project Settings.


#include "Ob_ZombieObservado.h"
#include "Ob_Publicador.h"
#include "PaFM_Zombie.h"
#include "Ob_Torre_Localizador.h"
#include "PaFM_ZombieNormal.h"
#include "PaFM_ZombieVolador.h"
#include "PaFM_ZombieMinero.h"

#include "EstrategyMovimientoMinero.h"
#include "EstrategyMoviminetoVolar.h"

AOb_ZombieObservado::AOb_ZombieObservado()
{
	PrimaryActorTick.bCanEverTick = true;

	disparo = true;
	DarEstrategia = true;
	MoverMienro = true;
	MoverVolador = true;
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

	if (!Estado.Compare("ZombieATierra"))
	{
		//Ejecuta sus acciones estando calmado
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado  %s, La Planta guiando Zombies a tierra "), *Estado));
		if (DarEstrategia)
		{
			AEstrategyMovimientoMinero* EstrategyMovimientoMinero = GetWorld()->SpawnActor<AEstrategyMovimientoMinero>(AEstrategyMovimientoMinero::StaticClass());
			ZombieMinero->ArmandoEstrategia(EstrategyMovimientoMinero);
			//Engage with the current Strategy
			ZombieMinero->ejecutarEstrategia(ZombieMinero);


			AEstrategyMoviminetoVolar* EstrategyMoviminetoVolar = GetWorld()->SpawnActor<AEstrategyMoviminetoVolar>(AEstrategyMoviminetoVolar::StaticClass());
			ZombieVolador->ArmandoEstrategia(EstrategyMoviminetoVolar);
			//Engage with the current Strategy
			ZombieVolador->ejecutarEstrategia(ZombieVolador);
			DarEstrategia = false;
		}
		
		if (ZombieVolador->GetActorLocation().Y <= 200.0f && MoverVolador)
		{
			
			ZombieVolador->SetActorLocation(ZombieVolador->GetActorLocation() - FVector(0.0f, 0.0f, 300));
			MoverVolador = false;
		}
		if (ZombieMinero->GetActorLocation().Y <= 200.0f && MoverMienro)
		{
			ZombieMinero->SetActorLocation(ZombieMinero->GetActorLocation() + FVector(0.0f, 0.0f, 160));
			MoverMienro = false;
		}
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

void AOb_ZombieObservado::SetZombie(TArray<AActor*> zombie)
{
	
	ZombieVolador = Cast<APaFM_Zombie>(zombie[0]);
	ZombieNormal = Cast<APaFM_Zombie>(zombie[1]);
	ZombieMinero = Cast<APaFM_Zombie>(zombie[2]);
}




