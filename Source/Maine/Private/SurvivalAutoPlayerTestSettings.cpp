#include "SurvivalAutoPlayerTestSettings.h"

USurvivalAutoPlayerTestSettings::USurvivalAutoPlayerTestSettings() {
    this->bUseFixedRandomSeed = false;
    this->FixedRandomSeed = 0.00f;
    this->bUsedFixedPlaythroughID = false;
    this->DeltaTimeCap = 0.00f;
    this->bDisableTimeCapIfLowFramerate = true;
    this->DisableTimeCapFrameCount = 0.00f;
    this->TestLevels.AddDefaulted(2);
    this->bEnableTraveling = true;
    this->MinTravelTime = 0.00f;
    this->MaxTravelTime = 0.00f;
    this->bAllowTravelingToCurrentMap = false;
    this->bCanReturnToMainMenu = false;
    this->ChanceToReturnToMenu = 0.00f;
    this->MainMenuSoakTime = 0.00f;
    this->bEnableQuickSave = false;
    this->bEnableQuickSaveLoad = true;
    this->bOnlyLoadQuickSavesMadeOnCurrentMap = false;
    this->MinQuickSaveWaitTime = 0.00f;
    this->MaxQuickSaveWaitTime = 0.00f;
    this->MinQuickLoadWaitTime = 0.00f;
    this->MaxQuickLoadWaitTime = 0.00f;
    this->bGhost = false;
    this->bEnableRandomPathing = true;
    this->PathingNewLocationRadius = 0.00f;
    this->PathingNewLocationHeightVariance = 0.00f;
    this->bFaceAlongPath = true;
    this->bTeleportIfStuckPathing = true;
    this->PathingStuckTeleportRadius = 0.00f;
    this->PathingVisitedTileSize = 0.00f;
    this->PathingGoalProjectionExtents = 0.00f;
    this->PathingVisitingRadius = 0.00f;
    this->bAllowControlRotationSnapping = true;
    this->MinSnapRotationWaitTime = 0.00f;
    this->MaxSnapRotationWaitTime = 0.00f;
    this->MinSnapRotationAmount = 0.00f;
    this->MaxSnapRotationAmount = 0.00f;
    this->bEnableTeleporting = true;
    this->bTeleportPlaceOnGround = true;
    this->TeleportHeight = 0.00f;
    this->TeleportNewLocationDistance = 0.00f;
    this->MinTeleportWaitTime = 0.00f;
    this->MaxTeleportWaitTime = 0.00f;
    this->bGodMode = true;
    this->bResurrect = true;
    this->bAttackAI = true;
    this->MaximumAttackDistance = 0.00f;
    this->bOnlyAttackEnemies = true;
    this->MinAttackWaitTime = 0.00f;
    this->MaxAttackWaitTime = 0.00f;
    this->bEnableWeaponSwapping = true;
    this->MinWeaponSwapWaitTime = 0.00f;
    this->MaxWeaponSwapWaitTime = 0.00f;
    this->bEnableArmorSwapping = true;
    this->MinArmorSwapWaitTime = 0.00f;
    this->MaxArmorSwapWaitTime = 0.00f;
    this->bEnableScreenshots = true;
    this->ScreenshotRate = 0.00f;
    this->NumberOfScreenshotsToKeep = 0.00f;
    this->bEnableMemoryInfoLogging = true;
    this->MemoryInfoLogRate = 0.00f;
    this->bLogMemoryInfoOnMapLoad = true;
    this->bConsoleCommandsEnabled = true;
    this->ConsoleCommandProperties.AddDefaulted(5);
    this->bInfoTrackingEnabled = true;
    this->InfoTrackingRate = 0.00f;
    this->bAddReportTimeColumn = true;
    this->bAddEngineRuntimeColumn = false;
    this->bAddTestRuntimeColumn = true;
    this->bAddCurrentMapColumn = true;
    this->bAddReportTimeAndMapColumn = false;
    this->bAddEngineRuntimeAndMapColumn = false;
    this->bAddRuntimeAndMapColumn = true;
    this->bAddPlayerLocationColumn = true;
    this->bTrackRenderTargetPoolUsage = true;
    this->bTrackAudioMemoryUsage = true;
    this->bTrackMemoryUsageInformation = true;
    this->bTrackMemoryStatInformation = true;
    this->bTrackTextureStreamingInformation = true;
    this->bTryToFilterStatErrors = true;
    this->StatsToTrack.AddDefaulted(137);
    this->bGenerateMemoryReports = false;
    this->MemoryReportCommands.AddDefaulted(1);
    this->MemoryPeakIncreaseReportThreshold = 0.00f;
    this->MemoryUtilizationReportThreshold = 0.00f;
    this->ExtraMemoryUtilizationReportAmount = 0.00f;
    this->TexturePoolUtilizationReportThreadhold = 0.00f;
    this->ExtraTexturePoolUtilizationReportAmount = 0.00f;
    this->UtilizationReportThresholdResetTime = 0.00f;
    this->TexturePoolOverBudgetReportRate = 0.00f;
    this->bInputEnabled = true;
    this->RandomInputKeyProperties.AddDefaulted(12);
    this->EquipmentProperties.AddDefaulted(8);
}

