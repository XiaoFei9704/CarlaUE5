// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Sensor/ShaderBasedSensor.h"
#include "Actor/ActorDefinition.h"

#include "DepthCamera.generated.h"

/// Sensor that produces "depth" images.
UCLASS()
class CARLA_API ADepthCamera : public AShaderBasedSensor
{
	GENERATED_BODY()

public:
	static FActorDefinition GetSensorDefinition();

	ADepthCamera(const FObjectInitializer& ObjectInitializer);

protected:
	void PostPhysTick(UWorld* World, ELevelTick TickType, float DeltaSeconds) override;
};
