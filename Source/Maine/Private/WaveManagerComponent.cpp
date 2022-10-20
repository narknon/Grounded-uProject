#include "WaveManagerComponent.h"
#include "Net/UnrealNetwork.h"

class UDefensePointComponent;
class AActor;

bool UWaveManagerComponent::WaveInitiated() const {
    return false;
}

void UWaveManagerComponent::PlayWaveStartChatter() {
}

void UWaveManagerComponent::OnSpawnKilled(const FDamageInfo& DamageInfo) {
}

void UWaveManagerComponent::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UWaveManagerComponent::OnDefensePointCompleted(UDefensePointComponent* DefensePoint) {
}

void UWaveManagerComponent::OnCustomGameSettingsChanged() {
}

bool UWaveManagerComponent::IsWaveActive() const {
    return false;
}

bool UWaveManagerComponent::IsManualWaveActive() const {
    return false;
}

bool UWaveManagerComponent::IsFactionWaveActive() const {
    return false;
}

float UWaveManagerComponent::GetWaveProgress() const {
    return 0.0f;
}

int32 UWaveManagerComponent::GetNumWaveCreatures() const {
    return 0;
}

AActor* UWaveManagerComponent::GetInstigator() const {
    return NULL;
}

int32 UWaveManagerComponent::GetInitialWaveCreatureCount() const {
    return 0;
}

void UWaveManagerComponent::GenerateWaveSpawns(int32 Heat, TArray<FWaveSpawn>& WaveSpawnData, bool Finalize) {
}

void UWaveManagerComponent::GenerateFactionWaveSpawnsWithWeights(FGameplayTag FactionTag, int32 Weight, bool Finalize) {
}

void UWaveManagerComponent::GenerateFactionWaveSpawns(FGameplayTag FactionTag, int32 Heat, bool Finalize) {
}

bool UWaveManagerComponent::FactionHasFlyingCreatures(FGameplayTag FactionTag) const {
    return false;
}

bool UWaveManagerComponent::BaseMeetsWaveAnchorRatio(int32 BaseIndex) const {
    return false;
}

void UWaveManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWaveManagerComponent, ActiveFactions);
    DOREPLIFETIME(UWaveManagerComponent, AttackState);
    DOREPLIFETIME(UWaveManagerComponent, ActiveWaveInitialSpawnCount);
    DOREPLIFETIME(UWaveManagerComponent, ActiveWaveRemainingSpawnCount);
    DOREPLIFETIME(UWaveManagerComponent, bWaveActive);
    DOREPLIFETIME(UWaveManagerComponent, bOrganicWaveInitiated);
    DOREPLIFETIME(UWaveManagerComponent, bManualWaveInitiated);
    DOREPLIFETIME(UWaveManagerComponent, FailedToSpawnFactions);
    DOREPLIFETIME(UWaveManagerComponent, WaveInstigator);
    DOREPLIFETIME(UWaveManagerComponent, WaveComposition);
}

UWaveManagerComponent::UWaveManagerComponent() {
    this->MaxTimeInRetryQueue = 0.00f;
    this->DefaultWaveSpawnReputationThreshold = 0.00f;
    this->MinimumWaveAnchorToAnchorRatio = 0.00f;
    this->OrganicWaveCooldownPeriodBase = 0.00f;
    this->OrganicWaveCooldownPeriodRandom = 0.00f;
    this->ManualWaveRefreshesOrganicCooldownThreshold = 0.00f;
    this->CooldownDelay = 0.00f;
    this->CooldownDelayThreshold = 0.00f;
    this->FlyingCreatureSpawnMinimumSpawnDelay = 0.00f;
    this->MaxCreaturesPerTranche = 0.00f;
    this->SecondsBetweenTranches = 0.00f;
    this->MaxActiveCreatureSpawnDelay = 0.00f;
    this->MaxActiveCreatureWeight = 0.00f;
    this->FlyingCreatureCountWeight = 0.00f;
    this->AdditionalMaxActiveCreaturesPerExtraPlayer = 0.00f;
    this->BaseBufferDistance = 0.00f;
    this->WaveTargetStartCount = 0.00f;
    this->WaveSpawnCheckInterval = 0.00f;
    this->SpawnChancePerBaseRepRequirement = 0.00f;
    this->MinBasePointsForOrganicWave = 0.00f;
    this->SpawnEQSRequest = NULL;
    this->WaveStartEQSRequest = NULL;
    this->WaveBaseEQSRequest = NULL;
    this->WaveMusicTensionTrack = NULL;
    this->WaveMusicAttackTrack = NULL;
    this->DestroyedBuildingCountPercentLimit = 0.00f;
    this->WaveBaseDestructionRatio = 0.00f;
    this->DamageCapReductionPercentForInactivity = 0.00f;
    this->TimeBetweenInactivityChecks = 0.00f;
    this->PlayersAwayFromBaseDestructionMultiplier = 0.00f;
    this->ManualWaveFullClearPointsThreshold = 0.00f;
    this->DestroyedBuildingCountIgnoreLimitForManualWave = 0.00f;
    this->PlayerDeathWaveDamage = 0.00f;
    this->UnderAttackChatterDelay = 0.00f;
    this->ActiveWave = NULL;
    this->AttackState = EWaveAttackState::;
    this->ActiveWaveInitialSpawnCount = 0.00f;
    this->ActiveWaveRemainingSpawnCount = 0.00f;
    this->bWaveActive = false;
    this->bOrganicWaveInitiated = false;
    this->bManualWaveInitiated = false;
    this->WaveInstigator = NULL;
    this->CooldownToNextWave = 0.00f;
    this->HighestCompletedHeatLevel = 0.00f;
}

