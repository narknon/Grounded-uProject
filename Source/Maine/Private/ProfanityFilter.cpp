#include "ProfanityFilter.h"

FText UProfanityFilter::CensorText(FText InText) const {
    return FText::GetEmpty();
}

FString UProfanityFilter::CensorString(const FString& inString) const {
    return TEXT("");
}

UProfanityFilter::UProfanityFilter() {
}

