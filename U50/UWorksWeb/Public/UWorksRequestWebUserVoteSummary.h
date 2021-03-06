#pragma once
#include "CoreMinimal.h"
#include "UserVoteSummaryDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UserVoteSummaryMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebUserVoteSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUserVoteSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUserVoteSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUserVoteSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

