#include "LootData.h"

FLootData::FLootData() {
    this->Type = (ELootType)140698270272880;
    this->Count = 0.00f;
    this->DropChance = 0.00f;
    this->DropChanceMultiplier = 0.00f;
    this->SpawnType = (ELootSpawnType)140698270272880;
    this->LocationType = (ELootLocationType)140698270272880;
    this->SpawnPoint = NULL;
    this->IgnoreObjectiveMarkers = false;
    this->bDoUnderFloorCheckDuringLootSpawn = false;
    this->bSpawnOnDecay = false;
    this->bCheckConditionals = false;
}

