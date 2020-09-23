// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WallRun2 : ModuleRules
{
	public WallRun2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
