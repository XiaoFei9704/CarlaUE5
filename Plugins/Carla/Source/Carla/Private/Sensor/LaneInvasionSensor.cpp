// Copyright (c) 2019 Intel Labs.
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "Sensor/LaneInvasionSensor.h"
#include "Actor/ActorBlueprintFunctionLibrary.h"

FActorDefinition ALaneInvasionSensor::GetSensorDefinition()
{
	return UActorBlueprintFunctionLibrary::MakeGenericSensorDefinition(TEXT("other"), TEXT("lane_invasion"));
}

ALaneInvasionSensor::ALaneInvasionSensor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
}
