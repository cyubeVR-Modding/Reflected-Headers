#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAll.h"
#include "QueryWorkshopForItemsResult.h"
#include "QueryWorkshopForAllItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForAllItemsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSteamUGCQueryParameterAll queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForAllItemsResult();
};

