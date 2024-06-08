// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Templates/Tuple.h"
#include "Components/TimelineComponent.h"
#include "DynamicReverbData.h"
#include "AC_DynamicReverb.generated.h"




#define COLLISION_AUDIOREVERB ECC_GameTraceChannel1

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICREVERB_API UAC_DynamicReverb : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_DynamicReverb();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//variables\\
	
	//Spawn values used for line casts\\

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Spawn Info"))
	FCastSpawnValues DefaultSpawnValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Spawn Info"))
	USurfaceAbsorption* SurfaceAbsorptionValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Spawn Info"))
	TEnumAsByte<ECollisionChannel> TraceChannel = ECollisionChannel::COLLISION_AUDIOREVERB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Spawn Info"))
	FVector Offset;

	UPROPERTY()
	AActor* ReverbController = nullptr;

	FCollisionQueryParams Params;

	//Horizontal Angles used in creating line casts\\

	UPROPERTY(VisibleAnywhere, meta = (Category = "Horizontal Angle Info"))
	TArray<FVector> RotationArray;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Horizontal Angle Info"))
	float HorizontalAngle = 0;

	UPROPERTY()
	TArray<float> HorizontalRadians;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Horizontal Angle Info"))
	TArray<float> HorizontalDegrees;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Horizontal Angle Info"))
	TArray<float> RoomAbosorptionValues;

	//Vertical angles used in casts\\

	UPROPERTY(VisibleAnywhere, meta = (Category = "Vertical Angle Info"))
	float VerticalAngle = 0;

	UPROPERTY()
	TArray<float> VerticalRadians;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Vertical Angle Info"))
	TArray<float> VerticalDegrees;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Vertical Angle Info"))
	TArray<float> VerticalCastLengths;

	//Info from the hits\\

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Category = "Hit Info"))
	TArray<float> HorizontalCastLengths;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NewAbsorptionValues;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float OldAbsorptionValues;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NormalizedHorizSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NonNormalizedHorizSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NormalizedVertSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NonNormalizedVertSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float AssumedRoomSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float NormalizedRoomSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float MaxRoomSize = 0;

	UPROPERTY(VisibleAnywhere, meta = (Category = "Hit Info"))
	float OldRoomSize;

	//UsableValues\\

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Category = "Hit Info"))
	float RoomSize = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (Category = "Hit Info"))
	float AbsorptionValue = 0;

	//Misc Values\\

	UPROPERTY()
	bool bPlayerMoved = true;

	UPROPERTY()
	FVector2D RoomSizeRange;

	//set as true for testing
	UPROPERTY(EditAnywhere, BlueprintReadWrite(Category = "Horizontal Angle Info"))
	bool Debug = true;

	UPROPERTY()
	FVector StartingLocation;

	UPROPERTY()
	FVector EndingLocation;

	UPROPERTY()
	FTimerHandle PulseHandle;

	UPROPERTY()
	bool bInitalTrigger = true;

	FVector HitPoint;
	FHitResult HitResult;

	UPROPERTY()
	float PulseLength;

	UPROPERTY()
	FVector OldPulseLocation;

	//functions\\

	UFUNCTION(BlueprintCallable)
	void StopPulses();

	UFUNCTION(BlueprintCallable)
	void ResumePulses();

	UFUNCTION(BlueprintCallable)
	void SetLineAngles(int NumHorizLines, int NumVertLines);

	UFUNCTION(BlueprintCallable)
	void TriggerCasts();

	UFUNCTION()
	FVector2D AverageArrayValues(TArray<float> FloatArray, FVector2D NonNoramlRange, bool ProxCheck, float lowestValue);

	UFUNCTION()
	void CastHorizontalLines();

	UFUNCTION()
	void CastVerticalLines();

	//value one is TempAbsorb value, value two is hit length
	//CastDirection t = Horizontal, f = Vertical
	UFUNCTION()
	FVector2D CastGrabber(bool CastHit, bool CastDirection);

	UFUNCTION()
	void DebugCast(bool TraceHit, UWorld* World, float HitAbsorptionVal, float Hitdistance);
	
	UFUNCTION()
	void PulseTimelineFloat(float Alpha);

	UFUNCTION()
	void PusleTimelineOnEnd();

	UTimelineComponent* PulseLerpTimeline;

	//Declare timeline delegates
	//FTimeline PulseLerpTimeLine;

private:

		


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
