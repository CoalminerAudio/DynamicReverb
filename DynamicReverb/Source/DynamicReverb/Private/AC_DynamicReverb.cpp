// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_DynamicReverb.h"
#include "Components/TimelineComponent.h"

//TODO:


// 3 - Timeline not triggering ending event
// 4 - rename to pulse
// 5 - control reverb value with numbers in unreal, Wwise, Fmod, and control bus values in Metasounds
//


// Sets default values for this component's properties
UAC_DynamicReverb::UAC_DynamicReverb()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	PulseLerpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));

	// ...
}


// Called when the game starts
void UAC_DynamicReverb::BeginPlay()
{
	Super::BeginPlay();

	//add float curve to timeline, and attach variables and functions
	if (!DefaultSpawnValues.FloatCurve)
	{
		UE_LOG(LogTemp, Error, TEXT("No valid float curve value, destroying Room Pulse component"));
		this->DestroyComponent();
	}
	else
	{
		//prep timelines
		FOnTimelineFloat TimelineFloatUpdate;
		TimelineFloatUpdate.BindUFunction(this, FName("PulseTimelineFloat"));

		FOnTimelineEvent TimelineFinishEvent;
		TimelineFinishEvent.BindUFunction(this, FName("PusleTimelineOnEnd"));

		PulseLerpTimeline->AddInterpFloat(DefaultSpawnValues.FloatCurve, TimelineFloatUpdate);
		PulseLerpTimeline->SetTimelineFinishedFunc(TimelineFinishEvent);
		//PulseLerpTimeline->PlayFromStart();
		PulseLength = DefaultSpawnValues.FloatCurve->FloatCurve.GetLastKey().Time;

		//get reverb controller
		ReverbController = this->GetOwner();

		//set up arrays for line casting
		SetLineAngles(DefaultSpawnValues.HorizontalCasts, DefaultSpawnValues.VerticalCasts);

		//set up physmat interaction for line casting
		Params.bReturnPhysicalMaterial = true;

		//Only grab absorption values if there is a vlaid data asset
		if (!SurfaceAbsorptionValues)
		{
			UE_LOG(LogTemp, Error, TEXT("No valid surface absoprtion data asset, reverb component not tracking absorption values"));
		}
		//get inital values for room size
		TriggerCasts();
	}
}

void UAC_DynamicReverb::SetLineAngles(int NumHorizLines, int NumVertLines)
{
	//determine largest possible room size 
	MaxRoomSize = (DefaultSpawnValues.MaxHorizontalDrawDistance * 2) * (DefaultSpawnValues.MaxVerticalDrawDistance);
	RoomSizeRange = { 0, MaxRoomSize };

	//Initalize arrays to be empty
	HorizontalRadians.Empty();
	HorizontalDegrees.Empty();
	HorizontalCastLengths.Empty();
	RoomAbosorptionValues.Empty();
	VerticalRadians.Empty();
	VerticalDegrees.Empty();
	VerticalCastLengths.Empty();

	//Get the angles we will shoot, convert to radians and add to array for accessing later
	//add a 0 to the CastLenghts and RoomAbsorption arrays to initalize these to be the correct size

	float IncrementedAngle = 0;
	if (DefaultSpawnValues.bUseHorizontalCasts)
	{
		HorizontalAngle = 360.f / NumHorizLines;

		
		for (int i = 0; i < NumHorizLines; i++)
		{
			IncrementedAngle = IncrementedAngle + HorizontalAngle;
			float RadAngle = FMath::DegreesToRadians(IncrementedAngle);
			HorizontalRadians.Add(RadAngle);
			HorizontalDegrees.Add(IncrementedAngle);
			HorizontalCastLengths.Add(0);
			if (SurfaceAbsorptionValues)
			{
				RoomAbosorptionValues.Add(0);
			}

		}
	}

	//get the angles vertical lines will be around the player
	//initalize vertical values
	if (DefaultSpawnValues.bUseVerticalCasts)
	{
		VerticalAngle = 360.f / NumVertLines;
		IncrementedAngle = 0;
		for (int i = 0; i < NumVertLines; i++)
		{
			IncrementedAngle = IncrementedAngle + VerticalAngle;
			float RadAngle = FMath::DegreesToRadians(IncrementedAngle);
			VerticalRadians.Add(RadAngle);
			VerticalDegrees.Add(IncrementedAngle);
			VerticalCastLengths.Add(0);
			if (SurfaceAbsorptionValues)
			{
				for (int x = 0; x < 2; x++)
				{
					RoomAbosorptionValues.Add(0);
				}
			}
		}
	}
	//prep functions for the timeline

	//trigger first pulse of casts
	TriggerCasts();
}

