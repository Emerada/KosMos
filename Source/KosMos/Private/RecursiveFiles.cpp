// Fill out your copyright notice in the Description page of Project Settings.


#include "RecursiveFiles.h"

#include "BaseRowDataStruct.h"
#include "ResponseSubsystem.h"

// #include "CesiumGeoreference.h"
#include "RoadSpline.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Serialization/Csv/CsvParser.h"

// Sets default values
ARecursiveFiles::ARecursiveFiles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARecursiveFiles::BeginPlay()
{
	Super::BeginPlay();
	
	//RecursiveCSVFiles();
}

// Called every frame
void ARecursiveFiles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARecursiveFiles::RecursiveCSVFiles()
{
	//Init Array
	TArray<FString>FileNames;
	FileNames.Empty();
	CSVFileArray.Empty();
	
	//D:\Projects
	//RecursiveFiles
	//C:/Users/setsu/Desktop/Emeralda/Content/CSV/
	CategoryPath=UKismetSystemLibrary::GetProjectContentDirectory()+"CSV/";
	IFileManager& MyFileManager=IFileManager::Get();
	MyFileManager.FindFilesRecursive(FileNames,*CategoryPath,TEXT("*.csv"),true,false,true);
	for (auto Index:FileNames)
	{
		CSVFileArray.Add(Index);
		//UE_LOG(LogTemp,Error,TEXT("%s"),*Index);
	}

	for (auto FileAddress:CSVFileArray)
	{
		FString localFullAddress;
		TArray<FString>localAddressParseArray=UKismetStringLibrary::ParseIntoArray(FileAddress,"/",true);
		for (int32 ParseIndex=0;ParseIndex<localAddressParseArray.Num();ParseIndex++)
		{
			if(ParseIndex!=localAddressParseArray.Num()-1)
			{
				if(UKismetStringLibrary::Len(localFullAddress)==0)
				{
					localFullAddress=UKismetStringLibrary::Concat_StrStr(localAddressParseArray[ParseIndex],"\\");
				}
				else
				{
					localFullAddress=UKismetStringLibrary::Concat_StrStr(localFullAddress,localAddressParseArray[ParseIndex]);
					localFullAddress=UKismetStringLibrary::Concat_StrStr(localFullAddress,"\\");
				}
			}
			else
			{
				localFullAddress=UKismetStringLibrary::Concat_StrStr(localFullAddress,localAddressParseArray[ParseIndex]);
			}

			TArray<FString>localCSV1;
			TArray<FString>localCSV2;
			int32 localCSVArrayIndex;
			FString localCSVStr;
			bool localBool=true;
			bool localStructBool=true;
			
			ReadCSV(localFullAddress,localCSV1,localCSV2,localCSVArrayIndex,localBool);
			CSVToString(localCSVStr,localCSV1,localCSV2,localCSVArrayIndex);
			
			UScriptStruct* localStruct=FBaseRowDataStruct::StaticStruct();
			UDataTable* localDataTable=CSVToDataTable(localCSVStr,localStruct,localStructBool);
			
			InitRoadSpline(localDataTable);
			
		}
		
	}
}

void ARecursiveFiles::InitRoadSpline(UDataTable* localDataTable)
{
	FString PointRoadName="";
	FString PointMileage="";
	TArray<FVector>PointPosition;
	TArray<FString>PointCity;
			
	for (auto&row:localDataTable->GetRowMap())
	{
		TObjectPtr<FBaseRowDataStruct>BaseRowDataStruct=(FBaseRowDataStruct*)row.Value;
		float PointLatitude=BaseRowDataStruct->Latitude;
		float PointLongitude=BaseRowDataStruct->Longitude;
		float PointHeight=BaseRowDataStruct->Height;

		PointCity.Add(BaseRowDataStruct->City);
				
		if((BaseRowDataStruct->RoadName!="")&&(BaseRowDataStruct->Mileage!=""))
		{
			PointRoadName=BaseRowDataStruct->RoadName;
			PointMileage=BaseRowDataStruct->Mileage;
		}

		// glm::dvec3 UECoords=CesiumGeoreference->TransformLongitudeLatitudeHeightToUnreal(
		// 	glm::dvec3(PointLongitude,PointLatitude,PointHeight));
		// PointPosition.Add(FVector(UECoords.x,UECoords.y,UECoords.z));

	}

	 FTransform SpawnLocation;
	 TObjectPtr<ARoadSpline>RoadSpline=GetWorld()->SpawnActor<ARoadSpline>(ARoadSpline::StaticClass(),SpawnLocation);
	 // RoadSpline->InitRoadSpline(PointPosition,PointCity,PointRoadName,PointMileage,CesiumGeoreference);
	 // RoadSpline->InitSplineMeshComponent(SplineMesh);

	RoadSplines.Add(RoadSpline);

	PointRoadName="";
	PointMileage="";
	PointPosition.Reset();
	PointCity.Reset();
}

bool ARecursiveFiles::ReadCSV(FString Path, TArray<FString>& Headers, TArray<FString>& Data, int32& Total, bool HeaderFirst)
{
	Total = 0;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	if (!file.FileExists(*Path))
	{
		return false;
	}
	FString Result;
	if (!FFileHelper::LoadFileToString(Result, *Path))
	{
		return false;
	}
	return ARecursiveFiles::StringToCSV(Result, Headers, Data, Total, HeaderFirst);
}

bool ARecursiveFiles::StringToCSV(FString Content, TArray<FString>& Headers, TArray<FString>& Data, int32& Total,bool HeaderFirst)
{
	FCsvParser Parser(Content);
	TArray<TArray<const TCHAR*>> Rows = Parser.GetRows();
	for (TArray<const TCHAR*> Row : Rows)
	{
		Total++;
		for (FString Col : Row)
		{
			if (Total == 1 && HeaderFirst)
			{
				Headers.Add(Col);
			}
			else
			{
				Data.Add(Col);
			}
		}
	}
	return true;
}

bool ARecursiveFiles::CSVToString(FString& Output, TArray<FString> Headers, TArray<FString> Data, int32& Total)
{
	Total = 0;
	FString Delimiter = ",";
	if (Headers.Num() == 0)
	{
		return false;
	}
	if (Data.Num() % Headers.Num() != 0)
	{
		return false;
	}
	Output = TEXT("");
	// Header row
	for (FString Col : Headers)
	{
		if (Output.Len() > 0)
		{
			Output += Delimiter;
		}
		Output += (TEXT("\"") + Col.Replace(TEXT("\""), TEXT("\"\"")) + TEXT("\""));
	}
	Output += LINE_TERMINATOR;
	FString Row = TEXT("");
	int32 Count = 0;
	// Data row
	for (FString Col : Data)
	{
		Count++;
		if (Row.Len() > 0)
		{
			Row += Delimiter;
		}
		Row += (TEXT("\"") + Col.Replace(TEXT("\""), TEXT("\"\"")) + TEXT("\""));
		if (Count % Headers.Num() == 0)
		{
			Row += LINE_TERMINATOR;
			Output += Row;
			Row = "";
		}
	}
	Total = (Data.Num() / Headers.Num()) + 1;
	return true;
}

UDataTable* ARecursiveFiles::CSVToDataTable(FString CSV, UScriptStruct* Struct, bool& Success)
{
	Success = false;
	if (Struct == nullptr) 
	{
		return nullptr;
	}
	UDataTable* DataTable = NewObject<UDataTable>();
	DataTable->RowStruct = Struct;
	auto Result = DataTable->CreateTableFromCSVString(CSV);
	if (Result.Num() == 0) 
	{
		Success = true;
	}
	return DataTable;
}

