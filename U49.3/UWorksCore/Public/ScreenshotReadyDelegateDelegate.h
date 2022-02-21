#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksScreenshotHandle.h"
#include "ScreenshotReadyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScreenshotReadyDelegate, FUWorksScreenshotHandle, Handle, EUWorksResult, Result);

