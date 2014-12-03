// Fill out your copyright notice in the Description page of Project Settings.

#include "RollerBall.h"
#include "SpeedPickup.h"


ASpeedPickup::ASpeedPickup(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	//EnergyLevel = 15.0f;
}

void ASpeedPickup::OnPickedUp_Implementation()
{
	//call parent implem of OnPickedUp first
	Super::OnPickedUp_Implementation();
	//Destroy it
	Destroy();
}
