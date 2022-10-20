#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBankNode.h"
#include "KillObjectiveNode.h"
#include "FlowChartBundle.h"
#include "QuestNode.h"
#include "EQuestType.h"
#include "QuestLink.h"
#include "ResultSuccessGlobalVariableNode.h"
#include "TalkObjectiveNode.h"
#include "EndStateNode.h"
#include "GlobalVariableObjectiveNode.h"
#include "GenericObjectiveNode.h"
#include "AcquireItemObjectiveNode.h"
#include "BranchCompleteNode.h"
#include "BranchCompleteObjectiveNode.h"
#include "QuestBranchNode.h"
#include "ScriptNode.h"
#include "GlobalQuestEventKillNode.h"
#include "GlobalQuestEventGlobalVariableNode.h"
#include "GlobalQuestEventFactionChangeNode.h"
#include "ResultSuccessNode.h"
#include "ResultFailedGlobalVariableNode.h"
#include "ResultFailedKillNode.h"
#include "ResultFailedAcquireItemNode.h"
#include "ResultFailedFactionChangeNode.h"
#include "ResultFailedObjectiveBankNode.h"
#include "ResultFailedBranchNode.h"
#include "GlobalQuestNode.h"
#include "QuestBundle.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestBundle : public FFlowChartBundle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestType QuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestLink> QuestLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectiveBankNode> ObjectiveBankNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkObjectiveNode> TalkObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableObjectiveNode> GlobalVariableObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericObjectiveNode> GenericObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKillObjectiveNode> KillObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAcquireItemObjectiveNode> AcquireItemObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBranchCompleteObjectiveNode> BranchCompleteObjectiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBranchCompleteNode> BranchCompleteNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestBranchNode> QuestBranchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndStateNode> EndStateNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptNode> ScriptNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalQuestEventGlobalVariableNode> GlobalQuestEventGlobalVariableNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalQuestEventKillNode> GlobalQuestEventKillNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalQuestEventFactionChangeNode> GlobalQuestEventFactionChangeNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultSuccessNode> ResultSuccessNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultSuccessGlobalVariableNode> ResultSuccessGlobalVariableNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedGlobalVariableNode> ResultFailedGlobalVariableNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedAcquireItemNode> ResultFailedAcquireItemNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedKillNode> ResultFailedKillNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedFactionChangeNode> ResultFailedFactionChangeNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedObjectiveBankNode> ResultFailedObjectiveBankNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultFailedBranchNode> ResultFailedBranchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestNode QuestNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalQuestNode GlobalQuestNode;
    
public:
    FQuestBundle();
};

