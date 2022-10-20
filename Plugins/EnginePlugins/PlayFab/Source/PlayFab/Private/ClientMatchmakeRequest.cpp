#include "ClientMatchmakeRequest.h"

FClientMatchmakeRequest::FClientMatchmakeRequest() {
    this->CustomTags = NULL;
    this->Region = (ERegion)140698270272880;
    this->StartNewIfNoneFound = false;
    this->TagFilter = NULL;
}

