#include "ClientPayForPurchaseResult.h"

FClientPayForPurchaseResult::FClientPayForPurchaseResult() {
    this->CreditApplied = 0.00f;
    this->PurchasePrice = 0.00f;
    this->Status = (ETransactionStatus)140698270272880;
    this->VCAmount = NULL;
    this->VirtualCurrency = NULL;
}

