#include "CloudScriptExecuteFunctionResult.h"

FCloudScriptExecuteFunctionResult::FCloudScriptExecuteFunctionResult() {
    this->Error = NULL;
    this->ExecutionTimeMilliseconds = 0.00f;
    this->FunctionResult = NULL;
    this->FunctionResultTooLarge = false;
}

