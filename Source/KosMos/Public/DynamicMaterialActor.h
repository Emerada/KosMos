// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicMaterialActor.generated.h"



USTRUCT(BlueprintType)
struct FInfoStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<AActor>InfoActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<TObjectPtr<UMaterialInstanceDynamic>>InfoMaterials;
	
	
};


UCLASS()
class KOSMOS_API ADynamicMaterialActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADynamicMaterialActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<TObjectPtr<AActor>>HitActorArray;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bDoOnce=true;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bDoOnce2=true;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FInfoStruct>InfoStruct;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitDynamicMaterialItem(UMaterial* InitMaterial);

	UFUNCTION(BlueprintCallable)
	void FindInfoMaterialsChange(TArray<FInfoStruct>& RefInfoStruct,AActor* RefActor);

	UFUNCTION(BlueprintCallable)
	void InitHitActorInfoStruct(TArray<FInfoStruct>& RefInfoStruct,AActor* RefActor,UPrimitiveComponent* RefComponent,UMaterial* InitMaterial);


};

