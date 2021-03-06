#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAppDepotVersionsDelegateDelegate.h"
#include "GetAppDepotVersionsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppDepotVersions.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAppDepotVersionsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetAppDepotVersionsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppDepotVersions();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

