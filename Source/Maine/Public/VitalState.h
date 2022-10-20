#pragma once
#include "CoreMinimal.h"
#include "VitalStatValue.h"
#include "VitalState.generated.h"

class UBaseVitalStat;

USTRUCT(BlueprintType)
struct FVitalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBaseVitalStat*, FVitalStatValue> Vitals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UBaseVitalStat*, FVitalStatValue> DirtyVitals;
    
    MAINE_API FVitalState();
};

