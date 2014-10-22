// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryC.h"
#include "BatteryPickup.h"


ABatteryPickup::ABatteryPickup(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PowerLevel = 150.f;
}


void ABatteryPickup::OnPickedUp_Implementation()
{
	Super::OnPickedUp_Implementation();
	Destroy();
}
