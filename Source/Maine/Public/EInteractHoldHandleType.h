#pragma once
#include "CoreMinimal.h"
#include "EInteractHoldHandleType.generated.h"

UENUM(BlueprintType)
enum class EInteractHoldHandleType : uint8 {
    None,
    HandleHoldInteract,
    HandleNonHoldInteract,
    Interrupted,
};

