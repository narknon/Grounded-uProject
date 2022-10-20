#include "StatusEffectData.h"

FStatusEffectData::FStatusEffectData() {
    /*this->Type = EStatusEffectType::;*/
    this->Value = 0.00f;
    /*this->DurationType = EStatusEffectDurationType::;*/
    this->Duration = 0.00f;
    this->Interval = 0.00f;
    this->DamageTypeFlags = 0.00f;
    this->DamageType = NULL;
    /*this->ApplyType = EStatusEffectApplyType::;*/
    /*this->AttackChargeType = EStatusEffectAttackChargeType::;*/
    this->ClearFlags = 0.00f;
    this->ScreenEffectData = NULL;
    this->VisualEffectData = NULL;
    this->bShowInUI = false;
    this->bIsNegativeEffectInUI = false;
    this->bStackInUI = false;
}

