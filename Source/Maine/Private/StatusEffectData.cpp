#include "StatusEffectData.h"

FStatusEffectData::FStatusEffectData() {
    this->Type = (EStatusEffectType)140698270272880;
    this->Value = 0.00f;
    this->DurationType = (EStatusEffectDurationType)140698270272880;
    this->Duration = 0.00f;
    this->Interval = 0.00f;
    this->DamageTypeFlags = 0.00f;
    this->DamageType = NULL;
    this->ApplyType = (EStatusEffectApplyType)140698270272880;
    this->AttackChargeType = (EStatusEffectAttackChargeType)140698270272880;
    this->ClearFlags = 0.00f;
    this->ScreenEffectData = NULL;
    this->VisualEffectData = NULL;
    this->bShowInUI = false;
    this->bIsNegativeEffectInUI = false;
    this->bStackInUI = false;
}

