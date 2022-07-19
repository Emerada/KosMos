// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicMaterialActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADynamicMaterialActor::ADynamicMaterialActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADynamicMaterialActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADynamicMaterialActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADynamicMaterialActor::InitDynamicMaterialItem(UMaterial* InitMaterial)
{
	TArray<TEnumAsByte<EObjectTypeQuery>>objTypes;
	objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
	objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldDynamic));
	
	FHitResult HitResult;
	bool bHit=UGameplayStatics::GetPlayerController(GWorld,0)->GetHitResultUnderCursorForObjects(objTypes,true,HitResult);

	if(bHit)
	{
		TObjectPtr<AActor>HitActor=HitResult.GetActor();
		TObjectPtr<UPrimitiveComponent>HitComponent=HitResult.GetComponent();
	
		if(HitActor->ActorHasTag(FName("Info")))
		{
			if(HitActorArray.IsValidIndex(0))
			{
				if(HitActorArray.Find(HitActor)!=-1)
				{
					bDoOnce=true;

					FindInfoMaterialsChange(InfoStruct,HitActor);
				}
				else
				{
					if(bDoOnce)
					{
						InitHitActorInfoStruct(InfoStruct,HitActor,HitComponent,InitMaterial);
					
						FindInfoMaterialsChange(InfoStruct,HitActor);
					
						bDoOnce=false;
					}
				}
			
			}
			else
			{
				if(bDoOnce2)
				{
					InitHitActorInfoStruct(InfoStruct,HitActor,HitComponent,InitMaterial);
					
					FindInfoMaterialsChange(InfoStruct,HitActor);
				
					bDoOnce2=false;
				}
			}
		
		}
		else
		{
			FindInfoMaterialsChange(InfoStruct,HitActor);
		}
	}
	
	
}

void ADynamicMaterialActor::FindInfoMaterialsChange(TArray<FInfoStruct>& RefInfoStruct, AActor* RefActor)
{
	for(int32 INfoStructIndex=0;INfoStructIndex<RefInfoStruct.Num();INfoStructIndex++)
	{
		if (RefInfoStruct[INfoStructIndex].InfoActor==RefActor)
		{
			for (auto ChangeDynamicMaterial:RefInfoStruct[INfoStructIndex].InfoMaterials)
			{
				ChangeDynamicMaterial->SetScalarParameterValue(FName("Glow"),0.5f);
			}
			
		}
		else
		{
			for (auto ChangeDynamicMaterial:RefInfoStruct[INfoStructIndex].InfoMaterials)
			{
				ChangeDynamicMaterial->SetScalarParameterValue(FName("Glow"),0.0f);
			}
		}
		
	}
}

void ADynamicMaterialActor::InitHitActorInfoStruct(TArray<FInfoStruct>& RefInfoStruct, AActor* RefActor,UPrimitiveComponent* RefComponent,UMaterial* InitMaterial)
{
	HitActorArray.Add(RefActor);
	TArray<UMaterialInstanceDynamic*>LocalMaterial;
	TObjectPtr<UStaticMeshComponent>AddHitActorComponent=NewObject<UStaticMeshComponent>(RefActor);
	AddHitActorComponent->RegisterComponent();

	AddHitActorComponent->SetStaticMesh(Cast<UStaticMeshComponent>(RefComponent)->GetStaticMesh());
	AddHitActorComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	AddHitActorComponent->SetWorldTransform(RefActor->GetActorTransform());

	for(int32 MaterialIndex=0;MaterialIndex<AddHitActorComponent->GetMaterials().Num();MaterialIndex++)
	{
		TObjectPtr<UMaterialInstanceDynamic> localDynamicMaterialInstance=AddHitActorComponent->CreateDynamicMaterialInstance(MaterialIndex,InitMaterial,FName("None"));
		localDynamicMaterialInstance->SetVectorParameterValue(FName("Color"),FLinearColor(0.0f,5.0f,0.0f,1.0f));
		LocalMaterial.Add(localDynamicMaterialInstance);
	}

	FInfoStruct localInfoStruct;
	localInfoStruct.InfoActor=RefActor;
	localInfoStruct.InfoMaterials=LocalMaterial;
	InfoStruct.Add(localInfoStruct);
}
