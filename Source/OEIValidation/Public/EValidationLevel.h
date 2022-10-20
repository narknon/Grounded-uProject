#pragma once
#include "CoreMinimal.h"
#include "EValidationLevel.generated.h"

UENUM(BlueprintType)
namespace EValidationLevel {
    enum Type {
        CriticalError,
        Error,
        Warning,
        Info,
    };
}

