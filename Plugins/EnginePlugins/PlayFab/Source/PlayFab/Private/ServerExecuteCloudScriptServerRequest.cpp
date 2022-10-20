#include "ServerExecuteCloudScriptServerRequest.h"

FServerExecuteCloudScriptServerRequest::FServerExecuteCloudScriptServerRequest() {
    this->CustomTags = NULL;
    this->FunctionParameter = NULL;
    this->GeneratePlayStreamEvent = false;
    this->RevisionSelection = (ECloudScriptRevisionOption)140698270272880;
    this->SpecificRevision = 0.00f;
}

