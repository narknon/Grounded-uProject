#pragma once
#include "CoreMinimal.h"
#include "EPayfabTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPayfabTriggerType : uint8 {
    pfenum_HTTP,
    pfenum_Queue,
    pfenum_MAX UMETA(Hidden),
};

