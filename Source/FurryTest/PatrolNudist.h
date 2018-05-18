// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FurryTestCharacter.h"
#include "PatrolNudist.generated.h"

/**
 * 
 */
UCLASS()
class FURRYTEST_API APatrolNudist : public AFurryTestCharacter
{
	GENERATED_BODY()

		UPROPERTY (EditInstanceOnly, Category = "Patrol Route")
		TArray<AActor*> PatrolPoinsCPP;
	
	
};
