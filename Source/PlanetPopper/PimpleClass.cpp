// Fill out your copyright notice in the Description page of Project Settings.


#include "PimpleClass.h"

// Sets default values
APimpleClass::APimpleClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APimpleClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APimpleClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

