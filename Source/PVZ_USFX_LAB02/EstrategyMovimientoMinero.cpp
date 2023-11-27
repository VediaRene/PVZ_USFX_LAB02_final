// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategyMovimientoMinero.h"
#include "PaFM_Zombie.h"
// Sets default values
AEstrategyMovimientoMinero::AEstrategyMovimientoMinero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//salirMinero = FVector(-600.0f, -280.0f, 160.0f);
	salir = true;
}

// Called when the game starts or when spawned
void AEstrategyMovimientoMinero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategyMovimientoMinero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategyMovimientoMinero::atacar(AActor* zombie)
{
	//Execute the routine of this type of Strategy
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("estrategia de movimiento minero"));

	PaFM_Zombie = Cast<APaFM_Zombie>(zombie);

	// Configura un temporizador para la entrada después de 1 segundo
	GetWorldTimerManager().SetTimer(MineroEntradaTimerHandle, this, &AEstrategyMovimientoMinero::moverAbajo, 2.0f, false);

	// Configura un temporizador para la salida después de 4 segundos (1 segundo de entrada + 3 segundos bajo tierra)
	GetWorldTimerManager().SetTimer(MineroSalidaTimerHandle, this, &AEstrategyMovimientoMinero::moverArriba, 0.5f, true);
}

void AEstrategyMovimientoMinero::moverAbajo()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Mover Abajo"));
	entrarMinero = PaFM_Zombie->GetActorLocation() - FVector(0.0f, 0.0f, 160);
	PaFM_Zombie->SetActorLocation(entrarMinero);
}

void AEstrategyMovimientoMinero::moverArriba()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Mover Arriba"));
	if (PaFM_Zombie->GetActorLocation().Y <= -250.0f && salir==true)
	{
		salirMinero = PaFM_Zombie->GetActorLocation() + FVector(0.0f, 0.0f, 160);
		PaFM_Zombie->SetActorLocation(salirMinero);
		salir = false;
	}

}



