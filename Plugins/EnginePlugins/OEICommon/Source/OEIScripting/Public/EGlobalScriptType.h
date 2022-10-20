#pragma once
#include "CoreMinimal.h"
#include "EGlobalScriptType.generated.h"

UENUM(BlueprintType)
enum class EGlobalScriptType : uint8 {
    Script,
    Conditional,
};

