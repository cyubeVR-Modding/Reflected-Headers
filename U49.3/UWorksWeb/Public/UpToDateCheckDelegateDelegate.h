#pragma once
#include "CoreMinimal.h"
#include "UpToDateCheckDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpToDateCheckDelegate, bool, bSuccessful, const FString&, Content);

