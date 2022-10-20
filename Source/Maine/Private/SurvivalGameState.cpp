#include "SurvivalGameState.h"
#include "Net/UnrealNetwork.h"
#include "ZoneManagerComponent.h"
#include "PowerNetworkManagerComponent.h"
#include "WorldTraceManagerComponent.h"
#include "WaveManagerComponent.h"
#include "CalendarComponent.h"
#include "ResourceSurveyComponent.h"
#include "SurvivalModeManagerComponent.h"
#include "AsyncTraceShareComponent.h"
#include "MovieSkipComponent.h"
#include "AttractionManagerComponent.h"
#include "InterfaceManagerComponent.h"
#include "CutsceneComponent.h"
#include "WaterManagerComponent.h"
#include "ItemSpawnManager.h"
#include "ObsidianIDComponent.h"
#include "PopulationMonitorComponent.h"
#include "HUDMarkerManagerComponent.h"
#include "FoliageManagerComponent.h"
#include "AmbienceManager.h"
#include "LODActorManagerComponent.h"
#include "BreadcrumbManagerComponent.h"
#include "PartyComponent.h"
#include "PartyBarrierComponent.h"
#include "MapComponent.h"
#include "ItemManagerComponent.h"
#include "QuestManagerComponent.h"
#include "CVarManagerComponent.h"
#include "BaseManagerComponent.h"
#include "DynamicMaterialCache.h"
#include "ColonyManagerComponent.h"
#include "BuildingManagerComponent.h"
#include "ConversationNavigatorComponent.h"
#include "InterestManagerComponent.h"
#include "BurgleQuestManagerComponent.h"
#include "AuraManagerComponent.h"
#include "PropManagerComponent.h"
#include "VisualStateManagerComponent.h"
#include "RenderTargetManagerComponent.h"
#include "PlayerStatsComponent.h"
#include "BestiaryComponent.h"
#include "PersistenceComponent.h"

class ASurvivalPlayerState;
class AActor;
class UVisualEffect;
class USoundCue;
class UDefensePointComponent;
class APlayerState;
class ASurvivalPlayerCharacter;
class ABossManager;

void ASurvivalGameState::UnRegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event) {
}

void ASurvivalGameState::TriggerGameStartViaLobby() {
}

void ASurvivalGameState::SignalGameWon() {
}

void ASurvivalGameState::SetLocalUserHaveUserGeneratedContentPrivilege(bool bHasPrivilege) {
}

void ASurvivalGameState::SetInCutscene(bool InCutscene) {
}

void ASurvivalGameState::ServerSetBigHeads_Implementation(bool bState) {
}
bool ASurvivalGameState::ServerSetBigHeads_Validate(bool bState) {
    return true;
}

void ASurvivalGameState::RegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event) {
}

void ASurvivalGameState::OnRep_LobbyPlayerCharacterIdentities() {
}

void ASurvivalGameState::OnRep_LobbyGameStarted() {
}

void ASurvivalGameState::MulticastWaveSpawnFailed_Implementation(const TArray<FGameplayTag>& FailedToSpawnFactions) {
}

void ASurvivalGameState::MulticastWaveSpawned_Implementation(bool ManualWave, AActor* InInstigator) {
}

void ASurvivalGameState::MulticastWaveCompositionChanged_Implementation(const TArray<FWaveCompositionData>& Composition) {
}

void ASurvivalGameState::MulticastWaveComplete_Implementation(EWaveCompletionReason Reason) {
}

void ASurvivalGameState::MulticastWaveAttackStateChanged_Implementation(EWaveAttackState AttackState) {
}

void ASurvivalGameState::MulticastPlayVFXLocation_Implementation(UVisualEffect* Effect, FVector Location) {
}

void ASurvivalGameState::MulticastPlayItemConsumeAudioAtLocation_Implementation(FDataTableRowHandle ItemRowHandle, FVector Location) {
}

void ASurvivalGameState::MulticastPlayAudioAtLocation_Implementation(USoundCue* Cue, FVector Location) {
}

void ASurvivalGameState::MulticastNotifyPlayerLeave_Implementation(APlayerState* PlayerState, EPlayerDisconnectReason Reason) {
}

void ASurvivalGameState::MulticastNotifyPlayerJoin_Implementation(APlayerState* PlayerState) {
}

