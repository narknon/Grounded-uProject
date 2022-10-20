#include "AITargettingComponent.h"

class AActor;

void UAITargettingComponent::ValidateTargets() {
}

void UAITargettingComponent::OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus) {
}

AActor* UAITargettingComponent::GetTargetActor() const {
    return NULL;
}

void UAITargettingComponent::CacheRandomOverrideTarget() {
}

void UAITargettingComponent::CacheCurrentTarget() {
}

UAITargettingComponent::UAITargettingComponent() {
    this->SuspiciousThreshold = 0.00f;
    this->DangerThreshold = 0.00f;
    this->TargetExpirationTime = 0.00f;
    this->ThreatDecayTime = 0.00f;
    this->DamageThreatModifier = 0.00f;
    this->HearingThreatModifier = 0.00f;
    this->TargetDistanceModifier = 0.00f;
    this->BuildingTargetType = EBuildingTargettingType::;
    this->TargetPriorityType = ETargetPriorityType::;
    this->bTargetsCanExpire = true;
    this->UseRandomTarget = false;
    this->RandomTargetModeSelectInterval = 0.00f;
    this->ProbabilitySelectedRandomModeTarget = 0.00f;
}

