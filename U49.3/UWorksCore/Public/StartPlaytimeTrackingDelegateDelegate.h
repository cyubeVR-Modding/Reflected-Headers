#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StartPlaytimeTrackingDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartPlaytimeTrackingDelegate, bool, bSuccessful, EUWorksResult, Result);

