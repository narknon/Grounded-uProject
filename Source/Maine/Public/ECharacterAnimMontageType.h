#pragma once
#include "CoreMinimal.h"
#include "ECharacterAnimMontageType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAnimMontageType : uint8 {
    None,
    Attack,
    Throw,
    Interact,
    Reaction,
    Emote,
    MovementTransition,
    MovementReaction,
    SplineMovement,
    SpecialMove,
    Pet,
};

