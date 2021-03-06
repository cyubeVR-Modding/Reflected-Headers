#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ReportAbuseMinimalDelegateDelegate.h"
#include "ReportAbuseDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebReportAbuse.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebReportAbuse : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReportAbuseDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReportAbuseMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebReportAbuse();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, const FString& Description, const FString& GID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

