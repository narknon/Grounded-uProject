#pragma once
#include "CoreMinimal.h"
#include "ETargetPriorityType.generated.h"

UENUM(BlueprintType)
enum class ETargetPriorityType : uint8 {
    None,
    PartyMembers,
    Buildings,
};

