#include "WaveCreatureComponent.h"

class AWaveSpawnRegionVolume;

void UWaveCreatureComponent::SetIsUnderWater(bool UnderWater) {
}

void UWaveCreatureComponent::OnWaveRegionRemovedFromBase(int32 BaseIndex, AWaveSpawnRegionVolume* Region) {
}

void UWaveCreatureComponent::OnWaveAttackStateChanged(EWaveAttackState AttackState) {
}

UWaveCreatureComponent::UWaveCreatureComponent() {
    this->DeinstanceRadius = 0.00f;
    this->DistanceMovedToDeinstance = 0.00f;
    this->TimeBetweenDeinstances = 0.00f;
    this->LastDeinstanceTime = 0.00f;
    this->MaxTimeWithoutContact = 0.00f;
    this->TimeWithoutContact = 0.00f;
    this->MinDistanceToTravelForNotStuck = 0.00f;
    this->MinTravelDistanceForProgress = 0.00f;
    this->LastDistToBase = 0.00f;
    this->MinProjectedProgressDistance = 0.00f;
    this->LastProjectedDistance = 0.00f;
    this->bIsUnderwater = false;
    this->RetreatTimeLimit = 0.00f;
    this->RetreatRandRange = 0.00f;
    this->RetreatStartTime = 0.00f;
    this->NewDestinationCheckThreshold = 0.00f;
    this->TimeInBaseRadius = 0.00f;
    this->SpawnTarget = NULL;
}

