#include "ThrowData.h"

FThrowData::FThrowData() {
    this->bCanThrow = false;
    this->bCanThrowUnderWater = false;
    this->bDestroyOnAttack = false;
    this->ThrowAttackType = (EThrowAttackType)140698270272880;
    this->ThrowSpeedMultiplier = 0.00f;
    this->ThrowSpeedMultiplierInWater = 0.00f;
    this->AttackDelay = 0.00f;
    this->ThrowAnim = NULL;
}

