#include "DefensePointPingVolume.h"

class UPrimitiveComponent;
class AActor;

void ADefensePointPingVolume::OnDefensePointCreatureOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADefensePointPingVolume::OnDefensePointCreatureEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

ADefensePointPingVolume::ADefensePointPingVolume() {
    this->PingHeight = 0.00f;
    this->PingLifetime = 0.00f;
    this->PingCooldown = 0.00f;
    this->CanRetrigger = true;
    this->PingPreciseLocation = false;
    this->OneTimeOnly = false;
    /*this->HUDMarkerType = EHUDMarkerType::;*/
    this->HUDMarkerVariation = 0.00f;
}

