#include "ItemSpawnGroupData.h"

bool UItemSpawnGroupData::HasGlobalVariableCondition() const {
    return false;
}

bool UItemSpawnGroupData::HasEventInterval(ESpawnIntervalBehavior Event) const {
    return false;
}

UItemSpawnGroupData::UItemSpawnGroupData() {
    this->BillboardSprite = NULL;
    this->NeverReuseSpawnPoints = false;
    this->PlayerProximityBehavior = (ESpawnProximityBehavior)140698270272880;
    this->RaycastSoftSpawns = true;
    this->GlobalVariableComparisonOperator = (EComparisonOperator)140698270272880;
    this->GlobalVariableCompareValue = 0.00f;
    this->ForceDespawnOnConditionNotMet = true;
    this->PlayerSpawnDistance = 0.00f;
    this->SpawnEvaluateInterval = 0.00f;
    this->PlayerDistanceCheckInterval = 0.00f;
}

