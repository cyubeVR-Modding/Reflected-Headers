#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "DownloadLeaderboardEntriesForUsersDelegateDelegate.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksRequestCoreDownloadLeaderboardEntriesForUsers.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadLeaderboardEntriesForUsers();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};
