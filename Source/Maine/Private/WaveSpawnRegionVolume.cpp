#include "WaveSpawnRegionVolume.h"

class AWaveSpawnRegionVolume;

bool AWaveSpawnRegionVolume::IsPointInVolume(FVector Point) {
    return false;
}

bool AWaveSpawnRegionVolume::CanFlyingCreaturesCrossRegions(AWaveSpawnRegionVolume* RegionA, AWaveSpawnRegionVolume* RegionB) {
    return false;
}

AWaveSpawnRegionVolume::AWaveSpawnRegionVolume() {
    this->Priority = 0.00f;
    this->FlyingCreatureWaveRegions = 0.00f;
    this->FlyingCreatureOnlyVolume = false;
}

