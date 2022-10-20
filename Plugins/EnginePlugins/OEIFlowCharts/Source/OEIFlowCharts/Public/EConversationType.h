#pragma once
#include "CoreMinimal.h"
#include "EConversationType.generated.h"

UENUM(BlueprintType)
enum class EConversationType : uint8 {
    Conversation,
    Chatter,
    Count,
    Invalid,
};

