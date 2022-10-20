#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "UObject/NoExportTypes.h"
#include "LocString.h"
#include "EHealthState.h"
#include "ChairBuilding.generated.h"

class ASurvivalPlayerCharacter;
class UAnimMontage;
class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API AChairBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SittingCharacter, meta=(AllowPrivateAccess=true))
    ASurvivalPlayerCharacter* SittingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bUseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SittingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractText;
    
public:
    AChairBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupSittingCharacterTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void ResetChairCooldown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SittingCharacter(ASurvivalPlayerCharacter* PreviousCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterSittingChanged(bool bSitting);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetSitTargetTransform() const;
    
};

