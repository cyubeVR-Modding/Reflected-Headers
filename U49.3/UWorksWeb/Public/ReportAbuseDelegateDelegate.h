#pragma once
#include "CoreMinimal.h"
#include "ReportAbuseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportAbuseDelegate, bool, bSuccessful, const FString&, Content);
