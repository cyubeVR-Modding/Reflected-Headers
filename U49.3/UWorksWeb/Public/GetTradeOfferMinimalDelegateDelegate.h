#pragma once
#include "CoreMinimal.h"
#include "GetTradeOfferMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetTradeOfferMinimalDelegate, bool, bSuccessful, const FString&, Content);

