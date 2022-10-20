#include "MaineCharMovementComponent.h"

class AZiplineLine;
class AActor;
class UCharacterMotionEaterComponent;

void UMaineCharMovementComponent::Unperch(EDetachSplineReason Reason) {
}

bool UMaineCharMovementComponent::ToggleSprint() {
    return false;
}

bool UMaineCharMovementComponent::ToggleGlide() {
    return false;
}

bool UMaineCharMovementComponent::ToggleAutorun() {
    return false;
}

void UMaineCharMovementComponent::SetStandingInWater(bool bInWater) {
}

void UMaineCharMovementComponent::SetIsSitting(bool bSitting) {
}

void UMaineCharMovementComponent::SetAutorun(bool bState) {
}

bool UMaineCharMovementComponent::Perch(const FAttractionComponentKey& Target) {
    return false;
}

void UMaineCharMovementComponent::OnFoliageDamaged(AActor* Sender, float Damage, const FDamageEvent& DamageEvent, FDamageInfo DamageInfo) {
}

bool UMaineCharMovementComponent::IsZiplining() const {
    return false;
}

bool UMaineCharMovementComponent::IsUnderwater() const {
    return false;
}

bool UMaineCharMovementComponent::IsStandingInWater() const {
    return false;
}

bool UMaineCharMovementComponent::IsSprinting() const {
    return false;
}

bool UMaineCharMovementComponent::IsSitting() const {
    return false;
}

bool UMaineCharMovementComponent::IsPerched() {
    return false;
}

bool UMaineCharMovementComponent::IsGliding() const {
    return false;
}

bool UMaineCharMovementComponent::IsClimbing() const {
    return false;
}

bool UMaineCharMovementComponent::IsAutorunning() const {
    return false;
}

float UMaineCharMovementComponent::GetZiplineReattachTime() const {
    return 0.0f;
}

float UMaineCharMovementComponent::GetZiplinePosition() const {
    return 0.0f;
}

bool UMaineCharMovementComponent::GetZiplineDirectionDown() const {
    return false;
}

float UMaineCharMovementComponent::GetPreviousZiplineChangeTime() const {
    return 0.0f;
}

AZiplineLine* UMaineCharMovementComponent::GetPreviousZipline() const {
    return NULL;
}

UCharacterMotionEaterComponent* UMaineCharMovementComponent::GetMotionEater() const {
    return NULL;
}

float UMaineCharMovementComponent::GetMaxGroundSpeed() const {
    return 0.0f;
}

EGlidingStyle UMaineCharMovementComponent::GetGlidingStyle() const {
    return EGlidingStyle::None;
}

ECameraDisplayMode UMaineCharMovementComponent::GetCameraDisplayMode() const {
    return ECameraDisplayMode::None;
}

AZiplineLine* UMaineCharMovementComponent::GetAttachedZipline() const {
    return NULL;
}

void UMaineCharMovementComponent::DetachFromSpline(EDetachSplineReason Reason) {
}

bool UMaineCharMovementComponent::CanZipUp() const {
    return false;
}

UMaineCharMovementComponent::UMaineCharMovementComponent() {
    this->MaxSprintSpeed = 0.00f;
    this->MaxFlySprintSpeed = 0.00f;
    this->AnimMaxSpeedMultiplierRange = 0.00f;
    this->AnimAttackMaxSpeedMultiplierRange = 0.00f;
    this->BlockingSpeedModifier = 0.00f;
    this->SprintStaminaRate = 0.00f;
    this->GlideYawRate = 0.00f;
    this->GlideRollRateMultiplier = 0.00f;
    this->GlideBankRollMagnitude = 0.00f;
    this->GlideMinStartElevation = 0.00f;
    this->ZiplineIgnoreCollisionDistance = 0.00f;
    this->ZiplineMaxSpeedMultiplier = 0.00f;
    this->ZiplineReattachDelay = 0.00f;
    this->ZiplineExitVelocityMultiplier = 0.00f;
    this->ZiplineAscendAccel = 0.00f;
    this->ZiplineMaxAscendSpeed = 0.00f;
    this->MaxSwimSprintSpeed = 0.00f;
    this->ClimbingSprintSpeedMultiplier = 0.00f;
    this->bExitSplinesAtEnds = false;
    this->ClimbSplineRotationType = (EClimbSplineRotationType)140698270272880;
    this->bAnyDamageExitsSpline = true;
    this->bCanWallCrawl = false;
    this->MaxSpeedMultiplier_Nav = NULL;
    this->MaxSpeedMultiplier_Attack = NULL;
    this->MaxSpeedMultiplier_AbsoluteInv = NULL;
    this->CrouchingNoiseMultiplier = 0.00f;
    this->bUseMovementAudioLoops = false;
    this->bAudioLoopOnGroundOnly = true;
    this->WalkAudioLoop = NULL;
    this->SprintAudioLoop = NULL;
    this->MovementLoopFadeInTime = 0.00f;
    this->MovementLoopFadeOutTime = 0.00f;
    this->AdditionalMovementAudioLoop = NULL;
    this->AdditionalLoopFadeInTime = 0.00f;
    this->AdditionalLoopFadeOutTime = 0.00f;
    this->AdditionalLoopChance = 0.00f;
    this->AdditionalLoopMinDistance = 0.00f;
}

