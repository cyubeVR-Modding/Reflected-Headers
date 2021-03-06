#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.h"
#include "StructSerializerObjectTestStruct.h"
#include "StructSerializerBooleanTestStruct.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerArrayTestStruct.h"
#include "StructSerializerSetTestStruct.h"
#include "StructSerializerMapTestStruct.h"
#include "StructSerializerTestStruct.generated.h"

USTRUCT()
struct FStructSerializerTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerNumericTestStruct Numerics;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerBooleanTestStruct Booleans;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerObjectTestStruct Objects;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerBuiltinTestStruct Builtins;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerArrayTestStruct Arrays;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerMapTestStruct Maps;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStructSerializerSetTestStruct Sets;
    
    SERIALIZATION_API FStructSerializerTestStruct();
};

