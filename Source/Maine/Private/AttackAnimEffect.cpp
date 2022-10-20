#include "AttackAnimEffect.h"

FGameplayTag UAttackAnimEffect::GetAttackSpeedTag() const {
    return FGameplayTag{};
}

UAttackAnimEffect::UAttackAnimEffect() {
    this->AttackMotionType = (EHitMotionType)140698270272880;
    this->bHasHitStops = false;
    this->bHasReload = false;
    this->AnimPropClass = NULL;
}

