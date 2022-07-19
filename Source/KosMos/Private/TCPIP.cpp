// Fill out your copyright notice in the Description page of Project Settings.


#include "TCPIP.h"

#include "DatasmithAssetUserData.h"
#include "ResponseSubsystem.h"
#include "TcpSocketSubsystem.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATCPIP::ATCPIP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATCPIP::BeginPlay()
{
	Super::BeginPlay();
	
	InitTCPIP();
}

// Called every frame
void ATCPIP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATCPIP::InitTCPIP()
{
	TObjectPtr<UTcpSocketSubsystem>TcpSocketSubsystem=GEngine->GetEngineSubsystem<UTcpSocketSubsystem>();
	FTcpSocketDisconnectDelegate DisconnectedDelegate;
	FTcpSocketConnectDelegate ConnectedDelegate;
	FTcpSocketReceivedMessageDelegate MessageReceivedDelegate;
	
	DisconnectedDelegate.BindDynamic(this,&ATCPIP::Disconnected);
	ConnectedDelegate.BindDynamic(this,&ATCPIP::Connected);
	MessageReceivedDelegate.BindDynamic(this,&ATCPIP::MessageReceived);
	
	TcpSocketSubsystem->Connect(ipAddress,port,DisconnectedDelegate,ConnectedDelegate,MessageReceivedDelegate,ConnectionId);

}

void ATCPIP::Disconnected(int32 Connection_Id)
{
	
}

void ATCPIP::Connected(int32 Connection_Id)
{
	
}

void ATCPIP::MessageReceived(int32 Connection_Id, TArray<uint8>& Message)
{
	ClearStringVar();
	
	TObjectPtr<UTcpSocketSubsystem>TcpSocketSubsystem=GEngine->GetEngineSubsystem<UTcpSocketSubsystem>();
	FString DecodeJsonString=TcpSocketSubsystem->Message_ReadString(Message,Message.Num());

	UE_LOG(LogTemp,Error,TEXT("%s"),*DecodeJsonString);
	
	TObjectPtr<UResponseSubsystem>ResponseSubsystem=GEngine->GetEngineSubsystem<UResponseSubsystem>();
	TObjectPtr<UResponseJsonObject>ResponseJsonObject=ResponseSubsystem->ConstructResponseJsonObject();
	ResponseJsonObject->DecodeJson(DecodeJsonString,true);

	DeviceName=ResponseJsonObject->GetStringField("deviceName");
	ModelID=ResponseJsonObject->GetStringField("modelId");

	for (auto FiledName:ResponseJsonObject->GetFieldNames())
	{
		if(ResponseJsonObject->GetStringField(FiledName)=="")
		{
			JsonFieldNameArray.Add(FiledName);
		}
		else
		{
			DeviceValueArray.Add(ResponseJsonObject->GetStringField(FiledName));
			
		}
		
	}

	for (int32 JsonFiledNameArrayIndex=0;JsonFiledNameArrayIndex<JsonFieldNameArray.Num();JsonFiledNameArrayIndex++)
	{
		if (JsonFiledNameArrayIndex%2==0)
		{
			for (auto ObjectArrayFieldIndex:ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex]))
			{
				for (int32 FieldNamesIndex=0;FieldNamesIndex<ObjectArrayFieldIndex->GetFieldNames().Num();FieldNamesIndex++)
				{
					if(FieldNamesIndex%2==0)
					{
						localArrayStr01=ObjectArrayFieldIndex->GetStringField(ObjectArrayFieldIndex->GetFieldNames()[FieldNamesIndex]);
					}
					else
					{
						localArrayStr02=ObjectArrayFieldIndex->GetStringField(ObjectArrayFieldIndex->GetFieldNames()[FieldNamesIndex]);
					}
				}
				
				FString localParameterValue=localArrayStr01.Append(":").Append(localArrayStr02);
				ParameterValueArray.Add(localParameterValue);
				
			}
			
		}
		else
		{
			for (int32 ObjectArrayFieldIndex=0;ObjectArrayFieldIndex<ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex]).Num();ObjectArrayFieldIndex++)
			{
				if(ObjectArrayFieldIndex%2==0)
				{
					for (auto localEventValue:ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetFieldNames())
					{
						localEventArray01.Add(ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetStringField(localEventValue));
					}
				}
				else
				{
					for (auto localEventValue:ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetFieldNames())
					{
						if(HasSubstring(ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetStringField(localEventValue)
							,"http",ESearchCase::IgnoreCase,ESearchDir::FromStart))
						{
							localEventArray02.Add(" ");
							HttpImage=ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetStringField(localEventValue);
						}
						else
						{
							localEventArray02.Add(ResponseJsonObject->GetObjectArrayField(JsonFieldNameArray[JsonFiledNameArrayIndex])[ObjectArrayFieldIndex]->GetStringField(localEventValue));
						}
						
					}
					for (int32 LocalEventArrayIndex=0;LocalEventArrayIndex<localEventArray01.Num();LocalEventArrayIndex++)
					{
						EventValueArray.Add(localEventArray01[LocalEventArrayIndex].Append(":").Append(localEventArray02[LocalEventArrayIndex]));
					}
				}
			}
			
		}
	}
	
	for(auto DeviceValueArrayIndex:DeviceValueArray)
	{
		ToDeviceValue=ToDeviceValue.Append(DeviceValueArrayIndex).Append("\n");
	}
	for(auto ParameterValueArrayIndex:ParameterValueArray)
	{
		ToParameterValue=ToParameterValue.Append(ParameterValueArrayIndex).Append("\n");
	}
	for(auto EventValueArrayIndex:EventValueArray)
	{
		ToEventValue=ToEventValue.Append(EventValueArrayIndex).Append("\n");
	}
	
	
	
	
	
}

