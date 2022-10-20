#include "PlayerStatsComponent.h"
#include "Net/UnrealNetwork.h"

class UPlayerStatConfig;
class ASurvivalCharacter;
class AActor;
class ASurvivalCreature;
class UPointOfInterestDataAsset;
class ASurvivalPlayerState;
class UInventoryComponent;
class UDefensePointComponent;

void UPlayerStatsComponent::SetPlayerStatIfLarger(UPlayerStatConfig* PlayerStat, int32 NewValue) {
}

void UPlayerStatsComponent::OnStaminaDepleted(float StaminaRatio) {
}

void UPlayerStatsComponent::OnReviveTarget(AActor* RevivedActor) {
}

void UPlayerStatsComponent::OnPointOfInterestDiscovered(UPointOfInterestDataAsset* PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState) {
}

void UPlayerStatsComponent::OnPhotoTaken() {
}

void UPlayerStatsComponent::OnPetTamed(ASurvivalCreature* Pet) {
}

void UPlayerStatsComponent::OnKill(AActor* KilledActor, const FDamageInfo& DamageInfo) {
}

void UPlayerStatsComponent::OnKeyItemObtained(FDataTableRowHandle KeyItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned) {
}

void UPlayerStatsComponent::OnItemUsed(ASurvivalCharacter* User, FDataTableRowHandle ItemRowHandle) {
}

void UPlayerStatsComponent::OnItemCrafted(UInventoryComponent* Sender, FDataTableRowHandle RecipeHandle) {
}

void UPlayerStatsComponent::OnItemAdded(UInventoryComponent* InventoryComponent, FDataTableRowHandle ItemHandle, bool IsNewItem, int32 Count, int32 TotalCount) {
}

void UPlayerStatsComponent::OnDefensePointComplete(UDefensePointComponent* DefensePoint) {
}

void UPlayerStatsComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void UPlayerStatsComponent::IncrementPlayerStat(UPlayerStatConfig* PlayerStat, int32 ValueToAdd) {
}

int32 UPlayerStatsComponent::GetPostGameStat(UPlayerStatConfig* PlayerStat) const {
    return 0;
}

void UPlayerStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerStatsComponent, PostGameStatValues);
}

UPlayerStatsComponent::UPlayerStatsComponent() {
}

