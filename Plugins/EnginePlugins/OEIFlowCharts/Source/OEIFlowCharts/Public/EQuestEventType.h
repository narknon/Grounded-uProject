#pragma once
#include "CoreMinimal.h"
#include "EQuestEventType.generated.h"

UENUM(BlueprintType)
enum class EQuestEventType : uint8 {
    Talk,
    Kill,
    Location,
    AcquireItem,
    Interact,
    GlobalVariable,
    Inspect,
};

