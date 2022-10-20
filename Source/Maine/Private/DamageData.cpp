#include "DamageData.h"

FDamageData::FDamageData() {
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->DamageEventType = EDamageEventType::;
    this->ForcedHitReaction = EHitReactionType::;
    this->HitStun = 0.00f;
    this->Pushback = 0.00f;
}

