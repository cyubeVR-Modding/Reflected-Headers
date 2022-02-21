#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetNewsForAppDelegateDelegate.h"
#include "GetNewsForAppNode.generated.h"

class UGetNewsForAppNode;

UCLASS()
class UWORKSWEB_API UGetNewsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetNewsForAppDelegate Completed;
    
    UGetNewsForAppNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNewsForAppNode* GetNewsForAppNode(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
};

