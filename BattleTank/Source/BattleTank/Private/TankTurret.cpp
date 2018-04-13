// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "GameFramework/Actor.h"
#include "UnrealMathUtility.h"
#include "Engine/World.h"
#include "BattleTank.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto RotationChange = RelativeSpeed * DegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, RawNewRotation, 0));
}

