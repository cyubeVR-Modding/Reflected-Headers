#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
#include "GetQuantityMinimalDelegateDelegate.h"
#include "GetQuantityDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetQuantity.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetQuantity : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetQuantityDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetQuantityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetQuantity();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

