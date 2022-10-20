#include "SMInstancerStats.h"

FSMInstancerStats::FSMInstancerStats() {
    this->NumActorsModified = 0.00f;
    this->NumIncompatibleActorsSkipped = 0.00f;
    this->NumLevelsModified = 0.00f;
    this->NumDistinctSMAs = 0.00f;
    this->DistinctSMAsBelowInstanceThreshold = 0.00f;
    this->BelowInstanceThresholdButNotUniqueTotal = 0.00f;
    this->UniqueSMAs = 0.00f;
    this->HISMACount = 0.00f;
    this->HISMComponentCount = 0.00f;
    this->OutlierCount = 0.00f;
}

