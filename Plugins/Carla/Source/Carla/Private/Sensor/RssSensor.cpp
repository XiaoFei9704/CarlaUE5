// Copyright (c) 2019 Intel Labs.
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "Sensor/RssSensor.h"
#include "StaticMeshResources.h"
#include "Actor/ActorBlueprintFunctionLibrary.h"

FActorDefinition ARssSensor::GetSensorDefinition()
{
	return UActorBlueprintFunctionLibrary::MakeGenericSensorDefinition(TEXT("other"), TEXT("rss"));
}

ARssSensor::ARssSensor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;

	auto MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
	MeshComp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	MeshComp->bHiddenInGame = true;
	MeshComp->CastShadow = false;
	RootComponent = MeshComp;
}
