#include "ClientGetFriendLeaderboardRequest.h"

FClientGetFriendLeaderboardRequest::FClientGetFriendLeaderboardRequest() {
    this->CustomTags = NULL;
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->MaxResultsCount = 0.00f;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0.00f;
    this->UseSpecificVersion = false;
    this->Version = 0.00f;
}

