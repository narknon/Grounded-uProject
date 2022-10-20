#include "HeatHazardComponent.h"
#include "Net/UnrealNetwork.h"

class AHeatHazardVolume;
class AActor;

bool UHeatHazardComponent::SetHazardStateActive(EHeatHazardCondition Condition, bool Active) {
    return false;
}

void UHeatHazardComponent::SetCurrentSizzle(float NewSizzle) {
}

void UHeatHazardComponent::SetCurrentHeatHazardVolume(AHeatHazardVolume* HazardVolume) {
}

void UHeatHazardComponent::OnRevive() {
}

void UHeatHazardComponent::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UHeatHazardComponent::OnHeatVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UHeatHazardComponent::OnHeatVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UHeatHazardComponent::OnHealthStateChanged(EHealthState NewHealthState) {
}

void UHeatHazardComponent::OnGameModeChanged() {
}

float UHeatHazardComponent::GetSummedEmitterValues() const {
    return 0.0f;
}

float UHeatHazardComponent::GetStrongestEmitterValue() const {
    return 0.0f;
}

FHeatEmitterTraceResult UHeatHazardComponent::GetStrongestEmitter() const {
    return FHeatEmitterTraceResult{};
}

float UHeatHazardComponent::GetNearestEmitterValue() const {
    return 0.0f;
}

TArray<FHeatEmitterTraceResult> UHeatHazardComponent::GetNearbyHeatEmitters() const {
    return TArray<FHeatEmitterTraceResult>();
}

float UHeatHazardComponent::GetHazardStateDuration(EHeatHazardCondition Condition) const {
    return 0.0f;
}

bool UHeatHazardComponent::GetHazardStateActive(EHeatHazardCondition Condition) const {
    return false;
}

float UHeatHazardComponent::GetCurrentSizzleRatio() const {
    return 0.0f;
}

float UHeatHazardComponent::GetCurrentSizzle() const {
    return 0.0f;
}

void UHeatHazardComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeatHazardComponent, CurrentSizzle);
}

UHeatHazardComponent::UHeatHazardComponent() {
    this->OwnerSizzles = true;
    this->SizzleRateMultiplier = 0.00f;
    this->MaxSizzle = 0.00f;
    this->HeatHazardExitDecayRate = 0.00f;
    this->ExitDecayOnAdditiveSizzleDelayTime = 0.00f;
    this->TakesSizzleDamage = false;
    this->SizzlingDamageAmount = 0.00f;
    this->SizzlingDamageTickRate = 0.00f;
    this->SizzlePercentOnRevive = 0.00f;
    this->SizzlePercentOnReviveThreshold = 0.00f;
    this->TestShadows = true;
    this->ShadowSweepRadius = 0.00f;
    this->ShadowDistanceMultiplier = 0.00f;
    this->TestSurface = true;
    this->CurrentSizzle = 0.00f;
    this->PostProcessMaterial = NULL;
    this->LastTouchedPhysicalMaterial = SurfaceType_Default;
    this->SunLight = NULL;
    this->CurrentHazardVolume = NULL;
    this->PostProcessMaterialInstance = NULL;
}

