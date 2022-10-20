#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataTable.h"
#include "TeamLODComponent.generated.h"

class UObject;
class AActor;
class UBaseLODActor;

UCLASS(Blueprintable)
class MAINE_API UTeamLODComponent : public UBaseLODComponent {
    GENERATED_BODY()
public:
    UTeamLODComponent();
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToObject(const UObject* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToLODActor(const UBaseLODActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetRelationshipToActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCurrentTeamRowHandle() const;
    
};

