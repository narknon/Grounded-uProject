#include "ResourceAnalyzer.h"
#include "Net/UnrealNetwork.h"

class UAnimMontage;

void AResourceAnalyzer::OnRep_PowerReservoir() {
}

void AResourceAnalyzer::MulticastPlayAnimMontage_Implementation(UAnimMontage* AnimMontage) {
}

bool AResourceAnalyzer::IsFullyCharged() const {
    return false;
}

bool AResourceAnalyzer::IsCharging() const {
    return false;
}

bool AResourceAnalyzer::HasCharges() const {
    return false;
}

float AResourceAnalyzer::GetNextChargeTime() const {
    return 0.0f;
}

int32 AResourceAnalyzer::GetChargeCount() const {
    return 0;
}

int32 AResourceAnalyzer::GetChargeCapacity() const {
    return 0;
}

void AResourceAnalyzer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceAnalyzer, PowerReservoir);
    DOREPLIFETIME(AResourceAnalyzer, LastUpdateTime);
}

AResourceAnalyzer::AResourceAnalyzer() {
    this->MaxPowerCapacity = 0.00f;
    this->InitialCharges = 0.00f;
    this->HoursPerCharge = 0.00f;
    this->LastUpdateTime = 0.00f;
    this->AnalyzeAnim = NULL;
    this->SkelMesh = NULL;
}

