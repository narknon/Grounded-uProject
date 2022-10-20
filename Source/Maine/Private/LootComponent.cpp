#include "LootComponent.h"
#include "Net/UnrealNetwork.h"

class UBaseLODActor;
class AActor;
class AController;
class UHealthComponent;
class USceneComponent;
class USurvivalGameInstance;
class UGoapAction;
class UObject;

void ULootComponent::StartCacheSpawnPointVelocities() {
}

void ULootComponent::SpawnLoot(AActor* Looter, ELootSpawnType SpawnType) {
}

void ULootComponent::SetSpawnPointForItem(USceneComponent* SpawnPoint, int32 ItemIndex) {
}

void ULootComponent::SetAllDropChanceMultipliers(float Value) {
}

void ULootComponent::OnDecayed(UHealthComponent* Sender) {
}

void ULootComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void ULootComponent::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

bool ULootComponent::CanDropItem(const FDataTableRowHandle& ItemType) const {
    return false;
}

TArray<UGoapAction*> ULootComponent::AllocateGOAPActions_Implementation(USurvivalGameInstance* GameInstance, UObject* InOwner) {
    return TArray<UGoapAction*>();
}

void ULootComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULootComponent, bInteractable);
}

ULootComponent::ULootComponent() {
    this->OnLootSpawnSFX = NULL;
    this->bDestroyBody = false;
    this->bApplyRandomLootSpawnVelocity = true;
    this->InteractDelayOnDeath = 0.00f;
    this->TemplateHarvestAction = NULL;
    this->bInteractable = false;
    this->bForceGiveBestiaryLootIfLastOfActorClass = false;
}

