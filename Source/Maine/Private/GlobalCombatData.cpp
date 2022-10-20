#include "GlobalCombatData.h"

UGlobalCombatData::UGlobalCombatData() {
    this->DefaultAttackTraceRadius = 0.00f;
    this->OutOfStaminaBlockStunMultiplier = 0.00f;
    this->OutOfStaminaBlockMultiplier = 0.00f;
    this->GenericDamageType = NULL;
    this->HungerDamageType = NULL;
    this->ThirstDamageType = NULL;
    this->BadFoodDamageType = NULL;
    this->EnvironmentalDamageType = NULL;
    this->MinimumDamageReduction = 0.00f;
    this->MinimumDamageReductionDecreasePerEquipmentLevel = 0.00f;
    this->CriticalHitMultiplier = 0.00f;
    this->ThrowingStaminaCost = 0.00f;
    this->ThrowingDurabilityCost = 0.00f;
    this->ThrowingForce = 0.00f;
    this->ThrowingRotationalForce = 0.00f;
    this->ItemVelocityThresholdForDamage = 0.00f;
    this->ItemVelocityThresholdForSound = 0.00f;
    this->HitMarkerSound = NULL;
    this->CriticalHitEffect = NULL;
    this->CombatRegenDelay = 0.00f;
    this->CombatRegenTickPercentage = 0.00f;
    this->CombatRegenTickRate = 0.00f;
}

