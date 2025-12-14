// Fill out your copyright notice in the Description page of Project Settings.


#include "Variant_SideScrolling/Gameplay/Prj1_DashRechargeZone.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "SideScrollingCharacter.h"

// Sets default values
APrj1_DashRechargeZone::APrj1_DashRechargeZone()
{
 	PrimaryActorTick.bCanEverTick = false;

	// create the root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// create the bounding box
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(RootComponent);

	// configure the bounding box
	Box->SetBoxExtent(FVector(200.0f, 90.0f, 200.0f), false);
	Box->SetRelativeLocation(FVector(0.0f, 0.0f, 16.0f));

	Box->SetCollisionObjectType(ECC_WorldDynamic);
	Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Box->SetCollisionResponseToAllChannels(ECR_Ignore);
	Box->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	// add the overlap handler
	OnActorBeginOverlap.AddDynamic(this, &APrj1_DashRechargeZone::BeginOverlap);
	
}

void APrj1_DashRechargeZone::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	// if the overalpped actor is a side-scrolling character
	if (ASideScrollingCharacter* OverlappingCharacter = Cast<ASideScrollingCharacter>(OtherActor))
	{
		// Recharge the character's dash
		OverlappingCharacter->RechargeDash();
	}
}
