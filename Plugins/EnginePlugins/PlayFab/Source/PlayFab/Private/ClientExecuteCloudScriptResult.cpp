#include "ClientExecuteCloudScriptResult.h"

FClientExecuteCloudScriptResult::FClientExecuteCloudScriptResult() {
    this->APIRequestsIssued = 0.00f;
    this->Error = NULL;
    this->ExecutionTimeSeconds = 0.00f;
    this->FunctionResult = NULL;
    this->FunctionResultTooLarge = false;
    this->HttpRequestsIssued = 0.00f;
    this->LogsTooLarge = false;
    this->MemoryConsumedBytes = 0.00f;
    this->ProcessorTimeSeconds = 0.00f;
    this->Revision = 0.00f;
}

