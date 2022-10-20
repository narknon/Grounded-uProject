#include "ClientGetFriendLeaderboardAroundPlayerRequest.h"

FClientGetFriendLeaderboardAroundPlayerRequest::FClientGetFriendLeaderboardAroundPlayerRequest() {
    this->CustomTags = NULL;
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->MaxResultsCount = 0.00f;
    this->ProfileConstraints = NULL;
    this->UseSpecificVersion = false;
    this->Version = 0.00f;
}

