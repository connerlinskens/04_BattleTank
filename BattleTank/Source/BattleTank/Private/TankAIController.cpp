// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Engine/World.h"
#include "BattleTank.h"

void ATankAIController::BeginPlay() 
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto ControlledTank = Cast<ATank>(GetPawn());
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (!ControlledTank) { return; }
<<<<<<< HEAD
=======

>>>>>>> c1dfaf51bc8e5d3c443ec7a96801b86639d10c53
	if (PlayerTank)
	{
		// TODO Move towards the player

		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

<<<<<<< HEAD
		// Fire if ready
=======
>>>>>>> c1dfaf51bc8e5d3c443ec7a96801b86639d10c53
		ControlledTank->Fire(); // TODO limit firing rate
	}
}
