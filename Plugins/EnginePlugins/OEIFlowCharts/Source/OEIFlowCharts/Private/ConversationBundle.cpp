#include "ConversationBundle.h"

FConversationBundle::FConversationBundle() {
    this->ConversationType = EConversationType::;
    this->bHasCheckpoints = false;
    this->ResumeNodeID = 0.00f;
}

