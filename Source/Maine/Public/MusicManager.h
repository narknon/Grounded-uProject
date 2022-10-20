#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MusicManager.generated.h"

class UMusicTrackData;
class UMusicSettings;
class UAudioComponent;

UCLASS(Blueprintable)
class MAINE_API UMusicManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CurrentTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CurrentOverlayTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* ScriptedTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* DefaultMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* LevelMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* OverrideMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OverlayMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoviePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForcePlayScriptedTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClearScriptedTrackOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseStartTime;
    
public:
    UMusicManager();
    UFUNCTION(BlueprintCallable)
    void SetScriptedTrack(UMusicTrackData* TrackData, bool ForcePlayScriptedTrack, bool ClearOnEnd);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrackFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearScriptedTrack();
    
};

