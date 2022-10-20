#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProfanityFilter.generated.h"

UCLASS(Blueprintable)
class MAINE_API UProfanityFilter : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlacklistJson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MixedBlacklist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Blacklist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GreylistJson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MixedGreylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Greylist;
    
    UProfanityFilter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText CensorText(FText InText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CensorString(const FString& inString) const;
    
};

