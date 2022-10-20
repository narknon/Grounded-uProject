#include "TransmitterComponent.h"
#include "Net/UnrealNetwork.h"

void UTransmitterComponent::SetTransmissionEnabled(bool bEnable) {
}

bool UTransmitterComponent::IsTransmissionEnabled() const {
    return false;
}

FGameplayTag UTransmitterComponent::GetTransmittorType() const {
    return FGameplayTag{};
}

void UTransmitterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTransmitterComponent, bTransmissionEnabled);
}

UTransmitterComponent::UTransmitterComponent() {
    this->SignalAudioCue = NULL;
    this->SignalAudioRange = 0.00f;
    this->SignalVolumeMax = 0.00f;
    this->SignalVolumeMin = 0.00f;
    this->SignalPitchMax = 0.00f;
    this->SignalPitchMin = 0.00f;
    this->SignalAudioComponent = NULL;
    this->bRegisterToTransmissionReceivers = true;
    this->bTransmissionEnabled = true;
    this->bSaveTransmissionState = false;
}

