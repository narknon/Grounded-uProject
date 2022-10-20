using UnrealBuildTool;

public class MaineTarget : TargetRules {
	public MaineTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Maine",
			"OEIValidation",
		});
	}
}
