#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StartPlaytimeTrackingMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FStartPlaytimeTrackingMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

