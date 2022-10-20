#pragma once
#include "CoreMinimal.h"
#include "BaseVitalStat.h"
#include "VitalStatHourPegged.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UVitalStatHourPegged : public UBaseVitalStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HourValueCurve;
    
public:
    UVitalStatHourPegged();
};

