#pragma once
#include "CoreMinimal.h"
#include "CanTradeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCanTradeDelegate, bool, bSuccessful, const FString&, Content);

