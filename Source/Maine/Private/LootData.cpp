#include "LootData.h"

FLootData::FLootData() {
    this->Type = ELootType::;
    this->Count = 0.00f;
    this->DropChance = 0.00f;
    this->DropChanceMultiplier = 0.00f;
    this->SpawnType = ELootSpawnType::;
    this->LocationType = ELootLocationType::;
    this->SpawnPoint = NULL;
    this->IgnoreObjectiveMarkers = false;
    this->bDoUnderFloorCheckDuringLootSpawn = false;
    this->bSpawnOnDecay = false;
    this->bCheckConditionals = false;
}

