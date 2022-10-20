#include "GlobalVariableConditional.h"

FGlobalVariableConditional::FGlobalVariableConditional() {
    this->Operator = EComparisonOperator::Equals;
    this->VariableValue = 0.00f;
    this->bDefaultReturnValue = false;
}

