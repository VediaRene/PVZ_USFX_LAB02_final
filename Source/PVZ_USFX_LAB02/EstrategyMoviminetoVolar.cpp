// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategyMoviminetoVolar.h"
#include "PaFM_Zombie.h"

// Sets default values
AEstrategyMoviminetoVolar::AEstrategyMoviminetoVolar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	volar = true;
}

// Called when the game starts or when spawned
void AEstrategyMoviminetoVolar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategyMoviminetoVolar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategyMoviminetoVolar::atacar(AActor* zombie)
{
	//Execute the routine of this type of Strategy
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("estrategia de movimiento Volar"));

	PaFM_Zombie = Cast<APaFM_Zombie>(zombie);

	// Configura un temporizador para la entrada después de 1 segundo
	GetWorldTimerManager().SetTimer(VolarTimerHandle, this, &AEstrategyMoviminetoVolar::volarZombie, 2.0f, false);

	// Configura un temporizador para la salida después de 4 segundos (1 segundo de entrada + 3 segundos bajo tierra)
	//GetWorldTimerManager().SetTimer(desplasarTimerHandle, this, &AEstrategyMoviminetoVolar::desplasarce, 0.5f, true);
}

void AEstrategyMoviminetoVolar::volarZombie()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Zombie volando"));
	volarZombies = PaFM_Zombie->GetActorLocation() + FVector(0.0f, 0.0f, 300);
	PaFM_Zombie->SetActorLocation(volarZombies);
}

void AEstrategyMoviminetoVolar::desplasarce()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Zombie desplasandose"));
	if (PaFM_Zombie->GetActorLocation().Y <= -250.0f && volar == true)
	{
		desplazarZombie = PaFM_Zombie->GetActorLocation() - FVector(0.0f, 0.0f, 300);
		PaFM_Zombie->SetActorLocation(desplazarZombie);
		volar = false;
	}
}


