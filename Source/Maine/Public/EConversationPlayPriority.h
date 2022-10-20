#pragma once
#include "CoreMinimal.h"
#include "EConversationPlayPriority.generated.h"

UENUM(BlueprintType)
enum class EConversationPlayPriority : uint8 {
    High,
    Medium,
    Low,
    VeryLow,
};

