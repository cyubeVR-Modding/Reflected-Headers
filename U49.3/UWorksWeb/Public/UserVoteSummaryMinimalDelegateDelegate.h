#pragma once
#include "CoreMinimal.h"
#include "UserVoteSummaryMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FUserVoteSummaryMinimalDelegate, bool, bSuccessful, const FString&, Content);

