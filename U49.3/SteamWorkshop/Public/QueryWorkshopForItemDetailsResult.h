#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForItemsResult.h"
#include "SteamUGCQueryParameterDetails.h"
#include "QueryWorkshopForItemDetailsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSteamUGCQueryParameterDetails queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForItemDetailsResult();
};

