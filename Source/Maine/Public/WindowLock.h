#pragma once
#include "CoreMinimal.h"
#include "WindowLock.generated.h"

class UWindowWidget;
class AActor;

USTRUCT(BlueprintType)
struct FWindowLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWindowWidget> Window;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Locker;
    
    MAINE_API FWindowLock();
};

