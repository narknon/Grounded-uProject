#pragma once
#include "CoreMinimal.h"
#include "EInterfaceNarrationPriority.generated.h"

UENUM(BlueprintType)
enum class EInterfaceNarrationPriority : uint8 {
    None,
    InGameContextual,
    Default,
    PriorityNotification,
};

