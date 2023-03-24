// Fill out your copyright notice in the Description page of Project Settings.


#include "TheFunctionLibrary.h"

#include <Kismet/GameplayStatics.h>
#include "Engine/World.h"

#include "MyPointLight.h"

void UTheFunctionLibrary::Print(FString message)
{
#if UE_EDITOR
	GEngine->AddOnScreenDebugMessage(-10, 15.0f, FColor::Red, message);
#endif
	UE_LOG(LogTemp, Log, TEXT("%s"), *message);
}

int UTheFunctionLibrary::ReturnStuff(const FString inputValue, FString& result_out1, FString& result_out2)
{
	result_out1 = inputValue;
	result_out2 = "Diantre";
	return 3;
}

void UTheFunctionLibrary::ToggleAllLights()
{
	UWorld* world = GEngine->GameViewport->GetWorld();

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(
		world,
		AMyPointLight::StaticClass(),
		Actors
	);

	for (AActor* tmpActor : Actors) 
	{
		((AMyPointLight*)tmpActor)->ToggleLight();
	}
}
