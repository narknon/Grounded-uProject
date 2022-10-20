#include "UpgradeCollectible.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AUpgradeCollectible::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AUpgradeCollectible::AUpgradeCollectible() {
    this->bPartyUpgrade = false;
    this->UpgradePoints = 0.00f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

