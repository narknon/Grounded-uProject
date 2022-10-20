#include "AchievementData.h"

FAchievementData::FAchievementData() {
    this->PlayerStat = NULL;
    this->bTotalPartyPlayerStat = false;
    this->AchievementStat = (EAchievementStat)140698270272880;
    this->ComparisonOperator = (EComparisonOperator)140698270272880;
    this->ConditionalValue = 0.00f;
    this->bHostMustBePresentAtValueChange = false;
    this->bClientMustBePresentAtValueChange = false;
    this->bCanUnlockInCreativeMode = false;
}

