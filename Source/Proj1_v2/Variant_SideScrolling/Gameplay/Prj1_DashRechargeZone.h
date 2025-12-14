// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Prj1_DashRechargeZone.generated.h"

class UBoxComponent;

/*
	An intangible zone that recharges the player's dash when they pass through it
*/
UCLASS()
class PROJ1_V2_API APrj1_DashRechargeZone : public AActor
{
	GENERATED_BODY()

	/** Recharge Zone bounding box */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* Box;
	
public:	
	// Sets default values for this actor's properties
	APrj1_DashRechargeZone();

protected:
	// defines behavior when an actor overlaps with the recharge zone
	UFUNCTION()
	void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

};
