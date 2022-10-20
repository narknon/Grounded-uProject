#include "DialogueNode.h"

FDialogueNode::FDialogueNode() {
    this->bNotSkippable = false;
    this->bIsQuestionNode = false;
    this->bHideSpeaker = false;
    this->PlayType = ENodePlayType::;
    this->Persistence = EPersistenceType::;
    this->NoPlayRandomWeight = 0.00f;
    this->DisplayType = ENodeDisplayType::;
}

