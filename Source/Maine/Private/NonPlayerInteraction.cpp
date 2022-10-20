#include "NonPlayerInteraction.h"
#include "Components/SceneComponent.h"
#include "ObsidianIDComponent.h"
#include "Components/BillboardComponent.h"
#include "PersistenceComponent.h"
#include "ConditionalToggleComponent.h"

class ASurvivalCharacter;
class AActor;

void ANonPlayerInteraction::TriggerImmediateRepeat() {
}

void ANonPlayerInteraction::PlayInteractConversation(AActor* Interactor, AActor* Character) {
}

void ANonPlayerInteraction::PlayAttractRepeatConversation(AActor* Character) {
}

void ANonPlayerInteraction::PlayAttractConversation(AActor* Character) {
}

bool ANonPlayerInteraction::IsInteractConversationEnabled(AActor* Interactor, AActor* Character) const {
    return false;
}

void ANonPlayerInteraction::HandleConversationComplete(FGuid ConversationId, TEnumAsByte<EConversationNodeDisplayStyle> DisplayStyle) {
}

bool ANonPlayerInteraction::CharacterCanInteract_Implementation(ASurvivalCharacter* Character) const {
    return false;
}

ANonPlayerInteraction::ANonPlayerInteraction() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WaypointComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Waypoint"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ShowTalkIconConditionalToggle = CreateDefaultSubobject<UConditionalToggleComponent>(TEXT("ShowTalkIconConditionalToggle"));
    this->BarkConditionalToggle = CreateDefaultSubobject<UConditionalToggleComponent>(TEXT("BarkConditionalToggle"));
    this->bUnlimitedRange = false;
    this->EligibleRange = 0.00f;
    this->AttractStartNode = 0.00f;
    this->AttractRepeatStartNode = 0.00f;
    this->AttractRepeatInterval = 0.00f;
    this->InteractStartNode = 0.00f;
    this->bDisableInteractBeforeAttract = false;
}

