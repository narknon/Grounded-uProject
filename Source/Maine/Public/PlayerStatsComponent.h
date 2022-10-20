#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "OnPlayerStatChangedDelegateDelegate.h"
#include "DamageInfo.h"
#include "Engine/DataTable.h"
#include "PlayerStatsComponent.generated.h"

class UPlayerStatConfig;
class AActor;
class ASurvivalCreature;
class UPointOfInterestDataAsset;
class ASurvivalPlayerState;
class ASurvivalCharacter;
class UInventoryComponent;
class UDefensePointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerStatsComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStatChangedDelegate OnPlayerStatChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerStatConfig*> PlayerStatConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerStatConfig*, int32> PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> PostGameStatValues;
    
public:
    UPlayerStatsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerStatIfLarger(UPlayerStatConfig* PlayerStat, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaDepleted(float StaminaRatio);
    
    UFUNCTION(BlueprintCallable)
    void OnReviveTarget(AActor* RevivedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPointOfInterestDiscovered(UPointOfInterestDataAsset* PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPhotoTaken();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPetTamed(ASurvivalCreature* Pet);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKill(AActor* KilledActor, const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyItemObtained(FDataTableRowHandle KeyItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemUsed(ASurvivalCharacter* User, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnItemCrafted(UInventoryComponent* Sender, FDataTableRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UInventoryComponent* InventoryComponent, FDataTableRowHandle ItemHandle, bool IsNewItem, int32 Count, int32 TotalCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDefensePointComplete(UDefensePointComponent* DefensePoint);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementPlayerStat(UPlayerStatConfig* PlayerStat, int32 ValueToAdd);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostGameStat(UPlayerStatConfig* PlayerStat) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

