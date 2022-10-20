#include "AnimNotifyState_MultiHitFrame.h"

UAnimNotifyState_MultiHitFrame::UAnimNotifyState_MultiHitFrame() {
    this->HitFrameType = EHitFrameType::;
    this->ActualAttack = NULL;
    this->UseSecondaryDamageData = false;
    this->SecondaryDamageDataIndex = 0.00f;
}

