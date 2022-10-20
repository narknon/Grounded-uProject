#include "DamageInfo.h"

FDamageInfo::FDamageInfo() {
    /*this->InflictStyle = EInflictDamageStyle::;*/
    this->DamageType = NULL;
    this->Tier = 0.00f;
    this->HitStun = 0.00f;
    /*this->ForcedHitReaction = EHitReactionType::;*/
    /*this->BlockType = EBlockType::;*/
    /*this->DamageSourceType = EDamageSourceType::;*/
    this->Pushback = 0.00f;
    this->DamageFlags = 0.00f;
}

