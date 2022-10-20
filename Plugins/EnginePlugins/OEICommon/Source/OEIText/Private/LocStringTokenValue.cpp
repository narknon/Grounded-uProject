#include "LocStringTokenValue.h"

FLocStringTokenValue::FLocStringTokenValue() {
    this->TokenType = EStringTokenValueType::Float;
    this->AsInteger = 0.00f;
    this->AsFloat = 0.00f;
}

