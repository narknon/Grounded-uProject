#include "ZoneOneShotEntry.h"

FZoneOneShotEntry::FZoneOneShotEntry() {
    this->StartHourOfDay = 0.00f;
    this->EndHourOfDay = 0.00f;
    this->UseCurveForProbability = false;
    this->Probability = 0.00f;
    this->UseCurveForRetriggerTime = false;
}

