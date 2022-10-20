#include "PowerNetworkManagerComponent.h"

class ABuilding;

float UPowerNetworkManagerComponent::GetTotalPowerForNetwork(int32 NetworkId) {
    return 0.0f;
}

ABuilding* UPowerNetworkManagerComponent::GetPoweredBuilding(FBuildingPowerId ID) {
    return NULL;
}

UPowerNetworkManagerComponent::UPowerNetworkManagerComponent() {
    this->NextNodeId = 0.00f;
    this->NextNetworkId = 0.00f;
}

