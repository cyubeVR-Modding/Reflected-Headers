#pragma once
#include "CoreMinimal.h"
#include "GetCommunityBadgeProgressDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetCommunityBadgeProgressDelegate, bool, bSuccessful, const FString&, Content);

