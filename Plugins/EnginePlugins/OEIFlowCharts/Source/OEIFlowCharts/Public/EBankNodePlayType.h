#pragma once
#include "CoreMinimal.h"
#include "EBankNodePlayType.generated.h"

UENUM(BlueprintType)
enum class EBankNodePlayType : uint8 {
    PlayFirst,
    PlayAll,
    PlayRandom,
    CycleRandom,
    VoicedResponse,
    ObjectiveBank,
};

