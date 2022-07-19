// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeLock.h"

#include "ResponseSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ATimeLock::ATimeLock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimeLock::BeginPlay()
{
	Super::BeginPlay();

	FPlatformProcess::Sleep(3);
	
	InitTimeLock();

	FTimerHandle TimeLockHandle;
	GetWorldTimerManager().SetTimer(TimeLockHandle,this,&ATimeLock::InitTimeLock,10000.0f,true,0.f);
	
}

// Called every frame
void ATimeLock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(GetSystemTime()>Future)
	{
		TObjectPtr<APlayerController>TickPlayerController=UGameplayStatics::GetPlayerController(this,0);
		UKismetSystemLibrary::QuitGame(this,TickPlayerController,EQuitPreference::Quit,false);
	}
	
	if(TimeToInt>Future)
	{
		TObjectPtr<APlayerController>TickPlayerController=UGameplayStatics::GetPlayerController(this,0);
		UKismetSystemLibrary::QuitGame(this,TickPlayerController,EQuitPreference::Quit,false);
	}


}

void ATimeLock::InitTimeLock()
{
	TObjectPtr<UResponseSubsystem>ResponseSubsystem=GEngine->GetEngineSubsystem<UResponseSubsystem>();
	
	FResponseCallDelegate ResponseCall;
	if(ResponseCall.IsBound())
	{
		ResponseCall.BindDynamic(this,&ATimeLock::CallBack);
	}
	
	const FString Url="http://quan.suning.com/getSysTime.do";
	
	ResponseSubsystem->CallURL(Url,EResponseVerb::GET,EResponseContentType::x_www_form_urlencoded_url,nullptr,ResponseCall);

}

void ATimeLock::CallBack(UResponseJSON* Request)
{
	TimeToInt=0;
	
	if(IsValid(Request))
	{
		FPlatformProcess::Sleep(2);
		
		if(Request->GetResponseObject()->GetStringField("sysTime2")!="")
		{

			TArray<FString>OnlineTime=UKismetStringLibrary::ParseIntoArray(Request->GetResponseObject()->GetStringField("sysTime2")," ",true);
			TArray<FString>YMDTime=UKismetStringLibrary::ParseIntoArray(OnlineTime[0],"-",true);
			TArray<FString>HourTime=UKismetStringLibrary::ParseIntoArray(OnlineTime[1],":",true);

			FString localAppendString=YMDTime[0].Append(YMDTime[1]).Append(YMDTime[2]).Append(HourTime[0]);
			TimeToInt=UKismetStringLibrary::Conv_StringToInt(localAppendString);

			OnlineTime.Reset();
			YMDTime.Reset();
			HourTime.Reset();
		}
		else
		{
			
			TObjectPtr<APlayerController>localPlayerController=UGameplayStatics::GetPlayerController(this,0);
			UKismetSystemLibrary::QuitGame(this,localPlayerController,EQuitPreference::Quit,false);
		}
		
	}
}

int32 ATimeLock::GetSystemTime()
{
	
	FDateTime localTime=FDateTime::Now();
	int32 localYear=localTime.GetYear();
	int32 localMonth=localTime.GetMonth();
	int32 localDay=localTime.GetDay();
	int32 localHour=localTime.GetHour();

	FString localAppendString1=UKismetStringLibrary::Conv_IntToString(localYear);
	FString localAppendString2=UKismetStringLibrary::Conv_IntToString(localMonth);
	FString localAppendString3=UKismetStringLibrary::Conv_IntToString(localDay);
	FString localAppendString4=UKismetStringLibrary::Conv_IntToString(localHour);

	FString localFullAppendString=localAppendString1.Append(localAppendString2).Append(localAppendString3).Append(localAppendString4);
	
	return UKismetStringLibrary::Conv_StringToInt(localFullAppendString);
	
}