void UAC_DynamicReverb::PulseTimelineFloat(float Alpha)
{
	if (bPlayerMoved)
	{
		RoomSize = FMath::Lerp(OldRoomSize, NormalizedRoomSize, Alpha);
		AbsorptionValue = FMath::Lerp(OldAbsorptionValues, NewAbsorptionValues, Alpha);
	}
}

void UAC_DynamicReverb::PusleTimelineOnEnd()
{
	if (bPlayerMoved)
	{
		OldRoomSize = RoomSize;
		OldAbsorptionValues = AbsorptionValue;
	}
	TriggerCasts();
	//GetWorld()->GetTimerManager().SetTimer(PulseHandle, this, &UAC_DynamicReverb::TriggerCasts, 3.f);
}


//break into functions
void UAC_DynamicReverb::TriggerCasts()
{
	StartingLocation = ReverbController->GetActorLocation() + Offset;
	if (StartingLocation == OldPulseLocation)
	{
		//if the player hasn't moved since the last pulse, don't check roomsize
		bPlayerMoved = false;
		PulseLerpTimeline->PlayFromStart();
	}
	else
	{
		OldPulseLocation = StartingLocation;

		bPlayerMoved = true;

		if (DefaultSpawnValues.bUseHorizontalCasts)
		{
			CastHorizontalLines();
			FVector2D HorizSizeValues = AverageArrayValues(HorizontalCastLengths, { 0, DefaultSpawnValues.MaxHorizontalDrawDistance }, true, DefaultSpawnValues.MinHorizontalValue);
			NonNormalizedHorizSize = HorizSizeValues.X;
			NormalizedHorizSize = HorizSizeValues.Y;
		}

		if (DefaultSpawnValues.bUseVerticalCasts)
		{
			CastVerticalLines();
			FVector2D VertSizeValues = AverageArrayValues(VerticalCastLengths, { 0, DefaultSpawnValues.MaxVerticalDrawDistance }, true, DefaultSpawnValues.MinVerticalValue);
			NonNormalizedVertSize = VertSizeValues.X;
			NormalizedVertSize = VertSizeValues.Y;
		}
		//TODO: This should be different based on input from which cast types I'm doing
		//if there is a valid surface absorption value, track abosprtion values
		if (SurfaceAbsorptionValues)
		{
			FVector2D AbsorbValues = AverageArrayValues(RoomAbosorptionValues, { 0, 1 }, false, 0);
			NewAbsorptionValues = AbsorbValues.Y;
		}

		//surface area of room from both horizontal and vertical casts
		if (DefaultSpawnValues.bUseHorizontalCasts && DefaultSpawnValues.bUseVerticalCasts)
		{
			AssumedRoomSize = (NonNormalizedHorizSize * 2) * (NonNormalizedVertSize);
			NormalizedRoomSize = UKismetMathLibrary::NormalizeToRange(AssumedRoomSize, 0, MaxRoomSize);
		}

		//surface area of room from horizontal casts only
		else
		{
			float EndingRangeVal = 0;
			float CurrentRangeVal = 0;
			if (DefaultSpawnValues.bUseHorizontalCasts)
			{
				EndingRangeVal = DefaultSpawnValues.MaxHorizontalDrawDistance;
				CurrentRangeVal = NonNormalizedHorizSize;
			}
			else if (DefaultSpawnValues.bUseVerticalCasts)
			{
				EndingRangeVal = DefaultSpawnValues.MaxVerticalDrawDistance;
				CurrentRangeVal = NonNormalizedVertSize;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Reverb Pulse Component is not set to fire any casts, please check cast types"));
				this->DestroyComponent();
			}

			AssumedRoomSize = CurrentRangeVal;
			NormalizedRoomSize = UKismetMathLibrary::NormalizeToRange(CurrentRangeVal, 0, EndingRangeVal);
		}

		FVector2D CurrentRoomValues = { AssumedRoomSize, NormalizedRoomSize };

		//Debug for room size values

		if (Debug)
		{
			/*
			GEngine->AddOnScreenDebugMessage(1, PulseLength, FColor::Cyan, FString::Printf(TEXT("Horizontal Values are: %s"), *HorizSizeValues.ToString()));
			GEngine->AddOnScreenDebugMessage(2, PulseLength, FColor::Cyan, FString::Printf(TEXT("Vertical Values are: %s"), *VertSizeValues.ToString()));
			GEngine->AddOnScreenDebugMessage(4, PulseLength, FColor::Cyan, FString::Printf(TEXT("Current room size is %s"), *CurrentRoomValues.ToString()));
			if (SurfaceAbsorptionValues)
			{
				GEngine->AddOnScreenDebugMessage(5, PulseLength, FColor::Cyan, FString::Printf(TEXT("Total Room Absorption is %f"), NewAbsorptionValues));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(5, PulseLength, FColor::Red, FString::Printf(TEXT("Error: Not checking Absoprtion values"), NewAbsorptionValues));
			}
			*/
		}


		if (bInitalTrigger)
		{
			bInitalTrigger = false;
			OldRoomSize = NormalizedRoomSize;
		}

		PulseLerpTimeline->PlayFromStart();
		//Retrigger next pulse
	}
}

