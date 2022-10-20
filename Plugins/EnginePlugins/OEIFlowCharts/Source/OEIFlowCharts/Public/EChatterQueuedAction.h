#pragma once
#include "CoreMinimal.h"
#include "EChatterQueuedAction.generated.h"

UENUM(BlueprintType)
enum class EChatterQueuedAction : uint8 {
    Queue,
    Discard,
};

