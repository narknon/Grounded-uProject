#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GoapActionInstance.h"
#include "PersistentInterface.h"
#include "UnreachableActionData.h"
#include "GameplayTagContainer.h"
#include "GoapActionDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnCoreActivityModeChangedDelegate.h"
#include "VitalStatChangedDelegateDelegate.h"
#include "RealInterestState.h"
#include "InterestConfig.h"
#include "ECreatureActivityMode.h"
#include "VitalState.h"
#include "VitalStatValue.h"
#include "GameplayTagContainer.h"
#include "EFaceTargetType.h"
#include "UObject/NoExportTypes.h"
#include "InterestCore.generated.h"

class UAttractionComponent;
class UBaseVitalStat;

UCLASS(Blueprintable)
class MAINE_API UInterestCore : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionDelegate OnActionExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVitalStatChangedDelegate OnVitalChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoreActivityModeChanged OnActivityModeChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterestConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FUnreachableActionData> UnreachableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGoapActionInstance> DesiredActionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGoapActionInstance PreviousAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGoapActionInstance BreadcrumbAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGoapActionInstance DesiredAction;
    
public:
    UInterestCore();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTrackDesiredTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldInteractWithFace() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVitalValueBySemantic(const FGameplayTag& Tag, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityMode(ECreatureActivityMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInterest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDesiredBreadcrumb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVitalValueBySemantic(const FGameplayTag& Tag, float& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVitalValue(const UBaseVitalStat* Stat, float& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVitalState GetVitalState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UBaseVitalStat*, FVitalStatValue> GetVitals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTirednessTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRealInterestState GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldDropBreadcrumbs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPetHappinessNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMustLand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetFoodTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaceTargetType GetFacingBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredTargetRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDesiredTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttractionComponent* GetDesiredTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBreadcrumbActionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGoapActionInstance GetBreadcrumbAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECreatureActivityMode GetActivityMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValue(const UBaseVitalStat* Stat, float Adjustment);
    
    
    // Fix for true pure virtual functions not being implemented
};

