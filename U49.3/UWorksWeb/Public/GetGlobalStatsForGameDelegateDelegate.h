#pragma once
#include "CoreMinimal.h"
#include "GetGlobalStatsForGameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetGlobalStatsForGameDelegate, bool, bSuccessful, const FString&, Content);

