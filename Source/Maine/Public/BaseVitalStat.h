#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "BaseVitalStat.generated.h"

class UCurveFloat;
class UInterestCore;

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseVitalStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Sematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange StartingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ValueCurve;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 StartingRangeEnabled;
    
public:
    UBaseVitalStat();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageResponse(float Damage, const FDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GenerateStartingValue(UInterestCore* Core) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void AdjustVital(UInterestCore* Core, float& Vital, float DeltaHours) const;
    
};

