#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeEntryAllowedResult.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeEntryAllowedResult : uint8 {
    Allowed,
    UnallowedGameplaySequence,
    UnallowedSpectatorMode,
    UnallowedMultiplayer,
    UnallowedPlayerUnpossessed,
    Unallowed,
};

