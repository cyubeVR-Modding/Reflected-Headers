#pragma once
#include "CoreMinimal.h"
#include "GetAssetPricesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAssetPricesDelegate, bool, bSuccessful, const FString&, Content);

