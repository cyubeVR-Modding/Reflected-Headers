#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetServersAtAddressDelegateDelegate.h"
#include "GetServersAtAddressNode.generated.h"

class UGetServersAtAddressNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetServersAtAddressNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressDelegate Completed;
    
    UGetServersAtAddressNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServersAtAddressNode* GetServersAtAddressNode(const FString& Addr);
    
};

