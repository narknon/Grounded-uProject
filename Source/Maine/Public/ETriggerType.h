#pragma once
#include "CoreMinimal.h"
#include "ETriggerType.generated.h"

UENUM(BlueprintType)
enum class ETriggerType : uint8 {
    BeginOverlap,
    EndOverlap,
    PartyOverlap,
};

