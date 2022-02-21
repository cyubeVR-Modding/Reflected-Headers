#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetUserStatsForGameDelegateDelegate.h"
#include "SetUserStatsForGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebSetUserStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetUserStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetUserStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

