// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicReverbData.generated.h"
/**
 * 
 */



UCLASS(Blueprintable, BlueprintType)
class DYNAMICREVERB_API USurfaceAbsorption : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, meta = (UIMin = "0", ClampMin = "0", MIMax = "1", ClampMax = "1"))
	float DefaultWeightValue = 0.5f;

	UPROPERTY(EditAnywhere, meta = (UIMin = "0", ClampMin = "0", MIMax = "1", ClampMax = "1"))
	TMap<TWeakObjectPtr<UPhysicalMaterial>, float> AbsorptionValues;
};

USTRUCT(BlueprintType)
struct DYNAMICREVERB_API FCastSpawnValues
{
	GENERATED_BODY()

	//replaced with float curve length
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Pulse Manager"))
	//float PulseTime = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Horizontal Casts"))
	bool bUseHorizontalCasts = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "3", ClampMax = "360", UIMin = "3", UIMax = "360", Category = "Horizontal Casts", EditCondition = "bUseHorizontalCasts"))
	int HorizontalCasts = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Horizontal Casts", EditCondition = "bUseHorizontalCasts"))
	float MaxHorizontalDrawDistance = 3500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts"))
	bool bUseVerticalCasts = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "3", ClampMax = "360", UIMin = "3", UIMax = "360", Category = "Vertical Casts", EditCondition = "bUseHorizontalCasts"))
	int VerticalCasts = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts", EditCondition = "bUseVerticalCasts"))
	float MaxVerticalDrawDistance = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts", EditCondition = "bUseVerticalCasts"))
	float VerticalDistanceFromPlayer = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts", EditCondition = "bUseVerticalCasts"))
	bool bUpdateDistanceToPlayer = false;

	UPROPERTY(EditANywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts", EditCondition = "bUpdateDistanceToPlayer"))
	FVector2D VerticalDistanceEffector = { 500, 2000 };

	UPROPERTY(EditANywhere, BlueprintReadWrite, meta = (Category = "Vertical Casts", EditCondition = "bUpdateDistanceToPlayer"))
	FVector2D VerticalDistanceEffected = { 50, 200 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Curve"))
	UCurveFloat* FloatCurve = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Minimum value"))
	float MinHorizontalValue = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "Minimum value"))
	float MinVerticalValue = 100.f;
};

class DYNAMICREVERB_API DynamicReverbData
{
public:
	DynamicReverbData();
	~DynamicReverbData();
};
