#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "GetGlobalAchievementPercentagesForAppMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksRequestWebGetGlobalAchievementPercentagesForApp.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGlobalAchievementPercentagesForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

