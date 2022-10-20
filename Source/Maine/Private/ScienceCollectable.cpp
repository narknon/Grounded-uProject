#include "ScienceCollectable.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "ObsidianIDComponent.h"

class UPrimitiveComponent;
class AActor;

void AScienceCollectable::SetScienceAmount(int32 Amount) {
}

void AScienceCollectable::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AScienceCollectable::AScienceCollectable() {
    this->ScienceAmount = 0.00f;
    this->LiteData = NULL;
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

