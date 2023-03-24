// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/World.h"

#include "TheFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTIONLIBRARY_API UTheFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Library Function")
		static void Print(FString message);

	UFUNCTION(BlueprintCallable, Category = "Library Function") //Const input everything after will be outputs
		static int ReturnStuff(const FString inputValue, FString& result_out1, FString& result_out2);

	UFUNCTION(BlueprintCallable, Category = "Library Function")
		static void ToggleAllLights();
};
