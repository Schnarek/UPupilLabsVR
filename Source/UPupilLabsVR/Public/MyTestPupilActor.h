// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPluginManager.h"

#include "Core.h"
#include "zmq.h"

#include <string>//TodO dELETE SOME
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdlib.h>


#include "MyTestPupilActor.generated.h"

UCLASS()
class UPUPILLABSVR_API AMyTestPupilActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTestPupilActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
