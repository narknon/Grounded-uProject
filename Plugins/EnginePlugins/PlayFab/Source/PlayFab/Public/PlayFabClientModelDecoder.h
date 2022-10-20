#pragma once
#include "CoreMinimal.h"
#include "ClientStartGameResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClientRegisterForIOSPushNotificationResult.h"
#include "ClientConsumePS5EntitlementsResult.h"
#include "ClientUpdateUserTitleDisplayNameResult.h"
#include "ClientUnlinkFacebookInstantGamesIdResult.h"
#include "ClientWriteEventResponse.h"
#include "ClientValidateWindowsReceiptResult.h"
#include "ClientValidateIOSReceiptResult.h"
#include "ClientConsumePSNEntitlementsResult.h"
#include "ClientValidateGooglePlayPurchaseResult.h"
#include "ClientValidateAmazonReceiptResult.h"
#include "ClientUpdateUserDataResult.h"
#include "ClientLinkXboxAccountResult.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ClientUpdateSharedGroupDataResult.h"
#include "ClientUpdatePlayerStatisticsResult.h"
#include "ClientGetPlayerCombinedInfoResult.h"
#include "ClientPayForPurchaseResult.h"
#include "ClientUpdateCharacterStatisticsResult.h"
#include "ClientOpenTradeResponse.h"
#include "ClientUpdateCharacterDataResult.h"
#include "ClientUnlockContainerItemResult.h"
#include "ClientUnlinkXboxAccountResult.h"
#include "ClientLinkCustomIDResult.h"
#include "ClientUnlinkWindowsHelloAccountResponse.h"
#include "ClientUnlinkTwitchAccountResult.h"
#include "ClientUnlinkSteamAccountResult.h"
#include "ClientLinkGameCenterAccountResult.h"
#include "ClientUnlinkPSNAccountResult.h"
#include "ClientUnlinkNintendoSwitchDeviceIdResult.h"
#include "ClientRemoveGenericIDResult.h"
#include "ClientAddGenericIDResult.h"
#include "ClientUnlinkKongregateAccountResult.h"
#include "ClientLinkWindowsHelloAccountResponse.h"
#include "ClientRemoveFriendResult.h"
#include "ClientUnlinkIOSDeviceIDResult.h"
#include "ClientRemoveContactEmailResult.h"
#include "ClientUnlinkGoogleAccountResult.h"
#include "ClientUnlinkGameCenterAccountResult.h"
#include "ClientUnlinkFacebookAccountResult.h"
#include "ClientLinkNintendoSwitchDeviceIdResult.h"
#include "ClientUnlinkCustomIDResult.h"
#include "ClientLinkKongregateAccountResult.h"
#include "ClientListUsersCharactersResult.h"
#include "ClientPurchaseItemResult.h"
#include "ClientGetStoreItemsResult.h"
#include "ClientUnlinkAndroidDeviceIDResult.h"
#include "ClientStartPurchaseResult.h"
#include "ClientSetPlayerSecretResult.h"
#include "ClientLinkFacebookAccountResult.h"
#include "ClientSetFriendTagsResult.h"
#include "ClientSendAccountRecoveryEmailResult.h"
#include "ClientRewardAdActivityResult.h"
#include "ClientMatchmakeResult.h"
#include "ClientLinkGoogleAccountResult.h"
#include "ClientRestoreIOSPurchasesResult.h"
#include "ClientReportPlayerClientResult.h"
#include "ClientModifyUserVirtualCurrencyResult.h"
#include "ClientReportAdActivityResult.h"
#include "ClientLoginResult.h"
#include "ClientRemoveSharedGroupMembersResult.h"
#include "ClientGetTitlePublicKeyResult.h"
#include "ClientRegisterPlayFabUserResult.h"
#include "ClientRedeemCouponResult.h"
#include "ClientLinkTwitchAccountResult.h"
#include "ClientLinkSteamAccountResult.h"
#include "ClientLinkPSNAccountResult.h"
#include "ClientLinkIOSDeviceIDResult.h"
#include "ClientLinkFacebookInstantGamesIdResult.h"
#include "ClientLinkAndroidDeviceIDResult.h"
#include "ClientGrantCharacterToUserResult.h"
#include "ClientGetWindowsHelloChallengeResponse.h"
#include "ClientGetUserInventoryResult.h"
#include "ClientGetUserDataResult.h"
#include "ClientGetTradeStatusResponse.h"
#include "ClientGetTitleNewsResult.h"
#include "ClientGetTitleDataResult.h"
#include "ClientGetTimeResult.h"
#include "ClientGetSharedGroupDataResult.h"
#include "ClientGetPurchaseResult.h"
#include "ClientGetPublisherDataResult.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ClientGetPlayFabIDsFromTwitchIDsResult.h"
#include "ClientConsumeXboxEntitlementsResult.h"
#include "ClientGetPlayFabIDsFromSteamIDsResult.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ClientGetPlayFabIDsFromKongregateIDsResult.h"
#include "ClientGetPlayFabIDsFromGoogleIDsResult.h"
#include "ClientGetPlayFabIDsFromGenericIDsResult.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsResult.h"
#include "ClientConsumeItemResult.h"
#include "ClientGetPlayFabIDsFromFacebookIDsResult.h"
#include "ClientGetPlayerTradesResponse.h"
#include "ClientGetPlayerTagsResult.h"
#include "ClientGetPlayerStatisticVersionsResult.h"
#include "ClientGetPlayerStatisticsResult.h"
#include "ClientGetPlayerSegmentsResult.h"
#include "ClientGetPlayerProfileResult.h"
#include "ClientAndroidDevicePushNotificationRegistrationResult.h"
#include "ClientGetPhotonAuthenticationTokenResult.h"
#include "ClientGetPaymentTokenResult.h"
#include "ClientGetLeaderboardResult.h"
#include "ClientGetLeaderboardForUsersCharactersResult.h"
#include "ClientGetLeaderboardAroundPlayerResult.h"
#include "ClientGetLeaderboardAroundCharacterResult.h"
#include "ClientGetFriendsListResult.h"
#include "ClientGetFriendLeaderboardAroundPlayerResult.h"
#include "ClientGetContentDownloadUrlResult.h"
#include "ClientGetCharacterStatisticsResult.h"
#include "ClientGetCharacterLeaderboardResult.h"
#include "ClientGetCharacterInventoryResult.h"
#include "ClientGetCharacterDataResult.h"
#include "ClientCancelTradeResponse.h"
#include "ClientGetCatalogItemsResult.h"
#include "ClientGetAdPlacementsResult.h"
#include "ClientGetAccountInfoResult.h"
#include "ClientGameServerRegionsResult.h"
#include "ClientExecuteCloudScriptResult.h"
#include "ClientEmptyResult.h"
#include "ClientEmptyResponse.h"
#include "ClientCurrentGamesResult.h"
#include "ClientCreateSharedGroupResult.h"
#include "ClientConsumeMicrosoftStoreEntitlementsResponse.h"
#include "ClientConfirmPurchaseResult.h"
#include "ClientAttributeInstallResult.h"
#include "ClientAddUsernamePasswordResult.h"
#include "ClientAddSharedGroupMembersResult.h"
#include "ClientAddOrUpdateContactEmailResult.h"
#include "ClientAddFriendResult.h"
#include "ClientAcceptTradeResponse.h"
#include "PlayFabClientModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabClientModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FClientWriteEventResponse decodeWriteEventResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateWindowsReceiptResult decodeValidateWindowsReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateIOSReceiptResult decodeValidateIOSReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateGooglePlayPurchaseResult decodeValidateGooglePlayPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateAmazonReceiptResult decodeValidateAmazonReceiptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkWindowsHelloAccountResponse decodeUnlinkWindowsHelloAccountResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkTwitchAccountResult decodeUnlinkTwitchAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkSteamAccountResult decodeUnlinkSteamAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkNintendoSwitchDeviceIdResult decodeUnlinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkKongregateAccountResult decodeUnlinkKongregateAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkIOSDeviceIDResult decodeUnlinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGoogleAccountResult decodeUnlinkGoogleAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGameCenterAccountResult decodeUnlinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookInstantGamesIdResult decodeUnlinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookAccountResult decodeUnlinkFacebookAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkCustomIDResult decodeUnlinkCustomIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkAndroidDeviceIDResult decodeUnlinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientStartPurchaseResult decodeStartPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientStartGameResult decodeStartGameResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetFriendTagsResult decodeSetFriendTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRewardAdActivityResult decodeRewardAdActivityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRestoreIOSPurchasesResult decodeRestoreIOSPurchasesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportPlayerClientResult decodeReportPlayerClientResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportAdActivityResult decodeReportAdActivityResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveGenericIDResult decodeRemoveGenericIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveFriendResult decodeRemoveFriendResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveContactEmailResult decodeRemoveContactEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterPlayFabUserResult decodeRegisterPlayFabUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterForIOSPushNotificationResult decodeRegisterForIOSPushNotificationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPurchaseItemResult decodePurchaseItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPayForPurchaseResult decodePayForPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientOpenTradeResponse decodeOpenTradeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientMatchmakeResult decodeMatchmakeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLoginResult decodeLoginResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkXboxAccountResult decodeLinkXboxAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkWindowsHelloAccountResponse decodeLinkWindowsHelloAccountResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkTwitchAccountResult decodeLinkTwitchAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkSteamAccountResult decodeLinkSteamAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkPSNAccountResult decodeLinkPSNAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkNintendoSwitchDeviceIdResult decodeLinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkKongregateAccountResult decodeLinkKongregateAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkIOSDeviceIDResult decodeLinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGoogleAccountResult decodeLinkGoogleAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGameCenterAccountResult decodeLinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookInstantGamesIdResult decodeLinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookAccountResult decodeLinkFacebookAccountResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkCustomIDResult decodeLinkCustomIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkAndroidDeviceIDResult decodeLinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetWindowsHelloChallengeResponse decodeGetWindowsHelloChallengeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTradeStatusResponse decodeGetTradeStatusResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitlePublicKeyResult decodeGetTitlePublicKeyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTimeResult decodeGetTimeResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPurchaseResult decodeGetPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromTwitchIDsResult decodeGetPlayFabIDsFromTwitchIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromKongregateIDsResult decodeGetPlayFabIDsFromKongregateIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGoogleIDsResult decodeGetPlayFabIDsFromGoogleIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGameCenterIDsResult decodeGetPlayFabIDsFromGameCenterIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTradesResponse decodeGetPlayerTradesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPhotonAuthenticationTokenResult decodeGetPhotonAuthenticationTokenResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPaymentTokenResult decodeGetPaymentTokenResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundPlayerResult decodeGetLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendLeaderboardAroundPlayerResult decodeGetFriendLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAdPlacementsResult decodeGetAdPlacementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAccountInfoResult decodeGetAccountInfoResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGameServerRegionsResult decodeGameServerRegionsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCurrentGamesResult decodeCurrentGamesResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeXboxEntitlementsResult decodeConsumeXboxEntitlementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumePSNEntitlementsResult decodeConsumePSNEntitlementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumePS5EntitlementsResult decodeConsumePS5EntitlementsResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeMicrosoftStoreEntitlementsResponse decodeConsumeMicrosoftStoreEntitlementsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConfirmPurchaseResult decodeConfirmPurchaseResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCancelTradeResponse decodeCancelTradeResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAttributeInstallResult decodeAttributeInstallResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAndroidDevicePushNotificationRegistrationResult decodeAndroidDevicePushNotificationRegistrationResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddUsernamePasswordResult decodeAddUsernamePasswordResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddOrUpdateContactEmailResult decodeAddOrUpdateContactEmailResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddGenericIDResult decodeAddGenericIDResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddFriendResult decodeAddFriendResultResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAcceptTradeResponse decodeAcceptTradeResponseResponse(UPlayFabJsonObject* response);
    
};

