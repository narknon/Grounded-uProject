#include "AttackData.h"

FAttackData::FAttackData() {
    this->ChargeTime = 0.00f;
    this->bChargeHoldChainsAttack = false;
    this->Range = 0.00f;
    this->ChargedRange = 0.00f;
    this->OverrideTraceRadius = 0.00f;
    this->ConeAngle = 0.00f;
    this->ConeBaseDirectionAngle = 0.00f;
    this->ConeBaseDirectionSymetry = false;
    this->bIgnoreVisibilityCheck = false;
    this->Duration = 0.00f;
    this->SoundIntensity = 0.00f;
    this->SoundRange = 0.00f;
    this->HitResolutionType = EAttackHitType::;
    this->bIsHostile = false;
    this->bFriendlyFire = false;
    this->bIgnoreOwner = false;
    this->bDropHauledItems = false;
    this->FireAttackOnFullCharge = false;
    this->bEndAttackOnHit = false;
    this->bHitFrameLoops = false;
    this->bChargeHitOnlyOnCharacter = false;
    this->bSelfDestruct = false;
    this->bDestroyTarget = false;
    this->StaminaCost = 0.00f;
    this->bConsumeStaminaOnHitFrame = false;
    this->bRangedAttack = false;
    this->bBurrowAttack = false;
    this->bBurrowOnEndAttack = false;
    this->bUnBurrowOnEndAttack = false;
    this->ProjectileAttackTime = 0.00f;
    this->bUseLegacyOffset = false;
    this->bUseOffsetAsRange = false;
    this->bSummonBossMobsPhase = false;
    this->StatusEffectApplyType = EAttackStatusEffectApplyType::;
    this->AttackAnim = NULL;
}

