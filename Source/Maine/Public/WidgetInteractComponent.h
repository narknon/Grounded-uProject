#pragma once
#include "CoreMinimal.h"
#include "EHealthState.h"
#include "EInteractionType.h"
#include "InteractingActorDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "InteractableInterface.h"
#include "WidgetInteractComponent.generated.h"

class UInteractionWidget;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWidgetInteractComponent : public UActorComponent, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractingActorDelegate OnSingleUseInteractingActorChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractionWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteractMidCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType DefaultInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInUse: 1;
    
public:
    UWidgetInteractComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnInteractingActorHealthStateChanged(EHealthState NewHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractingActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

