#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AIShoutEvent.h"
#include "AISense_Shout.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class MAINE_API UAISense_Shout : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAIShoutEvent> ShoutEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
    UAISense_Shout();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportShoutEvent(UObject* WorldContextObject, AActor* Shouter, AActor* Target, FName Tag);
    
};

