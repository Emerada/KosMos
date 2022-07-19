// Fill out your copyright notice in the Description page of Project Settings.


#include "RoadSpline.h"

// #include <CesiumGeospatial/Ellipsoid.h>
// #include <CesiumGeospatial/Library.h>
// #include <glm/vec4.hpp>
//
// #include "CesiumGeoreference.h"
// #include "GeoTransforms.h"
#include "Components/SplineComponent.h"
//#include "Components/SplineMeshComponent.h"

// Sets default values
ARoadSpline::ARoadSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent=CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent=SplineComponent;

}

// Called when the game starts or when spawned
void ARoadSpline::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARoadSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// void ARoadSpline::InitRoadSpline(TArray<FVector> PointPosition, TArray<FString> PointCity, FString PointRoadName,
// 	FString PointMileage, ACesiumGeoreference* CesiumGeoreference)
// {
// // /
// 	
// }
//
// void ARoadSpline::InitSplineMeshComponent(UStaticMesh* SplineMesh)
// {
// 	for(int32 SplineCount=0;SplineCount<(SplineComponent->GetNumberOfSplinePoints()-1);SplineCount++)
// 	{
// 		TObjectPtr<USplineMeshComponent>SplineMeshComponent=NewObject<USplineMeshComponent>(this,USplineMeshComponent::StaticClass());
// 		SplineMeshComponent->SetStaticMesh(SplineMesh);
// 		SplineMeshComponent->SetMobility(EComponentMobility::Movable);
// 		SplineMeshComponent->CreationMethod=EComponentCreationMethod::Native;
// 		SplineMeshComponent->RegisterComponentWithWorld(GetWorld());
// 		SplineMeshComponent->AttachToComponent(SplineComponent,FAttachmentTransformRules::KeepRelativeTransform);
//
// 		const FVector StartPoint=SplineComponent->GetLocationAtSplinePoint(SplineCount,ESplineCoordinateSpace::Local);
// 		const FVector StartTangent=SplineComponent->GetTangentAtSplinePoint(SplineCount,ESplineCoordinateSpace::Local);
// 		const FVector EndPoint=SplineComponent->GetLocationAtSplinePoint(SplineCount+1,ESplineCoordinateSpace::Local);
// 		const FVector EndTangent=SplineComponent->GetTangentAtSplinePoint(SplineCount+1,ESplineCoordinateSpace::Local);
//
// 		SplineMeshComponent->SetStartAndEnd(StartPoint,StartTangent,EndPoint,EndTangent,true);
// 		SplineMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
// 		SplineMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
//
// 		//SetSplineMeshComponent Mesh Materials
// 		
// 		SplineMeshComponentArray.Add(SplineMeshComponent);
// 	}
// }
