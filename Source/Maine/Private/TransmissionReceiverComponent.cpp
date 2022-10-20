#include "TransmissionReceiverComponent.h"

float UTransmissionReceiverComponent::GetClosestTransmitterStrength() {
    return 0.0f;
}

UTransmissionReceiverComponent::UTransmissionReceiverComponent() {
    this->ClosestInRangeTransmittor = NULL;
    this->ReceiverDistanceFullSignal = 0.00f;
}

