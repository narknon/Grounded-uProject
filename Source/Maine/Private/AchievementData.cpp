#include "AchievementData.h"

FAchievementData::FAchievementData() {
    this->PlayerStat = NULL;
    this->bTotalPartyPlayerStat = false;
    /*this->AchievementStat = EAchievementStat::;*/
    /*this->ComparisonOperator = EComparisonOperator::;*/
    this->ConditionalValue = 0.00f;
    this->bHostMustBePresentAtValueChange = false;
    this->bClientMustBePresentAtValueChange = false;
    this->bCanUnlockInCreativeMode = false;
}

