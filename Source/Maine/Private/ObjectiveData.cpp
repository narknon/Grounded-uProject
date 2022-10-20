#include "ObjectiveData.h"

FObjectiveData::FObjectiveData() {
    this->StartsHidden = false;
    this->DisplaysObjectiveMarker = false;
    this->AutoSaveOnComplete = false;
    this->CanUncomplete = false;
    this->ObjectiveType = EQuestObjectiveType::;
    this->ObjectiveStartConversationDelay = 0.00f;
    this->ObjectiveCompleteConversationDelay = 0.00f;
    this->DisabledForPackageFlags = 0.00f;
}

