#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CreateAccountDelegateDelegate.h"
#include "CreateAccountMinimalDelegateDelegate.h"
#include "UWorksRequestWebCreateAccount.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCreateAccount : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateAccountDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCreateAccountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCreateAccount();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

