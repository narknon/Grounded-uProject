#pragma once
#include "CoreMinimal.h"
#include "EQuestType.generated.h"

UENUM(BlueprintType)
enum class EQuestType : uint8 {
    MajorStoryQuest,
    MajorSideQuest,
    Task,
    MinorStoryQuest,
    MinorSideQuest,
    MajorFaction,
    MinorFaction,
    Companion,
    Count,
};

