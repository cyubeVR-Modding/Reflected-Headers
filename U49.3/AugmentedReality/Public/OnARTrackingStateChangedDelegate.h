#pragma once
#include "CoreMinimal.h"
#include "EARTrackingState.h"
#include "OnARTrackingStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnARTrackingStateChanged, EARTrackingState, NewTrackingState);

