#pragma once
#include "CoreMinimal.h"
#include "StartSecureMultiplayerSessionMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FStartSecureMultiplayerSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

