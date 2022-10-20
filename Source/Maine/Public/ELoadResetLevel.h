#pragma once
#include "CoreMinimal.h"
#include "ELoadResetLevel.generated.h"

UENUM(BlueprintType)
enum class ELoadResetLevel : uint8 {
    None,
    QuestsRestructured,
    NewGamePlus,
};

