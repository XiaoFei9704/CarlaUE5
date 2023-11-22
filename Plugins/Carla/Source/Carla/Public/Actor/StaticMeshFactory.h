// Copyright (c) 2020 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Actor/ActorSpawnResult.h"
#include "Actor/CarlaActorFactory.h"

#include "StaticMeshFactory.generated.h"

/// Factory in charge of spawning static meshes. This factory is able to spawn
/// any mesh in content.
UCLASS()
class CARLA_API AStaticMeshFactory : public ACarlaActorFactory
{
	GENERATED_BODY()

	/// Retrieve the definitions of the static mesh actor
	virtual TArray<FActorDefinition> GetDefinitions() override final;

	virtual FActorSpawnResult SpawnActor(
		const FTransform& SpawnAtTransform,
		const FActorDescription& ActorDescription) override final;
};
