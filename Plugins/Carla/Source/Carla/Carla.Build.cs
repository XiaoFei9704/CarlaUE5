// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;

public class Carla : ModuleRules
{
	public Carla(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[]
			{
				// ... add public include paths required here ...
			}
		);


		PrivateIncludePaths.AddRange(
			new string[]
			{
				// ... add other private include paths required here ...
			}
		);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "CoreUObject", "ChaosVehicles"
				// ... add other public dependencies that you statically link with here ...
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
		);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
        
        AddCarlaServerDependency();
	}

	private void AddCarlaServerDependency()
	{
		var libCarlaInstallPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../CarlaDependencies"));

		PublicAdditionalLibraries.Add(Path.Combine(libCarlaInstallPath, "lib", GetLibName("rpc")));
		PublicAdditionalLibraries.Add(Path.Combine(libCarlaInstallPath, "lib", GetLibName("carla_server")));
		
		var libCarlaIncludePath = Path.Combine(libCarlaInstallPath, "include");
		PublicIncludePaths.Add(libCarlaIncludePath);
		PrivateIncludePaths.Add(libCarlaIncludePath);

        PublicDefinitions.Add("ASIO_NO_EXCEPTIONS");
        PublicDefinitions.Add("BOOST_NO_EXCEPTIONS");
        PublicDefinitions.Add("LIBCARLA_NO_EXCEPTIONS");
        PublicDefinitions.Add("PUGIXML_NO_EXCEPTIONS");
        PublicDefinitions.Add("BOOST_DISABLE_ABI_HEADERS");
        PublicDefinitions.Add("BOOST_TYPE_INDEX_FORCE_NO_RTTI_COMPATIBILITY");
		
		return;

		string GetLibName(string baseName) => "lib" + baseName + ".a";
	}
}