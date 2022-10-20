#include "ClientGetLeaderboardRequest.h"

FClientGetLeaderboardRequest::FClientGetLeaderboardRequest() {
    this->CustomTags = NULL;
    this->MaxResultsCount = 0.00f;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0.00f;
    this->UseSpecificVersion = false;
    this->Version = 0.00f;
}

