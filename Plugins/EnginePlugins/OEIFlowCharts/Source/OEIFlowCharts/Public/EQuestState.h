#pragma once
#include "CoreMinimal.h"
#include "EQuestState.generated.h"

UENUM(BlueprintType)
enum class EQuestState : uint8 {
    Invalid,
    InProgress,
    Succeeded,
    Failed,
    Mentioned,
};

