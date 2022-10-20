#include "GlobalFoliageData.h"

class UStaticMesh;

float UGlobalFoliageData::GetFoliagePlayerSwapDistanceFromMesh(const UStaticMesh* StaticMesh) const {
    return 0.0f;
}

float UGlobalFoliageData::GetFoliagePlayerSwapDistanceFromKey(const FFoliageKey& Key) const {
    return 0.0f;
}

EFoliageInstanceState UGlobalFoliageData::GetFoliageDefaultStateFromMesh(const UStaticMesh* StaticMesh) const {
    return EFoliageInstanceState::Added;
}

EFoliageInstanceState UGlobalFoliageData::GetFoliageDefaultStateFromKey(const FFoliageKey& Key) const {
    return EFoliageInstanceState::Added;
}

bool UGlobalFoliageData::GetFoliageAnimatesFromMesh(const UStaticMesh* StaticMesh) const {
    return false;
}

bool UGlobalFoliageData::GetFoliageAnimatesFromKey(const FFoliageKey& Key) const {
    return false;
}

UGlobalFoliageData::UGlobalFoliageData() {
    this->FoliageRustleFadeInTime = 0.00f;
    this->FoliageRustleFadeOutTime = 0.00f;
    this->FoliageRustleMinEnergy = 0.00f;
    this->InstanceIfNecessaryDistance = 0.00f;
}

