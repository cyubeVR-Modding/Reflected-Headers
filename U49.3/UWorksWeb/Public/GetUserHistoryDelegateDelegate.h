#pragma once
#include "CoreMinimal.h"
#include "GetUserHistoryDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUserHistoryDelegate, bool, bSuccessful, const FString&, Content);

