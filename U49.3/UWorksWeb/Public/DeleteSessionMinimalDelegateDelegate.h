#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeleteSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

