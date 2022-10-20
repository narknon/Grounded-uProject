#pragma once
#include "CoreMinimal.h"
#include "HazardExitDelegateDelegate.h"
#include "StatusEffectOrigin.h"
#include "EHazardEffectApplyType.h"
#include "GameFramework/Actor.h"
#include "HazardEnterDelegateDelegate.h"
#include "HazardEndedDelegateDelegate.h"
#include "HazardEnabledDelegateDelegate.h"
#include "EInflictDamageStyle.h"
#include "HazardTickDelegateDelegate.h"
#include "DamageData.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Hazard.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;
class UScreenEffectData;
class UAttack;
class ASurvivalCharacter;

UCLASS(Abstract, Blueprintable)
class MAINE_API AHazard : public AActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHazardEnterDelegate OnCharacterEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHazardExitDelegate OnCharacterExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHazardEndedDelegate OnHazardEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHazardEnabledDelegate OnHazardEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHazardTickDelegate OnHazardTargetTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInflictDamageStyle DamageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HazardEnding, meta=(AllowPrivateAccess=true))
    bool bHazardEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HazardEnabled, meta=(AllowPrivateAccess=true))
    bool bHazardEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailsafeDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHazardEffectApplyType StatusEffectApplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScreenEffectData* ScreenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ProjectileAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ProjectileOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttack* ProjectileAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysClearEffectsOnExit;
    
public:
    AHazard();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileAttackOwner(AActor* NewOwner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HazardEnding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HazardEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHazardExpired() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HazardExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHazardEnding();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttack* GetProjectileAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHazardEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHazard(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanApplyToTarget(ASurvivalCharacter* TargetToTest);
    
    
    // Fix for true pure virtual functions not being implemented
};

