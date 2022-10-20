#include "FlySwimSurvivalCharacter.h"
#include "Net/UnrealNetwork.h"

void AFlySwimSurvivalCharacter::OnRep_BaseSeed() {
}

void AFlySwimSurvivalCharacter::InterpolateRotationTo(FRotator InTargetRotation, const float DeltaTime) {
}

void AFlySwimSurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlySwimSurvivalCharacter, BaseSeed);
}

AFlySwimSurvivalCharacter::AFlySwimSurvivalCharacter() {
    this->AcceptableDistanceToWaypoint = 0.00f;
    this->RotationInterpSlowDist = 0.00f;
    this->RollSpeed = 0.00f;
    this->RollStrength = 0.00f;
    this->MaxPitch = 0.00f;
    this->bWiggleEnabled = true;
    this->InMotionWiggleAmplitude = 0.00f;
    this->IdleWiggleAmplitude = 0.00f;
    this->PreferredElevation = 0.00f;
    this->bAllowStrafe = false;
    this->bAllowPathfinding = false;
    this->bPhysicsOnDeath = false;
    this->bIsInHoldInteraction = false;
    this->DerpFactor = 0.00f;
    this->TakeoffLaunchVelocity = 0.00f;
    this->bPseudoLargePawn = false;
    this->bDoRecoil = false;
    this->CurrentNavigationPath = NULL;
    this->bShowGoalLocation = true;
    this->BaseSeed = 0.00f;
}