void ASurvivalGameState::MulticastNotifyPlayerDown_Implementation(APlayerState* PlayerState, const FDeathInfo& DeathInfo) {
}

void ASurvivalGameState::MulticastNotifyPetDeparted_Implementation(ASurvivalPlayerCharacter* ToPlayer, const FString& PetName) {
}

void ASurvivalGameState::MulticastNotifyEndOfEarlyAccessContent_Implementation() {
}

bool ASurvivalGameState::IsDefensePointActive() const {
    return false;
}

bool ASurvivalGameState::IsBossActive() const {
    return false;
}



AItemSpawnManager* ASurvivalGameState::GetItemSpawnManager() const {
    return NULL;
}

bool ASurvivalGameState::GetInCutscene() {
    return false;
}

UHUDMarkerManagerComponent* ASurvivalGameState::GetHUDMarkerManagerComponent() const {
    return NULL;
}

UFoliageManagerComponent* ASurvivalGameState::GetFoliageManagerComponent() const {
    return NULL;
}

bool ASurvivalGameState::GetBigHeadsState() const {
    return false;
}

UAmbienceManager* ASurvivalGameState::GetAmbienceManager() const {
    return NULL;
}

UDefensePointComponent* ASurvivalGameState::GetActiveDefensePoint() const {
    return NULL;
}

ABossManager* ASurvivalGameState::GetActiveBossForPlayer(ASurvivalPlayerCharacter* PlayerCharacter) const {
    return NULL;
}

bool ASurvivalGameState::DoesLocalUserHaveUserGeneratedContentPrivilege() const {
    return false;
}

void ASurvivalGameState::ClientSendFileContents_Implementation(const FString& Filename, const TArray<uint8>& Buffer) {
}

void ASurvivalGameState::ClientEndStreamFile_Implementation(const FString& Filename, const FString& Hash) {
}

void ASurvivalGameState::ClientBeginStreamFile_Implementation(const FString& SaveName, const FString& Filename, int64 FileSize) {
}

FPostGameReport ASurvivalGameState::CalculatePostGameReport(ASurvivalPlayerState* PlayerState) const {
    return FPostGameReport{};
}

void ASurvivalGameState::BigHeads() {
}

void ASurvivalGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalGameState, PlaythroughGuid);
    DOREPLIFETIME(ASurvivalGameState, LobbyPlayerCharacterIdentities);
    DOREPLIFETIME(ASurvivalGameState, bLobbyGameStarted);
    DOREPLIFETIME(ASurvivalGameState, bBigHeads);
    DOREPLIFETIME(ASurvivalGameState, ColorCollectibleCount);
    DOREPLIFETIME(ASurvivalGameState, UpgradeCollectibleCount);
    DOREPLIFETIME(ASurvivalGameState, GlobalVariableScores);
}

