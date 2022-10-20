#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "FlyingSurvivalCharacter.h"
#include "WendellBotCharacter.generated.h"

class UPersistenceComponent;
class UPartyComponent;
class ASurvivalPlayerCharacter;
class AActor;

UCLASS(Blueprintable)
class MAINE_API AWendellBotCharacter : public AFlyingSurvivalCharacter, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
public:
    AWendellBotCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePartyMemberAdded(UPartyComponent* Sender, ASurvivalPlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameRest(float RestDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateFollow(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};

