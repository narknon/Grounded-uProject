#pragma once
#include "CoreMinimal.h"
#include "BaseVitalStat.h"
#include "VitalStat.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UVitalStat : public UBaseVitalStat {
    GENERATED_BODY()
public:
    UVitalStat();
};

