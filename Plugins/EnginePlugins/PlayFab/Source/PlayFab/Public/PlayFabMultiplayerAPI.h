#pragma once
#include "CoreMinimal.h"
#include "MultiplayerCreateRemoteUserResponse.h"
#include "MultiplayerListTitleMultiplayerServersQuotaChangesResponse.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "MultiplayerUntagContainerImageRequest.h"
#include "MultiplayerCreateServerBackfillTicketResult.h"
#include "MultiplayerRequestMultiplayerServerResponse.h"
#include "MultiplayerEmptyResponse.h"
#include "MultiplayerUploadCertificateRequest.h"
#include "MultiplayerBuildAliasDetailsResponse.h"
#include "MultiplayerUpdateBuildAliasRequest.h"
#include "MultiplayerRolloverContainerRegistryCredentialsResponse.h"
#include "MultiplayerShutdownMultiplayerServerRequest.h"
#include "MultiplayerListVirtualMachineSummariesResponse.h"
#include "MultiplayerListServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerGetMatchmakingTicketResult.h"
#include "MultiplayerListQosServersForTitleResponse.h"
#include "MultiplayerListPartyQosServersResponse.h"
#include "MultiplayerListMultiplayerServersResponse.h"
#include "MultiplayerListMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerListContainerImageTagsResponse.h"
#include "MultiplayerListContainerImagesResponse.h"
#include "MultiplayerListCertificateSummariesResponse.h"
#include "MultiplayerEnableMultiplayerServersForTitleResponse.h"
#include "MultiplayerListBuildSummariesResponse.h"
#include "MultiplayerListBuildAliasesForTitleResponse.h"
#include "MultiplayerListAssetSummariesResponse.h"
#include "MultiplayerJoinMatchmakingTicketResult.h"
#include "MultiplayerGetTitleMultiplayerServersQuotasResponse.h"
#include "MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h"
#include "MultiplayerGetServerBackfillTicketResult.h"
#include "MultiplayerGetRemoteLoginEndpointResponse.h"
#include "MultiplayerGetQueueStatisticsResult.h"
#include "MultiplayerCancelAllMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerGetMultiplayerServerLogsResponse.h"
#include "MultiplayerGetMultiplayerServerDetailsResponse.h"
#include "MultiplayerListTitleMultiplayerServersQuotaChangesRequest.h"
#include "MultiplayerGetMatchResult.h"
#include "MultiplayerGetContainerRegistryCredentialsResponse.h"
#include "MultiplayerGetBuildResponse.h"
#include "MultiplayerCreateBuildWithManagedContainerResponse.h"
#include "MultiplayerGetAssetUploadUrlResponse.h"
#include "MultiplayerUpdateBuildRegionsRequest.h"
#include "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerCreateMatchmakingTicketResult.h"
#include "MultiplayerCreateBuildWithProcessBasedServerResponse.h"
#include "MultiplayerCreateBuildWithCustomContainerResponse.h"
#include "MultiplayerDeleteAssetRequest.h"
#include "MultiplayerCancelServerBackfillTicketResult.h"
#include "MultiplayerCancelMatchmakingTicketResult.h"
#include "MultiplayerCancelAllServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerCreateMatchmakingTicketRequest.h"
#include "PlayFabError.h"
#include "OnPlayFabMultiplayerRequestCompletedDelegate.h"
#include "MultiplayerUpdateBuildRegionRequest.h"
#include "MultiplayerUpdateBuildNameRequest.h"
#include "MultiplayerRolloverContainerRegistryCredentialsRequest.h"
#include "MultiplayerRequestMultiplayerServerRequest.h"
#include "MultiplayerListVirtualMachineSummariesRequest.h"
#include "MultiplayerListServerBackfillTicketsForPlayerRequest.h"
#include "MultiplayerListQosServersForTitleRequest.h"
#include "MultiplayerListPartyQosServersRequest.h"
#include "MultiplayerListMultiplayerServersRequest.h"
#include "MultiplayerListMatchmakingTicketsForPlayerRequest.h"
#include "MultiplayerListContainerImageTagsRequest.h"
#include "MultiplayerListContainerImagesRequest.h"
#include "MultiplayerListCertificateSummariesRequest.h"
#include "MultiplayerListBuildSummariesRequest.h"
#include "MultiplayerMultiplayerEmptyRequest.h"
#include "MultiplayerListAssetSummariesRequest.h"
#include "MultiplayerJoinMatchmakingTicketRequest.h"
#include "PlayFabBaseModel.h"
#include "MultiplayerGetTitleMultiplayerServersQuotasRequest.h"
#include "MultiplayerGetRemoteLoginEndpointRequest.h"
#include "MultiplayerGetTitleMultiplayerServersQuotaChangeRequest.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest.h"
#include "MultiplayerGetServerBackfillTicketRequest.h"
#include "MultiplayerGetQueueStatisticsRequest.h"
#include "MultiplayerGetMultiplayerSessionLogsBySessionIdRequest.h"
#include "MultiplayerGetMultiplayerServerLogsRequest.h"
#include "MultiplayerGetMultiplayerServerDetailsRequest.h"
#include "MultiplayerGetMatchmakingTicketRequest.h"
#include "MultiplayerGetMatchRequest.h"
#include "MultiplayerGetContainerRegistryCredentialsRequest.h"
#include "MultiplayerGetBuildAliasRequest.h"
#include "MultiplayerCreateBuildWithManagedContainerRequest.h"
#include "MultiplayerGetBuildRequest.h"
#include "MultiplayerGetAssetUploadUrlRequest.h"
#include "MultiplayerEnableMultiplayerServersForTitleRequest.h"
#include "MultiplayerDeleteRemoteUserRequest.h"
#include "MultiplayerDeleteContainerImageRequest.h"
#include "MultiplayerDeleteCertificateRequest.h"
#include "MultiplayerDeleteBuildRegionRequest.h"
#include "MultiplayerDeleteBuildAliasRequest.h"
#include "MultiplayerDeleteBuildRequest.h"
#include "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h"
#include "MultiplayerCreateServerMatchmakingTicketRequest.h"
#include "MultiplayerCreateServerBackfillTicketRequest.h"
#include "MultiplayerCreateRemoteUserRequest.h"
#include "MultiplayerCreateBuildWithProcessBasedServerRequest.h"
#include "MultiplayerCreateBuildWithCustomContainerRequest.h"
#include "MultiplayerCreateBuildAliasRequest.h"
#include "MultiplayerCancelServerBackfillTicketRequest.h"
#include "MultiplayerCancelMatchmakingTicketRequest.h"
#include "MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h"
#include "MultiplayerCancelAllMatchmakingTicketsForPlayerRequest.h"
#include "PlayFabMultiplayerAPI.generated.h"

