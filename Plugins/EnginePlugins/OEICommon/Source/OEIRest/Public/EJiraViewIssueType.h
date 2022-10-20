#pragma once
#include "CoreMinimal.h"
#include "EJiraViewIssueType.generated.h"

UENUM(BlueprintType)
enum class EJiraViewIssueType : uint8 {
    Task,
    Bug,
};

