#include "PheromoneBroadcasterBuilding.h"
#include "Net/UnrealNetwork.h"

class UBuildingManagerComponent;
class UItem;
class ABuilding;

void APheromoneBroadcasterBuilding::TurnOff() {
}

void APheromoneBroadcasterBuilding::TickConsume(float DeltaTime) {
}

void APheromoneBroadcasterBuilding::SetGatheringEnabled(bool bState) {
}

void APheromoneBroadcasterBuilding::SetBuildingEnabled(bool bState) {
}

bool APheromoneBroadcasterBuilding::IsAcceptablePowerItem(const UItem* Item) const {
    return false;
}

void APheromoneBroadcasterBuilding::HandleBuildingUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building) {
}

void APheromoneBroadcasterBuilding::HandleBuildingNotUnderConstruction(UBuildingManagerComponent* Sender, ABuilding* Building) {
}

bool APheromoneBroadcasterBuilding::GetGatheringEnabled() const {
    return false;
}

bool APheromoneBroadcasterBuilding::GetBuildingEnabled() const {
    return false;
}

bool APheromoneBroadcasterBuilding::CanStart() const {
    return false;
}

void APheromoneBroadcasterBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APheromoneBroadcasterBuilding, PowerReservoir);
}

APheromoneBroadcasterBuilding::APheromoneBroadcasterBuilding() {
    this->InfluenceRange = 0.00f;
    this->PheromoneCapacity = 0.00f;
    this->ConsumptionRate = 0.00f;
}

