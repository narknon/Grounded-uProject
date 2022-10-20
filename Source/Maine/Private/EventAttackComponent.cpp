#include "EventAttackComponent.h"

class UAttack;
class AController;
class UBaseLODActor;

void UEventAttackComponent::ResetValues() {
}

void UEventAttackComponent::OnDamagedCharacter(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UEventAttackComponent::OnAttack(UAttack* Attack) {
}

void UEventAttackComponent::EndAttack(UAttack* Attack) {
}

void UEventAttackComponent::ApplyEffects() {
}

UEventAttackComponent::UEventAttackComponent() {
    this->DamageEventType = EDamageEventComponentType::;
    this->HealthToLoseForApplyingEffect = 0.00f;
}

