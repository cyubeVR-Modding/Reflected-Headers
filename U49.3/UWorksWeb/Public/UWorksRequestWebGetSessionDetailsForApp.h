#pragma once
#include "CoreMinimal.h"
#include "GetSessionDetailsForAppDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetSessionDetailsForAppMinimalDelegateDelegate.h"
#include "UWorksSessions.h"
#include "UWorksRequestWebGetSessionDetailsForApp.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetSessionDetailsForAppDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetSessionDetailsForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSessionDetailsForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