void UAC_DynamicReverb::CastHorizontalLines()
{
	UWorld* World = GetWorld();
	for (int i = 0; i < DefaultSpawnValues.HorizontalCasts; i++)
	{

		if (!World)
		{
			UE_LOG(LogTemp, Error, TEXT("No valid world - destroying Dynamic Reverb Component"));
			this->DestroyComponent();
		}

		else
		{
			//TODO: Add in offset

			//Ending location rotation taken from radians array, and math'd into a position from the starting pos
			FVector EndingRotaion = { (DefaultSpawnValues.MaxHorizontalDrawDistance * cos(HorizontalRadians[i])), (DefaultSpawnValues.MaxHorizontalDrawDistance * sin(HorizontalRadians[i])), 0 };
			EndingLocation = StartingLocation + EndingRotaion;

			bool TraceHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartingLocation, EndingLocation, TraceChannel, Params);

			FVector2D HitValues = CastGrabber(TraceHit, true);

			if (SurfaceAbsorptionValues)
			{
				RoomAbosorptionValues[i] = HitValues.X;
			}
			HorizontalCastLengths[i] = HitValues.Y;


			if (Debug)
			{
				DebugCast(TraceHit, World, RoomAbosorptionValues[i], HitValues.Y);
			}
		}
	}
}

void UAC_DynamicReverb::CastVerticalLines()
{
	int CorrectedArraySize = 0;
	float DistanceFromPlayer = 0;

	if (!DefaultSpawnValues.bUpdateDistanceToPlayer)
	{
		DistanceFromPlayer = DefaultSpawnValues.VerticalDistanceFromPlayer;
	}
	else
	{
		DistanceFromPlayer = FMath::GetMappedRangeValueClamped(DefaultSpawnValues.VerticalDistanceEffector, DefaultSpawnValues.VerticalDistanceEffected, NonNormalizedHorizSize);
	}

	for (int i = 0; i < DefaultSpawnValues.VerticalCasts; i++)
	{
		float UpDistance = 0;
		float DownDistance = 0;
		UWorld* World = GetWorld();
		if (!World)
		{
			UE_LOG(LogTemp, Error, TEXT("No valid world - destroying Dynamic Reverb Component"));
			this->DestroyComponent();
		}
		else
		{
			
			for (int x = 0; x <= 1; x++)
			{
				//for each cast, shoot one line up and one line down
				FVector VertFactor;
				if (x == 0)
				{
					VertFactor = { 0, 0, 1 };
				}
				if (x == 1)
				{
					VertFactor = { 0, 0, -1 };
				}
				/*else
				{
					UE_LOG(LogTemp, Error, TEXT("Vertical line attempted more than two casts per number of lines"));
					return;
				}*/
				FVector VertEnd = VertFactor.operator*(DefaultSpawnValues.MaxVerticalDrawDistance);

				FVector AdaptedLocation = { DistanceFromPlayer * cos(VerticalRadians[i]), (DistanceFromPlayer * sin(VerticalRadians[i])), 0.f };
				StartingLocation = ReverbController->GetActorLocation() + AdaptedLocation;
				EndingLocation = StartingLocation + VertEnd;

				bool TraceHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartingLocation, EndingLocation, TraceChannel, Params);

				FVector2D HitValues = CastGrabber(TraceHit, false);
				if (x == 0)
				{
					UpDistance = HitValues.Y;

					if (SurfaceAbsorptionValues)
					{
						RoomAbosorptionValues[CorrectedArraySize + HorizontalCastLengths.Num()] = HitValues.X;
					}
				}
				if (x == 1)
				{
					DownDistance = HitValues.Y;

					if (SurfaceAbsorptionValues)
					{
						RoomAbosorptionValues[CorrectedArraySize + HorizontalCastLengths.Num()] = HitValues.X;
					}
				}
				CorrectedArraySize++;

				/*if (SurfaceAbsorptionValues)
				{
					RoomAbosorptionValues[i + HorizontalCastLengths.Num()] = HitValues.X;
				}
				*/

				if (Debug)
				{
					DebugCast(TraceHit, World, RoomAbosorptionValues[i + HorizontalCastLengths.Num()], HitValues.Y);
				}
			}
			//add the shoot up and down sitances to get an accurate room height
			VerticalCastLengths[i] = UpDistance + DownDistance;

		}
	}
}

