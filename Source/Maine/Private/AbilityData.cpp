#include "AbilityData.h"

FAbilityData::FAbilityData() {
    this->Cooldown = 0.00f;
    /*this->BeginCooldownConfig = ECooldownBeginConfig::;*/
    this->SetBeginCooldown = 0.00f;
    this->Priority = 0.00f;
    /*this->AbilityTargetType = EAbilityTargetType::;*/
    this->UseNearestScriptedTarget = false;
    this->IgnoreCooldownInPreferedAbility = false;
    this->AnimPreAttack = NULL;
}