ASurvivalGameState::ASurvivalGameState() {
    this->LODActorManagerComponent = CreateDefaultSubobject<ULODActorManagerComponent>(TEXT("LODActorManagerComponent"));
    this->CalendarComponent = CreateDefaultSubobject<UCalendarComponent>(TEXT("CalendarComponent"));
    this->PartyComponent = CreateDefaultSubobject<UPartyComponent>(TEXT("PartyComponent"));
    this->PartyBarrierComponent = CreateDefaultSubobject<UPartyBarrierComponent>(TEXT("PartyBarrierComponent"));
    this->MapComponent = CreateDefaultSubobject<UMapComponent>(TEXT("MapComponent"));
    this->HUDMarkerManagerComponent = CreateDefaultSubobject<UHUDMarkerManagerComponent>(TEXT("HUDMarkerManagerComponent"));
    this->ItemManagerComponent = CreateDefaultSubobject<UItemManagerComponent>(TEXT("ItemManagerComponent"));
    this->FoliageManagerComponent = CreateDefaultSubobject<UFoliageManagerComponent>(TEXT("FoliageManagerComponent"));
    this->QuestManagerComponent = CreateDefaultSubobject<UQuestManagerComponent>(TEXT("QuestManagerComponent"));
    this->BreadcrumbManagerComponent = CreateDefaultSubobject<UBreadcrumbManagerComponent>(TEXT("BreadcrumbManagerComponent"));
    this->AttractionManagerComponent = CreateDefaultSubobject<UAttractionManagerComponent>(TEXT("AttractionManagerComponent"));
    this->WaveManagerComponent = CreateDefaultSubobject<UWaveManagerComponent>(TEXT("WaveManagerComponent"));
    this->CVarManagerComponent = CreateDefaultSubobject<UCVarManagerComponent>(TEXT("CVarManagerComponent"));
    this->MovieSkipComponent = CreateDefaultSubobject<UMovieSkipComponent>(TEXT("MovieSkipComponent"));
    this->AsyncTraceShareComponent = CreateDefaultSubobject<UAsyncTraceShareComponent>(TEXT("AsyncTraceShareComponent"));
    this->BaseManagerComponent = CreateDefaultSubobject<UBaseManagerComponent>(TEXT("BaseManagerComponent"));
    this->BuildingManagerComponent = CreateDefaultSubobject<UBuildingManagerComponent>(TEXT("BuildingManagerComponent"));
    this->PowerNetworkManagerComponent = CreateDefaultSubobject<UPowerNetworkManagerComponent>(TEXT("PowerNetworkManagerComponent"));
    this->ConversationNavigatorComponent = CreateDefaultSubobject<UConversationNavigatorComponent>(TEXT("ConversationNavigatorComponent"));
    this->CutsceneComponent = CreateDefaultSubobject<UCutsceneComponent>(TEXT("CutsceneComponent"));
    this->InterestManagerComponent = CreateDefaultSubobject<UInterestManagerComponent>(TEXT("InterestManagerComponent"));
    this->SurvivalModeManagerComponent = CreateDefaultSubobject<USurvivalModeManagerComponent>(TEXT("SurvivalModeManagerComponent"));
    this->AuraManagerComponent = CreateDefaultSubobject<UAuraManagerComponent>(TEXT("AuraManagerComponent"));
    this->ZoneManagerComponent = CreateDefaultSubobject<UZoneManagerComponent>(TEXT("ZoneManagerComponent"));
    this->ColonyManagerComponent = CreateDefaultSubobject<UColonyManagerComponent>(TEXT("ColonyManagerComponent"));
    this->BurgleQuestManagerComponent = CreateDefaultSubobject<UBurgleQuestManagerComponent>(TEXT("BurgleQuestManagerComponent"));
    this->PopulationMonitorComponent = CreateDefaultSubobject<UPopulationMonitorComponent>(TEXT("PopulationMonitorComponent"));
    this->WorldTraceManagerComponent = CreateDefaultSubobject<UWorldTraceManagerComponent>(TEXT("WorldTraceManagerComponent"));
    this->WaterManagerComponent = CreateDefaultSubobject<UWaterManagerComponent>(TEXT("WaterManagerComponent"));
    this->PropManagerComponent = CreateDefaultSubobject<UPropManagerComponent>(TEXT("PropManagerComponent"));
    this->VisualStateManagerComponent = CreateDefaultSubobject<UVisualStateManagerComponent>(TEXT("VisualStateManagerComponent"));
    this->RenderTargetManagerComponent = CreateDefaultSubobject<URenderTargetManagerComponent>(TEXT("RenderTargetManagerComponent"));
    this->ResourceSurveyComponent = CreateDefaultSubobject<UResourceSurveyComponent>(TEXT("ResourceSurveyComponent"));
    this->TotalPartyPlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("UPlayerStatsComponent"));
    this->BestiaryComponent = CreateDefaultSubobject<UBestiaryComponent>(TEXT("BestiaryComponent"));
    this->InterfaceManagerComponent = CreateDefaultSubobject<UInterfaceManagerComponent>(TEXT("InterfaceManager"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->DynamicMaterialCache = CreateDefaultSubobject<UDynamicMaterialCache>(TEXT("DynamicMaterialCache"));
    this->AmbienceManager = CreateDefaultSubobject<UAmbienceManager>(TEXT("AmbienceManager"));
    this->bHasResetCreatureLocations = false;
    this->bHasRecoveredPlayerBackpacks = false;
    this->ItemSpawnManagerTemplate = AItemSpawnManager::StaticClass();
    this->PostGameData = NULL;
    this->bLobbyGameStarted = false;
    this->bBigHeads = false;
    this->ColorCollectibleCount = 0.00f;
    this->UpgradeCollectibleCount = 0.00f;
}

