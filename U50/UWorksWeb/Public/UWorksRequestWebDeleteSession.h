#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "DeleteSessionMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebDeleteSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

