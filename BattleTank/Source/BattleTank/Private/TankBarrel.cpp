// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "BattleTank.h"


void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame
	// Given a max elevation speed, and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barel->Elevate() called at speed %f"), DegreesPerSecond);
}



