// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::Print(FString message)
{
#if UE_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, message);
#endif
	UE_LOG(LogTemp, Log, TEXT("%s"), *message);
}
