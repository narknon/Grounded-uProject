#include "FluidVolume.h"

class AActor;
class APhotoPawn;
class UPrimitiveComponent;

void AFluidVolume::TickMaintainActorList(float DeltaTime) {
}

void AFluidVolume::TickCreateRipples(float DeltaTime) {
}

void AFluidVolume::SpawnSplashEffects(AActor* Actor, bool IsOverlapEvent) {
}


void AFluidVolume::SetTickEnabled(bool Enabled) {
}

void AFluidVolume::OnPhotoModeExit() {
}

void AFluidVolume::OnPhotoModeEntered(APhotoPawn* PhotoPawn) {
}

void AFluidVolume::OnColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFluidVolume::OnColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFluidVolume::OnCameraColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFluidVolume::OnCameraColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFluidVolume::NativeToggleDepthImpostorVisibility() {
}

bool AFluidVolume::NativeQualifyActor(AActor* ActorToCheck) {
    return false;
}

void AFluidVolume::NativeModifyRipple() {
}

void AFluidVolume::NativeMaintainActorList() {
}

bool AFluidVolume::NativeIsLocalPlayerInTickRange() const {
    return false;
}

void AFluidVolume::NativeInitDepthImpostor() {
}

void AFluidVolume::NativeDrawAtLocation(FNativeRippleEvent RippleEvent) {
}

void AFluidVolume::NativeCreateRippleEvents(bool bIsOverlapEvent) {
}

void AFluidVolume::NativeCreateOverlapRipple() {
}

bool AFluidVolume::IsCameraInVolume(bool XYOnly) const {
    return false;
}

bool AFluidVolume::IsActorNearWaterSurface(AActor* Actor) {
    return false;
}

void AFluidVolume::GetInitialOverlaps() {
}

AFluidVolume::AFluidVolume() {
    this->NativeWaterPlane = NULL;
    this->NativeDepthImpostor = NULL;
    this->NativePostProcessAnchor = NULL;
    this->NativePostProcessBox = NULL;
    this->NativePostProcessUnderWater = NULL;
    this->NativeCollider = NULL;
    this->NativeColliderCamera = NULL;
    this->NativeTickBoundsPadding = 0.00f;
    this->NativeSetFootstepsInShallowWater = true;
    this->NativeActivationRange = 0.00f;
    this->NativeOpacityFadeDistance = 0.00f;
    this->NativeEnableDepthImpostor = false;
    this->NativeDepthLimitOffsetScale = 0.00f;
    this->PebbleClass = NULL;
    this->NativeMaxRippleCount = 0.00f;
    this->NativeNumRipples = 0.00f;
    this->NativeFadeSpeed = 0.00f;
    this->NativeRippleSpeed = 0.00f;
    this->NativeRTGlobalData = NULL;
    this->NativeRippleAddMaterial = NULL;
    this->NativeOutputRT = NULL;
    this->RippleUVBoundary = 0.00f;
    this->NativeSplashVFX = NULL;
    this->NativeSplashSFX = NULL;
    this->NativeAllowTick = false;
    this->RippleAddMID = NULL;
    this->RippleRandomTickMin = 0.00f;
    this->RippleRandomTickMax = 0.00f;
    this->RTManager = NULL;
}

