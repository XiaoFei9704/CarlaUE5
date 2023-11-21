// // Copyright (c) 2020 Computer Vision Center (CVC) at the Universitat Autonoma\n// de Barcelona (UAB).\n//\n// Copyright (c) 2023 Synkrotron.ai\n//\n// This work is licensed under the terms of the MIT license.\n// For a copy, see <https://opensource.org/licenses/MIT>.


#include "Weather/Weather.h"

// Sets default values
AWeather::AWeather()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeather::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeather::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

