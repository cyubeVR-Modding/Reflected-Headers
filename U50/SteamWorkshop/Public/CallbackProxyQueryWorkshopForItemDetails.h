#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnQueryWorkshopForItemDetailsDelegate.h"
#include "SteamUGCQueryParameterDetails.h"
#include "CallbackProxyQueryWorkshopForItemDetails.generated.h"

class UCallbackProxyQueryWorkshopForItemDetails;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForItemDetails();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForItemDetails* SteamWorkshop_QueryForItemDetails(const FSteamUGCQueryParameterDetails& Parameter);
    
};

