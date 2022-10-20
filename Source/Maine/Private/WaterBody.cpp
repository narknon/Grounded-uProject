#include "WaterBody.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/PostProcessComponent.h"

void AWaterBody::UpdateMeshVisibility() {
}


bool AWaterBody::IsPlayerAboveWater() const {
    return false;
}

float AWaterBody::GetWaterSurfaceWorldHeight() const {
    return 0.0f;
}

float AWaterBody::GetLocalPlayerDistanceToWater() const {
    return 0.0f;
}

AWaterBody::AWaterBody() {
    this->DepthImpostorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DepthImpostorMeshComponent"));
    this->ImpostorRelativeScale = 0.00f;
    this->StaticMeshToTile = NULL;
    this->PostProcessVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("PostProcessVolume"));
    this->PostProcessVolumeHeight = 0.00f;
    this->UnderwaterPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("UnderwaterPostProcess"));
    this->UnderwaterPostProcessMaterial = NULL;
    this->BaseCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BaseCollider"));
    this->BaseCollisionVolumeHeight = 0.00f;
    this->CameraCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraCollider"));
    this->CameraCollisionVolumeHeight = 0.00f;
}

