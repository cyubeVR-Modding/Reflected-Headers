#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETreeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RuntimeTree.generated.h"

class AChunkManager;
class UStaticMesh;
class UProceduralMeshComponent;

UCLASS()
class CYUBEVR_API ARuntimeTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* PMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMeshReference;
    
    ARuntimeTree();
    UFUNCTION(BlueprintCallable)
    void SpawnLogs(UProceduralMeshComponent* CutNew);
    
    UFUNCTION(BlueprintCallable)
    void SetupWind(int32 From, int32 To);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void RegisterToolHit(FVector Location, bool& NowFall);
    
};

