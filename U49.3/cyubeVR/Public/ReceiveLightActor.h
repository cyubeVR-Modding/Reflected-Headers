#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LightReceiveInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReceiveLightActor.generated.h"

class UMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Abstract)
class CYUBEVR_API AReceiveLightActor : public AActor, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InitLightImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLightAroundValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UMeshComponent*> LightReceiveMeshes;
    
    AReceiveLightActor();
    UFUNCTION()
    bool UseLightAroundValue();
    
    UFUNCTION(BlueprintCallable)
    void SetLightReceiveMeshes(TArray<UMeshComponent*> NewMeshes);
    
    UFUNCTION(BlueprintCallable)
    FVector ManualTickLight(UMaterialInstanceDynamic* DynamicMaterial);
    
    UFUNCTION()
    TArray<UMeshComponent*> GetMeshComponents();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool UseActorCustomLocation() override PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION()
    bool TickReceiveLight() override PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION()
    void LightInterfaceBeginPlay(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION()
    void LightInterfaceBeginDestroy(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION()
    FVector GetActorCustomLocation() override PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

