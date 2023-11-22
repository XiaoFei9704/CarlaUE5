// Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Actor/ActorSpawnResult.h"
#include "Actor/CarlaActorFactory.h"

#include "AIControllerFactory.generated.h"

/// Factory in charge of spawning AI Controllers.
UCLASS()
class CARLA_API AAIControllerFactory final : public ACarlaActorFactory
{
	GENERATED_BODY()

	virtual TArray<FActorDefinition> GetDefinitions() override;

	virtual FActorSpawnResult SpawnActor(
		const FTransform& SpawnAtTransform,
		const FActorDescription& ActorDescription) override;
};
