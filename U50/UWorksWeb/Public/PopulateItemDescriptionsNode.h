#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PopulateItemDescriptionsDelegateDelegate.h"
#include "UWorksLanguages.h"
#include "PopulateItemDescriptionsNode.generated.h"

class UPopulateItemDescriptionsNode;

UCLASS()
class UWORKSWEB_API UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsDelegate Completed;
    
    UPopulateItemDescriptionsNode();
    UFUNCTION(BlueprintCallable)
    static UPopulateItemDescriptionsNode* PopulateItemDescriptionsNode(const FString& Key, int32 AppID, FUWorksLanguages Languages);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

