#pragma once
#include "CoreMinimal.h"
#include "GetPriceSheetMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPriceSheetMinimalDelegate, bool, bSuccessful, const FString&, Content);

