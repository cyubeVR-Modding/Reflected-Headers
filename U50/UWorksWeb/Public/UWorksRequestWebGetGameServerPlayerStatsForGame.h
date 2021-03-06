#pragma once
#include "CoreMinimal.h"
#include "GetGameServerPlayerStatsForGameMinimalDelegateDelegate.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksRequestWebGetGameServerPlayerStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGameServerPlayerStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