FVector2D UAC_DynamicReverb::AverageArrayValues(TArray<float> FloatArray, FVector2D NonNoramlRange, bool ProxCheck, float lowestValue)
{
	float SumValue = 0;
	int adjustedArraySize = 0;
	for (float value : FloatArray)
	{
		if (ProxCheck)
		{
			//if the length is too close to the reverb controller, we don't use it
			if (value > lowestValue)
			{
				SumValue = SumValue + value;
				adjustedArraySize++;
			}
		}
		else
		{
			SumValue = SumValue + value;
			adjustedArraySize++;
		}
	}
	float AvgVal = SumValue / adjustedArraySize;
	return { AvgVal, UKismetMathLibrary::NormalizeToRange(AvgVal, NonNoramlRange.X, NonNoramlRange.Y) };
}

void UAC_DynamicReverb::StopPulses()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(PulseHandle))
	{
		PulseHandle.Invalidate();
	}
}

void UAC_DynamicReverb::ResumePulses()
{
	TriggerCasts();
}

FVector2D UAC_DynamicReverb::CastGrabber(bool CastHit, bool CastDirection)
{
	float TempAbsorbValue = 0;
	float HitLength = 0;

	if (CastHit)
	{
		HitPoint = HitResult.Location;
		HitLength = HitResult.Distance;

		if (SurfaceAbsorptionValues)
		{
			float* AbsorbValue = SurfaceAbsorptionValues->AbsorptionValues.Find(HitResult.PhysMaterial);
			if (AbsorbValue)
			{
				TempAbsorbValue = *AbsorbValue;
			}
			else
			{
				TempAbsorbValue = SurfaceAbsorptionValues->DefaultWeightValue;
			}
		}
	}

	else
	{
		HitPoint = EndingLocation;
		if (CastDirection)
		{
			HitLength = DefaultSpawnValues.MaxHorizontalDrawDistance;
		}
		else
		{
			HitLength = DefaultSpawnValues.MaxVerticalDrawDistance;
		}

		if (SurfaceAbsorptionValues)
		{
			TempAbsorbValue = SurfaceAbsorptionValues->DefaultWeightValue;
		}
	}

	return { TempAbsorbValue, HitLength };
}

void UAC_DynamicReverb::DebugCast(bool TraceHit, UWorld* World, float HitAbsorptionVal, float Hitdistance)
{
	FColor DebugColor;
	if (TraceHit)
	{
		DebugColor = FLinearColor::LerpUsingHSV(FLinearColor::Black, FLinearColor::White, HitAbsorptionVal).ToFColor(true);
	}
	
	else
	{
		DebugColor = FColor::Red;
	}
	//DrawDebugLine(World, StartingLocation, HitPoint, DebugColor, false, DefaultSpawnValues.PulseTime);
	FString DebugDist = FString::SanitizeFloat(Hitdistance);
	DrawDebugBox(World, HitPoint, { 20, 20, 20 }, DebugColor, false, PulseLength, 10.f);
	DrawDebugString(World, HitPoint, DebugDist, nullptr, FColor::White, PulseLength);
}





// Called every frame
void UAC_DynamicReverb::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//PulseLerpTimeLine.TickTimeline(DeltaTime);
	GEngine->AddOnScreenDebugMessage(80, 1, FColor::Cyan, FString::Printf(TEXT("Current Room size Value: %f"), RoomSize));
	GEngine->AddOnScreenDebugMessage(81, 1, FColor::Cyan, FString::Printf(TEXT("Current Absorption Value: %f"), AbsorptionValue));
	//TODO: Move the loop to the function
	//TriggerCasts();

}

