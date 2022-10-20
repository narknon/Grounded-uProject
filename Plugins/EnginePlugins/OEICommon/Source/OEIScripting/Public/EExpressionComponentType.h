#pragma once
#include "CoreMinimal.h"
#include "EExpressionComponentType.generated.h"

UENUM(BlueprintType)
enum class EExpressionComponentType : uint8 {
    ScriptCall,
    Expression,
};

