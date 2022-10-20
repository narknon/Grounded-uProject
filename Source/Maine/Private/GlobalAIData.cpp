#include "GlobalAIData.h"

UGlobalAIData::UGlobalAIData() {
    this->StaticObstacleTargetLocationQuery = NULL;
    this->DefaultBlackboard = NULL;
    this->FootstepNoiseCooldown = 0.00f;
    this->NoiseExpirationTime = 0.00f;
    this->NearPartyDistance = 0.00f;
    this->SenseThreatDecayTime = 0.00f;
    this->CombatThreatDecayTime = 0.00f;
    this->TargetAggressionDecayTime = 0.00f;
    this->ThreatDecayPerSecond = 0.00f;
    this->MaxTokens = 0.00f;
    this->MaxBuildingTokens = 0.00f;
    this->BuildingTokenCooldownModifier = 0.00f;
}

