#include "QuadAudioSatelliteComponent.h"

UQuadAudioSatelliteComponent::UQuadAudioSatelliteComponent() {
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->SatelliteType = EQuadAudioSatelliteType::;
    this->CurrentAudioComponent = NULL;
}

