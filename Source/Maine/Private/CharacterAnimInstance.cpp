#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance() {
    this->IsChangingCameraDisplayMode = false;
    this->IsEnteringOrEnteredPhotoMode = false;
    this->IsShadowAnim = false;
    this->AimPitch = 0.00f;
    this->Speed = 0.00f;
    this->SplineDirection = 0.00f;
    this->Heading = 0.00f;
    this->IsMoving = false;
    this->IsInAir = false;
    this->IsFlying = false;
    this->IsSwimming = false;
    this->IsSitting = false;
    /*this->GlidingStyle = EGlidingStyle::;*/
    this->bIsZiplining = false;
    this->IsCrouching = false;
    this->IsSprinting = false;
    this->IsClimbingSpline = false;
    this->IsAttacking = false;
    this->IsBlocking = false;
    this->IsThrowing = false;
    this->IsInCombat = false;
    this->IsDead = false;
    this->IsIncapacitated = false;
    this->IsReviving = false;
    this->IsUnderwater = false;
    this->IsFirstPerson = false;
    this->HasWeapon = false;
    this->HasOffhand = false;
    this->IsHauling = false;
    this->IsTurning = false;
    this->IsEquipping = false;
    this->IsAuthorityOrLocallyControlled = false;
    /*this->ActivityMode = ECreatureActivityMode::;*/
    this->TurnDelta = 0.00f;
    this->TurnDeltaSmoothed = 0.00f;
    this->Stance = 0.00f;
    this->OffhandStance = 0.00f;
    this->LookAtDistance = 0.00f;
    this->bBigHeadMode = false;
    this->bIKEnabled = true;
    this->bStartDead = false;
    this->bHasFlipperTag = false;
    this->VitalValue = 0.00f;
}

