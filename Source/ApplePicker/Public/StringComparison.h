// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StringComparison.generated.h"

/**
 * 
 */
UCLASS()
class APPLEPICKER_API UStringComparison : public UBlueprintFunctionLibrary
{
	 GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="String")
    static int32 CompareStrings(FString str1, FString str2);
};
