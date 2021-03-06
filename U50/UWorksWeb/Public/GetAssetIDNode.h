#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAssetIDDelegateDelegate.h"
#include "GetAssetIDNode.generated.h"

class UGetAssetIDNode;

UCLASS()
class UWORKSWEB_API UGetAssetIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAssetIDDelegate Completed;
    
    UGetAssetIDNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetIDNode* GetAssetIDNode(const FString& Key, int32 AppID, const FString& ListingID);
    
};

