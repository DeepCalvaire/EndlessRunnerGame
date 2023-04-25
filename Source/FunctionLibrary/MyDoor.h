// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDoor.generated.h"

UCLASS()
class FUNCTIONLIBRARY_API AMyDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnInteract();

private:
	UPROPERTY(VisibleAnywhere, Category = "Mesh");
	class UStaticMeshComponent* DoorFrame;

	UPROPERTY(VisibleAnywhere, Category = "Mesh");
	UStaticMeshComponent* Door;
};
