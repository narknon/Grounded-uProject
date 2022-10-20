#include "WalkDial.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

class UCharacterMotionEaterComponent;
class ASurvivalCharacter;

void AWalkDial::OnMotionInput(UCharacterMotionEaterComponent* Sender, FVector2D Input) {
}

void AWalkDial::OnCharacterDetached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character) {
}

void AWalkDial::OnCharacterAttached(UCharacterMotionEaterComponent* Sender, ASurvivalCharacter* Character) {
}




void AWalkDial::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWalkDial, bIsBusy);
}

AWalkDial::AWalkDial() {
    this->Radius = 0.00f;
    this->MotionEater = NULL;
    this->DialRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DialMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DialMeshComponent"));
    this->bIsBusy = false;
}

