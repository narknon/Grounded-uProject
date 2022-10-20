#include "DefensePointComponent.h"
#include "Net/UnrealNetwork.h"

class ABuilding;
class UHealthComponent;
class AActor;

void UDefensePointComponent::OnRep_CurrentState(EDefensePointState PreviousState) {
}

void UDefensePointComponent::OnRep_CurrentCharge() {
}

void UDefensePointComponent::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

void UDefensePointComponent::OnEncounterSpawnKilled() {
}

void UDefensePointComponent::OnEncounterSpawnDestroyed() {
}

void UDefensePointComponent::OnEncounterComplete(AActor* DamageSource) {
}

void UDefensePointComponent::OnDefensePointHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}



bool UDefensePointComponent::IsDefensePointValid(ABuilding* TargetBuilding) {
    return false;
}

float UDefensePointComponent::GetEnemyProgress() const {
    return 0.0f;
}

EDefensePointState UDefensePointComponent::GetDefensePointState() const {
    return EDefensePointState::Ready;
}

TArray<FDefensePointTarget> UDefensePointComponent::GetDefensePoints() const {
    return TArray<FDefensePointTarget>();
}

float UDefensePointComponent::GetChargeRatio() const {
    return 0.0f;
}

void UDefensePointComponent::DeactivateEncounter() {
}

bool UDefensePointComponent::CanActivateEncounter() const {
    return false;
}

bool UDefensePointComponent::ActivateEncounter(AActor* Instigator) {
    return false;
}

void UDefensePointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefensePointComponent, CurrentCharge);
    DOREPLIFETIME(UDefensePointComponent, CurrentState);
    DOREPLIFETIME(UDefensePointComponent, TotalActiveCreatures);
    DOREPLIFETIME(UDefensePointComponent, CurrentActiveCreatures);
    DOREPLIFETIME(UDefensePointComponent, bPassesConditionals);
}

UDefensePointComponent::UDefensePointComponent() {
    this->bQuestCritical = false;
    this->DeinstanceRadius = 0.00f;
    /*this->ChargeFailType = EDefensePointChargeFailType::;*/
    this->ChargeInterval = 0.00f;
    this->ChargePerTarget = 0.00f;
    this->MaxCharge = 0.00f;
    this->CurrentCharge = 0.00f;
    this->CompletionValue = 0.00f;
    this->OverrideMusicTrackMild = NULL;
    this->OverrideMusicTrackIntense = NULL;
    this->ChargePercentageToStartMusicTrackIntense = 0.00f;
    this->UnderAttackChatterDelay = 0.00f;
    /*this->CurrentState = EDefensePointState::;*/
    this->TotalActiveCreatures = 0.00f;
    this->CurrentActiveCreatures = 0.00f;
    this->bPassesConditionals = false;
}

