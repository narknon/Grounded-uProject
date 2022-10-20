#include "TelemetryComponent.h"

void UTelemetryComponent::OnPlayerMove(const FVector& Location, const FString& MapName) {
}

UTelemetryComponent::UTelemetryComponent() {
    this->MinMoveTelemetry = 0.00f;
    this->bEnableTelemetryTick = true;
}

