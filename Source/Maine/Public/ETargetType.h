#pragma once
#include "CoreMinimal.h"
#include "ETargetType.generated.h"

UENUM(BlueprintType)
enum class ETargetType : uint8 {
    Default,
    Character,
    PartyMember,
    Building,
    IgnoredBuilding,
    ThreatBuilding,
    PawnBuilding,
};

