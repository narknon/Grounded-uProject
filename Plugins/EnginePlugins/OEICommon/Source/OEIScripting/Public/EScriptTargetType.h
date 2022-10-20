#pragma once
#include "CoreMinimal.h"
#include "EScriptTargetType.generated.h"

UENUM(BlueprintType)
enum class EScriptTargetType : uint8 {
    Owner,
    LocalPlayerPawn,
    InstigatorPlayerPawn,
    ResponderPlayerPawn,
    Speaker,
    Listener,
    MAX,
    WorldContextObject = 0x0,
};

