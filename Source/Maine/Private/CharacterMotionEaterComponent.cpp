#include "CharacterMotionEaterComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ASurvivalCharacter;

void UCharacterMotionEaterComponent::OnRep_AttachedCharacters(const TArray<ASurvivalCharacter*>& PreviousCharacters) {
}

void UCharacterMotionEaterComponent::HandleAttachedCharacterDestroyed(AActor* Sender) {
}

void UCharacterMotionEaterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterMotionEaterComponent, AttachedCharacters);
}

UCharacterMotionEaterComponent::UCharacterMotionEaterComponent() {
    this->BlockX = false;
    this->BlockY = false;
    this->MaxSpeed = 0.00f;
}

