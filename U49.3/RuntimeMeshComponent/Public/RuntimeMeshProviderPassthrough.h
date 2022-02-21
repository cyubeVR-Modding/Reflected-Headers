#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshProviderPassthrough.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderPassthrough : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshProvider* ChildProvider;
    
public:
    URuntimeMeshProviderPassthrough();
    UFUNCTION(BlueprintCallable)
    void SetChildProvider(URuntimeMeshProvider* InProvider);
    
    UFUNCTION(BlueprintPure)
    URuntimeMeshProvider* GetChildProvider() const;
    
};

