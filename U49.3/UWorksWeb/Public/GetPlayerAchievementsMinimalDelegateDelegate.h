#pragma once
#include "CoreMinimal.h"
#include "GetPlayerAchievementsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPlayerAchievementsMinimalDelegate, bool, bSuccessful, const FString&, Content);

