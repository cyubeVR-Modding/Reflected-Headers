#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.h"
#include "SteamUGCQueryParameterTagsAllUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterTagsAllUser : public FSteamUGCQueryParameterTagsAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> requiredTags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> excludedTags;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterTagsAllUser();
};

