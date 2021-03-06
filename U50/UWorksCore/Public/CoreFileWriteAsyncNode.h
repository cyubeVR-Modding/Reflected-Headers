#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "FileWriteAsyncDelegateDelegate.h"
#include "CoreFileWriteAsyncNode.generated.h"

class UCoreFileWriteAsyncNode;

UCLASS()
class UWORKSCORE_API UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFileWriteAsyncDelegate Completed;
    
    UCoreFileWriteAsyncNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFileWriteAsyncNode* FileWriteAsyncNode(const FString& File, TArray<uint8> Buffer);
    
};

