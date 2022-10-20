#pragma once
#include "CoreMinimal.h"

#include "LocString.h"
#include "OnConversationNodeHideDelegate.h"
#include "EConversationPlayPriority.h"
#include "OnConversationStartDelegate.h"
#include "OnConversationCompleteDelegate.h"
#include "EConversationNodeDisplayStyle.h"
#include "BitArrayWrapper.h"
#include "ConversationPlayData.h"
#include "ActiveConversationData.h"
#include "OnConversationNodeShowDelegate.h"
#include "SurvivalCharacter.h"
#include "Components/ActorComponent.h"
#include "ConversationNavigatorComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UConversationNavigatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeShow OnConversationNodeShowEarly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeShow OnConversationNodeShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationNodeHide OnConversationNodeHide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationStart OnConversationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationComplete OnConversationComplete;
    
    UConversationNavigatorComponent();
    UFUNCTION(BlueprintCallable)
    void StartLocalConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowConversation();
    
private:
    UFUNCTION(BlueprintCallable)
    bool ShouldQueue(const FGuid& ConversationId, EConversationPlayPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldInterrupt(const FGuid& ConversationId, EConversationPlayPriority Priority);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, EConversationNodeDisplayStyle DisplayStyle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectPlayerResponse(AActor* Owner, int32 ResponseNodeID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndPlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndConversation(const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdvancePlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdvanceConversation(const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbortConversations();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerDrivenConversation(AActor* Owner);
    
    UFUNCTION()
    void QueueConversation(AActor* OwnerActor, const FGuid& ConversationId, int32 NodeId, EConversationPlayPriority Priority, EConversationNodeDisplayStyle DisplayStyle);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartConversation(FGuid ConversationId, EConversationNodeDisplayStyle DisplayStyle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayChatterNode(ASurvivalCharacter* OwnerActor, int32 NodeId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndConversation(const FGuid& ConversationId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, const FBitArrayWrapper& ReadNodes, const TArray<int32>& ValidPlayerResponseNodeIds, EConversationNodeDisplayStyle DisplayStyle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAbortChatter();
    
private:
    UFUNCTION()
    bool IsPlayerDrivenNode(EConversationNodeDisplayStyle DisplayStyle, FGuid ConversationNavigatorID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDrivenConversationAudioPlaying();
    
private:
    UFUNCTION()
    bool IsPlayerDrivenConversation(EConversationNodeDisplayStyle DisplayStyle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalConversationPlaying(AActor* OwnerActor, const FGuid& ConversationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSpeaking(ASurvivalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    TArray<FConversationPlayData> GetConversationQueue();
    
    UFUNCTION(BlueprintCallable)
    void EndLocalConversation(AActor* OwnerActor, const FGuid& ConversationId);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndConversation(const FGuid& ConversationId, bool bViaStartNewConversation);
    
    UFUNCTION()
    void AdvanceConversationAndUpdateReadNodes(AActor* OwnerActor, FLocString PlayerResponse, const FGuid& ConversationId, int32 NodeId, EConversationNodeDisplayStyle DisplayStyle);
    
    UFUNCTION()
    void AdvanceConversation(AActor* OwnerActor, const FLocString& PlayerResponseLocString, const FGuid& ConversationId, int32 NodeId, EConversationNodeDisplayStyle DisplayStyle);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerDrivenConversation(const FActiveConversationData& Convo);
    
};

