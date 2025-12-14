// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Proj1_v2 : ModuleRules
{
	public Proj1_v2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Proj1_v2",
			"Proj1_v2/Variant_Platforming",
			"Proj1_v2/Variant_Platforming/Animation",
			"Proj1_v2/Variant_Combat",
			"Proj1_v2/Variant_Combat/AI",
			"Proj1_v2/Variant_Combat/Animation",
			"Proj1_v2/Variant_Combat/Gameplay",
			"Proj1_v2/Variant_Combat/Interfaces",
			"Proj1_v2/Variant_Combat/UI",
			"Proj1_v2/Variant_SideScrolling",
			"Proj1_v2/Variant_SideScrolling/AI",
			"Proj1_v2/Variant_SideScrolling/Gameplay",
			"Proj1_v2/Variant_SideScrolling/Interfaces",
			"Proj1_v2/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
