#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPlayerStateAddRemoveDelegate.h"
#include "GameFramework/GameStateBase.h"
#include "UObject/NoExportTypes.h"
#include "OnGameWonDelegate.h"
#include "OnLocalUserGeneratedContentPrivilegeCachedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerDisconnectReason.h"
#include "EPlayerCharacterIdentity.h"
#include "OnDefensePointActiveChangedDelegate.h"
#include "OnDefensePointCompletedDelegate.h"
#include "OnLobbyGameStartedDelegate.h"
#include "WaveCompositionData.h"
#include "GlobalVariableChangedEventDelegate.h"
#include "DeathInfo.h"
#include "GameplayTagContainer.h"
#include "EWaveCompletionReason.h"
#include "EWaveAttackState.h"
#include "Engine/DataTable.h"
#include "GameVersion.h"
#include "EGamePackageType.h"
#include "PostGameReport.h"
#include "SurvivalGameState.generated.h"

class UInterestManagerComponent;
class AItemSpawnManager;
class ULODActorManagerComponent;
class UPartyBarrierComponent;
class UCalendarComponent;
class UObsidianIDComponent;
class UPopulationMonitorComponent;
class UHUDMarkerManagerComponent;
class UBreadcrumbManagerComponent;
class UPartyComponent;
class UMapComponent;
class UItemManagerComponent;
class UFoliageManagerComponent;
class UQuestManagerComponent;
class UDefensePointComponent;
class UAttractionManagerComponent;
class APlayerState;
class UWorldTraceManagerComponent;
class AActor;
class UWaveManagerComponent;
class UCVarManagerComponent;
class UAsyncTraceShareComponent;
class USoundCue;
class UMovieSkipComponent;
class UResourceSurveyComponent;
class USurvivalModeManagerComponent;
class UBaseManagerComponent;
class UDynamicMaterialCache;
class UColonyManagerComponent;
class UBuildingManagerComponent;
class UPowerNetworkManagerComponent;
class UZoneManagerComponent;
class UConversationNavigatorComponent;
class UCutsceneComponent;
class UInterfaceManagerComponent;
class UAuraManagerComponent;
class UBurgleQuestManagerComponent;
class UWaterManagerComponent;
class UPropManagerComponent;
class UVisualStateManagerComponent;
class URenderTargetManagerComponent;
class UPlayerStatsComponent;
class UBestiaryComponent;
class UPersistenceComponent;
class UAmbienceManager;
class UPostGameReportDataAsset;
class ASurvivalPlayerState;
class UVisualEffect;
class ASurvivalPlayerCharacter;
class ABossManager;

UCLASS(Blueprintable)
class MAINE_API ASurvivalGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateAddRemove OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateAddRemove OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULODActorManagerComponent* LODActorManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCalendarComponent* CalendarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyComponent* PartyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyBarrierComponent* PartyBarrierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapComponent* MapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDMarkerManagerComponent* HUDMarkerManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemManagerComponent* ItemManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFoliageManagerComponent* FoliageManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerComponent* QuestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreadcrumbManagerComponent* BreadcrumbManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttractionManagerComponent* AttractionManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaveManagerComponent* WaveManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCVarManagerComponent* CVarManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSkipComponent* MovieSkipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAsyncTraceShareComponent* AsyncTraceShareComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseManagerComponent* BaseManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildingManagerComponent* BuildingManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerNetworkManagerComponent* PowerNetworkManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConversationNavigatorComponent* ConversationNavigatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCutsceneComponent* CutsceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterestManagerComponent* InterestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurvivalModeManagerComponent* SurvivalModeManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuraManagerComponent* AuraManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZoneManagerComponent* ZoneManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UColonyManagerComponent* ColonyManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBurgleQuestManagerComponent* BurgleQuestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopulationMonitorComponent* PopulationMonitorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldTraceManagerComponent* WorldTraceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterManagerComponent* WaterManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropManagerComponent* PropManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisualStateManagerComponent* VisualStateManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderTargetManagerComponent* RenderTargetManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResourceSurveyComponent* ResourceSurveyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* TotalPartyPlayerStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBestiaryComponent* BestiaryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterfaceManagerComponent* InterfaceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMaterialCache* DynamicMaterialCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbienceManager* AmbienceManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefensePointActiveChanged OnDefensePointActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefensePointCompleted OnDefensePointCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyGameStarted OnLobbyGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid PlaythroughGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlaythroughName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasResetCreatureLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRecoveredPlayerBackpacks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameWon OnGameWonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalUserGeneratedContentPrivilegeCachedDelegate OnLocalUserGeneratedContentPrivilegeCachedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemSpawnManager> ItemSpawnManagerTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPostGameReportDataAsset* PostGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyPlayerCharacterIdentities, meta=(AllowPrivateAccess=true))
    TArray<EPlayerCharacterIdentity> LobbyPlayerCharacterIdentities;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyGameStarted, meta=(AllowPrivateAccess=true))
    bool bLobbyGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBigHeads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ColorCollectibleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 UpgradeCollectibleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> GlobalVariableScores;
    
public:
    ASurvivalGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGameStartViaLobby();
    
    UFUNCTION(BlueprintCallable)
    void SignalGameWon();
    
    UFUNCTION(BlueprintCallable)
    void SetLocalUserHaveUserGeneratedContentPrivilege(bool bHasPrivilege);
    
    UFUNCTION(BlueprintCallable)
    void SetInCutscene(bool InCutscene);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetBigHeads(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyPlayerCharacterIdentities();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyGameStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveSpawnFailed(const TArray<FGameplayTag>& FailedToSpawnFactions);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveSpawned(bool ManualWave, AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveCompositionChanged(const TArray<FWaveCompositionData>& Composition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveComplete(EWaveCompletionReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveAttackStateChanged(EWaveAttackState AttackState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayVFXLocation(UVisualEffect* Effect, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayItemConsumeAudioAtLocation(FDataTableRowHandle ItemRowHandle, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayAudioAtLocation(USoundCue* Cue, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerLeave(APlayerState* PlayerState, EPlayerDisconnectReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerJoin(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerDown(APlayerState* PlayerState, const FDeathInfo& DeathInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPetDeparted(ASurvivalPlayerCharacter* ToPlayer, const FString& PetName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastNotifyEndOfEarlyAccessContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefensePointActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePatchSaveGameRepair(FGameVersion LoadedVersion, EGamePackageType GamePackageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEndEarlyAccessConent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItemSpawnManager* GetItemSpawnManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHUDMarkerManagerComponent* GetHUDMarkerManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFoliageManagerComponent* GetFoliageManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBigHeadsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAmbienceManager* GetAmbienceManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDefensePointComponent* GetActiveDefensePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABossManager* GetActiveBossForPlayer(ASurvivalPlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesLocalUserHaveUserGeneratedContentPrivilege() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientSendFileContents(const FString& Filename, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientEndStreamFile(const FString& Filename, const FString& Hash);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBeginStreamFile(const FString& SaveName, const FString& Filename, int64 FileSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPostGameReport CalculatePostGameReport(ASurvivalPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BigHeads();
    
};

