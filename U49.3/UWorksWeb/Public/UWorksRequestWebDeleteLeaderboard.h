#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeleteLeaderboardDelegateDelegate.h"
#include "DeleteLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestWebDeleteLeaderboard.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeleteLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDeleteLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