class UObject;
class UPlayFabJsonObject;
class UPlayFabMultiplayerAPI;
class UPlayFabAuthenticationContext;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUploadCertificate, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBuildRegions, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBuildRegion, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBuildName, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBuildAlias, FMultiplayerBuildAliasDetailsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUntagContainerImage, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessShutdownMultiplayerServer, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRolloverContainerRegistryCredentials, FMultiplayerRolloverContainerRegistryCredentialsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRequestMultiplayerServer, FMultiplayerRequestMultiplayerServerResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListVirtualMachineSummaries, FMultiplayerListVirtualMachineSummariesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListTitleMultiplayerServersQuotaChanges, FMultiplayerListTitleMultiplayerServersQuotaChangesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListServerBackfillTicketsForPlayer, FMultiplayerListServerBackfillTicketsForPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListQosServersForTitle, FMultiplayerListQosServersForTitleResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListPartyQosServers, FMultiplayerListPartyQosServersResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListMultiplayerServers, FMultiplayerListMultiplayerServersResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListMatchmakingTicketsForPlayer, FMultiplayerListMatchmakingTicketsForPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListContainerImageTags, FMultiplayerListContainerImageTagsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListContainerImages, FMultiplayerListContainerImagesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListCertificateSummaries, FMultiplayerListCertificateSummariesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListBuildSummariesV2, FMultiplayerListBuildSummariesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListBuildAliases, FMultiplayerListBuildAliasesForTitleResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListAssetSummaries, FMultiplayerListAssetSummariesResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListArchivedMultiplayerServers, FMultiplayerListMultiplayerServersResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessJoinMatchmakingTicket, FMultiplayerJoinMatchmakingTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleMultiplayerServersQuotas, FMultiplayerGetTitleMultiplayerServersQuotasResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleMultiplayerServersQuotaChange, FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus, FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerBackfillTicket, FMultiplayerGetServerBackfillTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRemoteLoginEndpoint, FMultiplayerGetRemoteLoginEndpointResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetQueueStatistics, FMultiplayerGetQueueStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMultiplayerSessionLogsBySessionId, FMultiplayerGetMultiplayerServerLogsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMultiplayerServerLogs, FMultiplayerGetMultiplayerServerLogsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMultiplayerServerDetails, FMultiplayerGetMultiplayerServerDetailsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatchmakingTicket, FMultiplayerGetMatchmakingTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMatch, FMultiplayerGetMatchResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContainerRegistryCredentials, FMultiplayerGetContainerRegistryCredentialsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetBuildAlias, FMultiplayerBuildAliasDetailsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetBuild, FMultiplayerGetBuildResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAssetUploadUrl, FMultiplayerGetAssetUploadUrlResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessEnableMultiplayerServersForTitle, FMultiplayerEnableMultiplayerServersForTitleResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteRemoteUser, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteContainerImageRepository, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteCertificate, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteBuildRegion, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteBuildAlias, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteBuild, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteAsset, FMultiplayerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange, FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateServerMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateServerBackfillTicket, FMultiplayerCreateServerBackfillTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateRemoteUser, FMultiplayerCreateRemoteUserResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateMatchmakingTicket, FMultiplayerCreateMatchmakingTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateBuildWithProcessBasedServer, FMultiplayerCreateBuildWithProcessBasedServerResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateBuildWithManagedContainer, FMultiplayerCreateBuildWithManagedContainerResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateBuildWithCustomContainer, FMultiplayerCreateBuildWithCustomContainerResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateBuildAlias, FMultiplayerBuildAliasDetailsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCancelServerBackfillTicket, FMultiplayerCancelServerBackfillTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCancelMatchmakingTicket, FMultiplayerCancelMatchmakingTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer, FMultiplayerCancelAllServerBackfillTicketsForPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer, FMultiplayerCancelAllMatchmakingTicketsForPlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabMultiplayerRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabMultiplayerAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UploadCertificate(FMultiplayerUploadCertificateRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUploadCertificate onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UpdateBuildRegions(FMultiplayerUpdateBuildRegionsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUpdateBuildRegions onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UpdateBuildRegion(FMultiplayerUpdateBuildRegionRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUpdateBuildRegion onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UpdateBuildName(FMultiplayerUpdateBuildNameRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUpdateBuildName onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UpdateBuildAlias(FMultiplayerUpdateBuildAliasRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUpdateBuildAlias onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* UntagContainerImage(FMultiplayerUntagContainerImageRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessUntagContainerImage onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ShutdownMultiplayerServer(FMultiplayerShutdownMultiplayerServerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessShutdownMultiplayerServer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* RolloverContainerRegistryCredentials(FMultiplayerRolloverContainerRegistryCredentialsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessRolloverContainerRegistryCredentials onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* RequestMultiplayerServer(FMultiplayerRequestMultiplayerServerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessRequestMultiplayerServer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListVirtualMachineSummaries(FMultiplayerListVirtualMachineSummariesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListVirtualMachineSummaries onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListTitleMultiplayerServersQuotaChanges(FMultiplayerListTitleMultiplayerServersQuotaChangesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListTitleMultiplayerServersQuotaChanges onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListServerBackfillTicketsForPlayer(FMultiplayerListServerBackfillTicketsForPlayerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListServerBackfillTicketsForPlayer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListQosServersForTitle(FMultiplayerListQosServersForTitleRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListQosServersForTitle onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListPartyQosServers(FMultiplayerListPartyQosServersRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListPartyQosServers onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListMultiplayerServers(FMultiplayerListMultiplayerServersRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListMultiplayerServers onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListMatchmakingTicketsForPlayer(FMultiplayerListMatchmakingTicketsForPlayerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListMatchmakingTicketsForPlayer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListContainerImageTags(FMultiplayerListContainerImageTagsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListContainerImageTags onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListContainerImages(FMultiplayerListContainerImagesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListContainerImages onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListCertificateSummaries(FMultiplayerListCertificateSummariesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListCertificateSummaries onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListBuildSummariesV2(FMultiplayerListBuildSummariesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListBuildSummariesV2 onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListBuildAliases(FMultiplayerMultiplayerEmptyRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListBuildAliases onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListAssetSummaries(FMultiplayerListAssetSummariesRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListAssetSummaries onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* ListArchivedMultiplayerServers(FMultiplayerListMultiplayerServersRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessListArchivedMultiplayerServers onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* JoinMatchmakingTicket(FMultiplayerJoinMatchmakingTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessJoinMatchmakingTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUploadCertificate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBuildRegions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBuildRegion(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBuildName(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBuildAlias(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUntagContainerImage(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperShutdownMultiplayerServer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRolloverContainerRegistryCredentials(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRequestMultiplayerServer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListVirtualMachineSummaries(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListTitleMultiplayerServersQuotaChanges(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListServerBackfillTicketsForPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListQosServersForTitle(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListPartyQosServers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListMultiplayerServers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListMatchmakingTicketsForPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListContainerImageTags(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListContainerImages(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListCertificateSummaries(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListBuildSummariesV2(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListBuildAliases(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListAssetSummaries(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListArchivedMultiplayerServers(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperJoinMatchmakingTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleMultiplayerServersQuotas(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleMultiplayerServersQuotaChange(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleEnabledForMultiplayerServersStatus(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetServerBackfillTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRemoteLoginEndpoint(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetQueueStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMultiplayerSessionLogsBySessionId(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMultiplayerServerLogs(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMultiplayerServerDetails(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMatchmakingTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMatch(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetContainerRegistryCredentials(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetBuildAlias(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetBuild(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAssetUploadUrl(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperEnableMultiplayerServersForTitle(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteRemoteUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteContainerImageRepository(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteCertificate(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteBuildRegion(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteBuildAlias(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteBuild(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteAsset(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateTitleMultiplayerServersQuotaChange(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateServerMatchmakingTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateServerBackfillTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateRemoteUser(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateMatchmakingTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateBuildWithProcessBasedServer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateBuildWithManagedContainer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateBuildWithCustomContainer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateBuildAlias(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCancelServerBackfillTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCancelMatchmakingTicket(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCancelAllServerBackfillTicketsForPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCancelAllMatchmakingTicketsForPlayer(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotas(FMultiplayerGetTitleMultiplayerServersQuotasRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetTitleMultiplayerServersQuotas onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotaChange(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetTitleMultiplayerServersQuotaChange onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetTitleEnabledForMultiplayerServersStatus(FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetServerBackfillTicket(FMultiplayerGetServerBackfillTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetServerBackfillTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetRemoteLoginEndpoint(FMultiplayerGetRemoteLoginEndpointRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetRemoteLoginEndpoint onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetQueueStatistics(FMultiplayerGetQueueStatisticsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetQueueStatistics onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetMultiplayerSessionLogsBySessionId(FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetMultiplayerSessionLogsBySessionId onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetMultiplayerServerLogs(FMultiplayerGetMultiplayerServerLogsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetMultiplayerServerLogs onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetMultiplayerServerDetails(FMultiplayerGetMultiplayerServerDetailsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetMultiplayerServerDetails onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetMatchmakingTicket(FMultiplayerGetMatchmakingTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetMatchmakingTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetMatch(FMultiplayerGetMatchRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetMatch onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetContainerRegistryCredentials(FMultiplayerGetContainerRegistryCredentialsRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetContainerRegistryCredentials onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetBuildAlias(FMultiplayerGetBuildAliasRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetBuildAlias onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetBuild(FMultiplayerGetBuildRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetBuild onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* GetAssetUploadUrl(FMultiplayerGetAssetUploadUrlRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessGetAssetUploadUrl onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* EnableMultiplayerServersForTitle(FMultiplayerEnableMultiplayerServersForTitleRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessEnableMultiplayerServersForTitle onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteRemoteUser(FMultiplayerDeleteRemoteUserRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteRemoteUser onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteContainerImageRepository(FMultiplayerDeleteContainerImageRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteContainerImageRepository onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteCertificate(FMultiplayerDeleteCertificateRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteCertificate onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteBuildRegion(FMultiplayerDeleteBuildRegionRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteBuildRegion onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteBuildAlias(FMultiplayerDeleteBuildAliasRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteBuildAlias onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteBuild(FMultiplayerDeleteBuildRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteBuild onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* DeleteAsset(FMultiplayerDeleteAssetRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessDeleteAsset onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateTitleMultiplayerServersQuotaChange(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateTitleMultiplayerServersQuotaChange onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateServerMatchmakingTicket(FMultiplayerCreateServerMatchmakingTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateServerMatchmakingTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateServerBackfillTicket(FMultiplayerCreateServerBackfillTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateServerBackfillTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateRemoteUser(FMultiplayerCreateRemoteUserRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateRemoteUser onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateMatchmakingTicket(FMultiplayerCreateMatchmakingTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateMatchmakingTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateBuildWithProcessBasedServer(FMultiplayerCreateBuildWithProcessBasedServerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateBuildWithProcessBasedServer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateBuildWithManagedContainer(FMultiplayerCreateBuildWithManagedContainerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateBuildWithManagedContainer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateBuildWithCustomContainer(FMultiplayerCreateBuildWithCustomContainerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateBuildWithCustomContainer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CreateBuildAlias(FMultiplayerCreateBuildAliasRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCreateBuildAlias onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CancelServerBackfillTicket(FMultiplayerCancelServerBackfillTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCancelServerBackfillTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CancelMatchmakingTicket(FMultiplayerCancelMatchmakingTicketRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCancelMatchmakingTicket onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CancelAllServerBackfillTicketsForPlayer(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCancelAllServerBackfillTicketsForPlayer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabMultiplayerAPI* CancelAllMatchmakingTicketsForPlayer(FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest Request, UPlayFabMultiplayerAPI::FDelegateOnSuccessCancelAllMatchmakingTicketsForPlayer onSuccess, UPlayFabMultiplayerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

