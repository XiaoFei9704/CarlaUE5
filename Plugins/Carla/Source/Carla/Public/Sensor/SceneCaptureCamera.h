// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Actor/ActorDefinition.h"
#include "Sensor/PixelReader.h"
#include "Sensor/ShaderBasedSensor.h"

#include "SceneCaptureCamera.generated.h"

/// A sensor that captures images from the scene.
UCLASS()
class CARLA_API ASceneCaptureCamera : public AShaderBasedSensor
{
	GENERATED_BODY()

public:
	static FActorDefinition GetSensorDefinition();

	ASceneCaptureCamera(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void SendGBufferTextures(FGBufferRequest& GBuffer) override;


	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	void PostPhysTick(UWorld* World, ELevelTick TickType, float DeltaSeconds) override;

	virtual void OnFirstClientConnected() override;
	virtual void OnLastClientDisconnected() override;

private:
};
