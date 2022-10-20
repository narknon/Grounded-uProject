#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "TriggerDelegateDelegate.h"
#include "ETriggerType.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableReferenceConditional.h"
#include "MaineTriggerBase.generated.h"

class UPersistenceComponent;
class UObsidianIDComponent;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AMaineTriggerBase : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerDelegate OnTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
public:
    AMaineTriggerBase();
    UFUNCTION(BlueprintCallable)
    void ResetTriggerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTrigger(AActor* OtherActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActorInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTriggerCount() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

