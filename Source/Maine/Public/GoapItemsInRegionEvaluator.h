#pragma once
#include "CoreMinimal.h"
#include "GoapWorldStateEvaluator.h"
#include "GameplayTagContainer.h"
#include "GoapItemsInRegionEvaluator.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UGoapItemsInRegionEvaluator : public UGoapWorldStateEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RegionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ValueCurve;
    
    UGoapItemsInRegionEvaluator();
};