bool ATCPIP::HasSubstring(const FString& SearchIn, const FString& Substring, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir)
{
	return SearchIn.Contains(Substring, SearchCase, SearchDir);
}

void ATCPIP::ClearStringVar()
{

	DeviceName="";
	
	ModelID="";
	
	localArrayStr01="";

	localArrayStr02="";

	HttpImage="";

	ToDeviceValue="";

	ToParameterValue="";
	
	ToEventValue="";
	
	JsonFieldNameArray.Empty();

	DeviceValueArray.Empty();
	
	localEventArray01.Empty();

	localEventArray02.Empty();

	ParameterValueArray.Empty();

	EventValueArray.Empty();
}

bool ATCPIP::SendTCPData(ATCPIP* TCPIP)
{
	if (IsValid(TCPIP))
	{
		
		TArray<TEnumAsByte<EObjectTypeQuery>>objTypes;
		objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
		objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldDynamic));
	
		FHitResult HitResult;
		bool bHit=UGameplayStatics::GetPlayerController(GWorld,0)->GetHitResultUnderCursorForObjects(objTypes,true,HitResult);
		if(bHit)
		{
			UE_LOG(LogTemp,Warning,TEXT("this actor name is %s"),*HitResult.GetActor()->GetName());
			
			if(IsValid(HitResult.GetActor()))
			{
				if(HitResult.GetActor()->ActorHasTag(FName("Info")))
				{
					TObjectPtr<UDatasmithAssetUserData>DatasmithData=UDatasmithAssetUserData::GetDatasmithUserData(HitResult.GetActor());
					if(IsValid(DatasmithData))
					{
						TArray<FString>localDatasmithArray;
						DatasmithData->MetaData.GenerateValueArray(localDatasmithArray);
						
						localModelID=localDatasmithArray[0];
						
						FString SendStringFirst="{\n\"siteId\":\"QYL\",\n\"modelId\":";
						FString SendStringLast="\n}";
						FString RefString=SendStringFirst.Append("\"").Append(localModelID).Append("\"").Append(SendStringLast);

						TObjectPtr<UTcpSocketSubsystem>TcpSocketSubsystem=GEngine->GetEngineSubsystem<UTcpSocketSubsystem>();
						
						TcpSocketSubsystem->SendData(0,TcpSocketSubsystem->Conv_StringToBytes(RefString));

						return true;
					}
					
				}
				
			}
			
		}
	}

	return false;
}


