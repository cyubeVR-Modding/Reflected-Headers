#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ReportAbuseMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebCommunity.generated.h"

class UUWorksRequestWebReportAbuse;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebCommunity();
    UFUNCTION(BlueprintCallable)
    static void ReportAbuseMinimal(const FString& Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, const FString& Description, const FString& GID, const FReportAbuseMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebReportAbuse* ReportAbuse();
    
};

