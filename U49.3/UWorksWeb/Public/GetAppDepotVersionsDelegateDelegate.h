#pragma once
#include "CoreMinimal.h"
#include "GetAppDepotVersionsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppDepotVersionsDelegate, bool, bSuccessful, const FString&, Content);

