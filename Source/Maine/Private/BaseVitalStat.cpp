#include "BaseVitalStat.h"

class UInterestCore;

float UBaseVitalStat::GetDamageResponse(float Damage, const FDamageInfo& DamageInfo) const {
    return 0.0f;
}

float UBaseVitalStat::GenerateStartingValue(UInterestCore* Core) const {
    return 0.0f;
}

void UBaseVitalStat::AdjustVital(UInterestCore* Core, float& Vital, float DeltaHours) const {
}

UBaseVitalStat::UBaseVitalStat() {
    this->ValueCurve = NULL;
    this->StartingRangeEnabled = 1;
}

