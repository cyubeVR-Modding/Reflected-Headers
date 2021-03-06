#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUserDetails.h"
#include "SteamUGCQueryParameterTagsAllUser.h"
#include "SteamUGCQueryParameterAllUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAllUser : public FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSteamUGCQueryParameterTagsAllUser tagParameter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bReturnTotalOnly;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bReturnIdsOnly;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAllUser();
};

