#include "AIDetectionComponent.h"

class AActor;

void UAIDetectionComponent::OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus) {
}

UAIDetectionComponent::UAIDetectionComponent() {
    this->IntensityThreshold = 0.00f;
    this->InvestigateTime = 0.00f;
}

