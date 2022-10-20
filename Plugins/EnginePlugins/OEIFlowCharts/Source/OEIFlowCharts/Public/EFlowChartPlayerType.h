#pragma once
#include "CoreMinimal.h"
#include "EFlowChartPlayerType.generated.h"

UENUM(BlueprintType)
enum class EFlowChartPlayerType : uint8 {
    Conversation,
    Quest,
    Chatter,
};

