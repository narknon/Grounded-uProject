#pragma once
#include "CoreMinimal.h"
#include "DefensePointChargeDelegateDelegate.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "DefensePointStateChangeDelegateDelegate.h"
#include "PersistentInterface.h"
#include "DefensePointCompleteDelegateDelegate.h"
#include "EDefensePointState.h"
#include "DefensePointManager.generated.h"

class UDefensePointComponent;
class UPersistenceComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class MAINE_API ADefensePointManager : public AActor, public IInteractableInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointChargeDelegate OnChargeValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointCompleteDelegate OnDefensePointComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefensePointStateChangeDelegate OnDefensePointStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDefensePointComponent* DefensePointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ADefensePointManager();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnDefensePointStateChanged(EDefensePointState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnDefensePointComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnChargeValueChanged(float ChargeRatio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DefensePointDebugActive();
    
    
    // Fix for true pure virtual functions not being implemented
};

