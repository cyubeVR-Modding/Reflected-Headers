#pragma once
#include "CoreMinimal.h"
#include "GetGlobalAchievementPercentagesForAppMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetGlobalAchievementPercentagesForAppMinimalDelegate, bool, bSuccessful, const FString&, Content);

