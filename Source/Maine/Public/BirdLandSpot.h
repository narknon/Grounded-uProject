#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BirdSplineItemSpawn.h"
#include "EBirdSpotType.h"
#include "BirdLandSpot.generated.h"

class UObsidianIDComponent;
class USplineComponent;

UCLASS(Blueprintable)
class MAINE_API ABirdLandSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBirdSplineItemSpawn> ArrivingItemSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBirdSplineItemSpawn> DepartingItemSpawns;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBirdSpotType SpotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* EnterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ExitSpline;
    
public:
    ABirdLandSpot();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBirdSpotType GetSpotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetExitSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetEnterSpline() const;
    
};

