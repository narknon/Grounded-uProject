#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "NonPlayerInteractionDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ConversationReference.h"
#include "EConversationNodeDisplayStyle.h"
#include "NonPlayerInteraction.generated.h"

class USceneComponent;
class UBillboardComponent;
class UObsidianIDComponent;
class UConditionalToggleComponent;
class UPersistenceComponent;
class ASurvivalCharacter;

UCLASS(Blueprintable)
class MAINE_API ANonPlayerInteraction : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNonPlayerInteractionDelegate OnImmediateRepeat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* WaypointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConditionalToggleComponent* ShowTalkIconConditionalToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConditionalToggleComponent* BarkConditionalToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlimitedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EligibleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CharacterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference AttractConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttractStartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference AttractRepeatConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttractRepeatStartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractRepeatInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationReference InteractConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractStartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableInteractBeforeAttract: 1;
    
public:
    ANonPlayerInteraction();
    UFUNCTION(BlueprintCallable)
    void TriggerImmediateRepeat();
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractConversation(AActor* Interactor, AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttractRepeatConversation(AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttractConversation(AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractConversationEnabled(AActor* Interactor, AActor* Character) const;
    
protected:
    UFUNCTION()
    void HandleConversationComplete(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CharacterCanInteract(ASurvivalCharacter* Character) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

