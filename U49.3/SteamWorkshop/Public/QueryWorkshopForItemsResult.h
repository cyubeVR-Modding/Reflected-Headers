#pragma once
#include "CoreMinimal.h"
#include "SteamResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCQueryHandle -FallbackName=SteamUGCQueryHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=UInt32 -FallbackName=UInt32
#include "SteamWorkshopItemDetails.h"
#include "QueryWorkshopForItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForItemsResult : public FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamUGCQueryHandle queryHandle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt32 numResultsReturned;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUInt32 numMatchingResults;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHasMorePages;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRetrievedDataWasCached;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSteamWorkshopItemDetails> items;
    
    STEAMWORKSHOP_API FQueryWorkshopForItemsResult();
};

