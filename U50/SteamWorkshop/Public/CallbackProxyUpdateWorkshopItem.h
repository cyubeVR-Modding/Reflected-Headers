#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnUpdateWorkshopItemStartedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamWorkshopUpdateDetails.h"
#include "SteamDelegateOnUpdateWorkshopItemDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxyUpdateWorkshopItem.generated.h"

class UCallbackProxyUpdateWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnUpdateComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyUpdateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyUpdateWorkshopItem* SteamWorkshop_UpdateItem(const FSteamUGCItemId& ItemId, const FSteamWorkshopUpdateDetails& updateDetails, const FSteamDelegateOnUpdateWorkshopItemStarted& onUpdateStarted);
    
};

