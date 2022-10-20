#pragma once
#include "CoreMinimal.h"
#include "EReportCategory.generated.h"

UENUM(BlueprintType)
enum class EReportCategory : uint8 {
    None,
    DataItems,
    Bestiary,
    Perks,
    TechUnlocks,
    Upgrades,
    ColorCollectibles,
    ResearchLevels,
    GlobalVariables,
};

