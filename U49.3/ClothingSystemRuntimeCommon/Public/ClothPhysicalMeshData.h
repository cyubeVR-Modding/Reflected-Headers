#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothVertBoneData -FallbackName=ClothVertBoneData
#include "PointWeightMap.h"
#include "ClothPhysicalMeshData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothPhysicalMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Vertices;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> Normals;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Indices;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, FPointWeightMap> WeightMaps;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InverseMasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBoneWeights;
    
    UPROPERTY(EditAnywhere)
    int32 NumFixedVerts;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> SelfCollisionIndices;
    
    UPROPERTY()
    TArray<float> MaxDistances;
    
    UPROPERTY()
    TArray<float> BackstopDistances;
    
    UPROPERTY()
    TArray<float> BackstopRadiuses;
    
    UPROPERTY()
    TArray<float> AnimDriveMultipliers;
    
    FClothPhysicalMeshData();
};

