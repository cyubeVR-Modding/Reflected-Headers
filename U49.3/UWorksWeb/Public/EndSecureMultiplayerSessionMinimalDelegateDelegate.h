#pragma once
#include "CoreMinimal.h"
#include "EndSecureMultiplayerSessionMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FEndSecureMultiplayerSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

