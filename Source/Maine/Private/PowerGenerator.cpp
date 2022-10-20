#include "PowerGenerator.h"
#include "Net/UnrealNetwork.h"

void APowerGenerator::TickUpdatePower(float DeltaTime) {
}

void APowerGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerGenerator, PowerReservoir);
}

APowerGenerator::APowerGenerator() {
    this->MaxPowerCapacity = 0.00f;
    this->HoursPerTick = 0.00f;
}

