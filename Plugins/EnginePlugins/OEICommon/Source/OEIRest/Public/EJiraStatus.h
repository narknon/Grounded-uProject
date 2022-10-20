#pragma once
#include "CoreMinimal.h"
#include "EJiraStatus.generated.h"

UENUM(BlueprintType)
enum class EJiraStatus : uint8 {
    NotStarted = 0x1,
    InProgress = 0x3,
    Reopened,
    Resolved,
    Closed_Waived,
    Complete = 0x2710,
    NeedsApproval,
    Open,
    WaiveRequested = 0x2714,
    ResolvedByDev,
    Closed,
    CannotReproduce,
    NeedsMoreInfo = 0x2719,
    UnableToTest = 0x2775,
    Cut,
    NeedsVerification = 0x27D9,
    FixFailed,
    Closed_NotABug,
    Blocked = 0x27DD,
    Acknowledged,
    Backlog = 0x283C,
    SelectedForDevelopment,
    New,
    AwaitingApproval,
    Approved,
    FirstPass = 0x28A2,
    NeedsReview = 0x28A5,
    Queued = 0x2904,
    NeedsExternalReview = 0x2906,
    QACheck = 0x2969,
    Design_Concept,
    Functional,
    Alpha,
    Final,
    IT = 0x2A96,
    Manager,
    AccountCleanup,
    NeedsReviewStrikeTeam,
    ADD = 0x2AFA,
    Blockout,
    Shelved = 0x2B61,
    ApprovedForCheckIn,
    FirstPassArt = 0x2BC2,
    AlphaArt,
    FirstPassGameplay,
    SecondPassGameplay,
    OnCalendar = 0x2C26,
    OfferRequested = 0x2D54,
    OfferApproved,
    Posted,
    OnTrack = 0x2DB6,
    AtRisk,
    ReadyForReview,
    Requested = 0x2E1A,
    HRReview,
    PhoneScreen,
    PhoneInterview,
    Test,
    In_PersonInterview,
    OfferExtended,
    Scheduled,
    Designed = 0x2EE2,
    Implemented,
    ReadyToShip,
    Verify = 0x2F46,
    Review = 0x300E,
    NeedsExternalFix = 0x3072,
    InDesign = 0x30D6,
    BasicImplementationDone,
    FinalImplementationDone,
    NotReady = 0x313A,
    DesignReviewed,
    DesignDone,
    BasicImplementationReviewed,
    FinalImplementationWithPlaceholders,
    FinalImplementationReviewed,
    AwaitingOutsourcer = 0x3266,
    ObsidianReviewing,
    ToDo,
    NeedsRenewal = 0x332E,
    Renewed,
    Cancelled,
    TaskCreated = 0x3392,
    UnderReview = 0x34BE,
    Rejected,
    ReadyForT2 = 0x3522,
    Archive,
    Paused = 0x3586,
    Behind,
    Tasked,
    Bugged,
    RegressionBlocked = 0x35EA,
    Done,
    Self_Review,
    PerformanceReview,
    GameDirectorsReview,
    Directors_OwnersReview,
    Live = 0x364E,
    DepartmentHeadReview = 0x36B2,
    InReview = 0x3716,
    HighPoly = 0x377A,
    LowPoly,
    InitialRigging,
    FinalPass,
    ToneMap,
    ExecutiveProducer = 0x37DE,
    VPOfDevelopment,
    StudioHead,
    CIO,
    QABlocked = 0x390B,
    QAInProgress = 0x390A,
    Unknown = 0xFFFF,
};

