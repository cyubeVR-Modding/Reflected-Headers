#pragma once
#include "CoreMinimal.h"
#include "RequestLobbyListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestLobbyListMinimalDelegate, bool, bSuccessful, int32, LobbiesMatching);

