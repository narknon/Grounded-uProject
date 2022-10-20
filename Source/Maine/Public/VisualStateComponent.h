#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "HealthStateMeshList.h"
#include "Curves/CurveFloat.h"
#include "PersistentInterface.h"
#include "HealthStateChangeDelegate.h"
#include "GameplayTagContainer.h"
#include "EHealthVisualState.h"
#include "CustomVisualStateChangeDelegate.h"
#include "HealthStateMesh.h"
#include "DamageInfo.h"
#include "VisualStateComponent.generated.h"

class UHealthComponent;
class UStaticMeshComponent;
class AController;
class UBaseLODActor;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVisualStateComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthStateChange OnHealthStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomVisualStateChange OnCustomVisualStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrimaryMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageStateEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialToggleHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DamageStateCurve;
    
    UPROPERTY(EditAnywhere)
    int8 DamageMaxLODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HitLocations, meta=(AllowPrivateAccess=true))
    TArray<FVector> HitLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HealthState, meta=(AllowPrivateAccess=true))
    EHealthVisualState HealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHealthStateMesh> HealthStateMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHealthStateMeshList> AdditionalHealthStateMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    UVisualStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVisualState(FGameplayTag CustomVisualState);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveMeshTag(FGameplayTag NewActiveTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveMeshTag();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HitLocations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthState(EHealthVisualState OldHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChange(UHealthComponent* SourceHealthComponent, float CurrentHealth, float OldHealth);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMeshTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetMesh(EHealthVisualState NewHealthState, const FGameplayTag& MeshTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomVisualState(FGameplayTag CustomVisualState);
    
    
    // Fix for true pure virtual functions not being implemented
};

