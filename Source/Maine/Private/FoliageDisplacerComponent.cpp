#include "FoliageDisplacerComponent.h"

UFoliageDisplacerComponent::UFoliageDisplacerComponent() {
    this->Radius = 0.00f;
    this->RegisterRadius = 0.00f;
    this->VelocityCompensationMultiplier = 0.00f;
    this->MaxVelocityCompensation = 0.00f;
    this->SpeedAudioSmoothingSpeed = 0.00f;
    this->EnergyAudioSmoothingSpeed = 0.00f;
    this->SwapLevel = (EFoliageSwapLevel)140698270272880;
}

