// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicReverb/Public/DynamicReverbData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicReverbData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DYNAMICREVERB_API UClass* Z_Construct_UClass_USurfaceAbsorption();
DYNAMICREVERB_API UClass* Z_Construct_UClass_USurfaceAbsorption_NoRegister();
DYNAMICREVERB_API UScriptStruct* Z_Construct_UScriptStruct_FCastSpawnValues();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_DynamicReverb();
// End Cross Module References

// Begin Class USurfaceAbsorption
void USurfaceAbsorption::StaticRegisterNativesUSurfaceAbsorption()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurfaceAbsorption);
UClass* Z_Construct_UClass_USurfaceAbsorption_NoRegister()
{
	return USurfaceAbsorption::StaticClass();
}
struct Z_Construct_UClass_USurfaceAbsorption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DynamicReverbData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeightValue_MetaData[] = {
		{ "Category", "SurfaceAbsorption" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "MIMax", "1" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValues_MetaData[] = {
		{ "Category", "SurfaceAbsorption" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "MIMax", "1" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWeightValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionValues_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbsorptionValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbsorptionValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurfaceAbsorption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_DefaultWeightValue = { "DefaultWeightValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurfaceAbsorption, DefaultWeightValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeightValue_MetaData), NewProp_DefaultWeightValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues_ValueProp = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues_Key_KeyProp = { "AbsorptionValues_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurfaceAbsorption, AbsorptionValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionValues_MetaData), NewProp_AbsorptionValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurfaceAbsorption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_DefaultWeightValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceAbsorption_Statics::NewProp_AbsorptionValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceAbsorption_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USurfaceAbsorption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicReverb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceAbsorption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USurfaceAbsorption_Statics::ClassParams = {
	&USurfaceAbsorption::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USurfaceAbsorption_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceAbsorption_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceAbsorption_Statics::Class_MetaDataParams), Z_Construct_UClass_USurfaceAbsorption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USurfaceAbsorption()
{
	if (!Z_Registration_Info_UClass_USurfaceAbsorption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurfaceAbsorption.OuterSingleton, Z_Construct_UClass_USurfaceAbsorption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USurfaceAbsorption.OuterSingleton;
}
template<> DYNAMICREVERB_API UClass* StaticClass<USurfaceAbsorption>()
{
	return USurfaceAbsorption::StaticClass();
}
USurfaceAbsorption::USurfaceAbsorption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USurfaceAbsorption);
USurfaceAbsorption::~USurfaceAbsorption() {}
// End Class USurfaceAbsorption

// Begin ScriptStruct FCastSpawnValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastSpawnValues;
class UScriptStruct* FCastSpawnValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastSpawnValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastSpawnValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastSpawnValues, (UObject*)Z_Construct_UPackage__Script_DynamicReverb(), TEXT("CastSpawnValues"));
	}
	return Z_Registration_Info_UScriptStruct_CastSpawnValues.OuterSingleton;
}
template<> DYNAMICREVERB_API UScriptStruct* StaticStruct<FCastSpawnValues>()
{
	return FCastSpawnValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastSpawnValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHorizontalCasts_MetaData[] = {
		{ "Category", "Horizontal Casts" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//replaced with float curve length\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = \"Pulse Manager\"))\n//float PulseTime = 0.5f;\n" },
#endif
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "replaced with float curve length\nUPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = \"Pulse Manager\"))\nfloat PulseTime = 0.5f;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalCasts_MetaData[] = {
		{ "Category", "Horizontal Casts" },
		{ "ClampMax", "360" },
		{ "ClampMin", "3" },
		{ "EditCondition", "bUseHorizontalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
		{ "UIMax", "360" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHorizontalDrawDistance_MetaData[] = {
		{ "Category", "Horizontal Casts" },
		{ "EditCondition", "bUseHorizontalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVerticalCasts_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCasts_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "ClampMax", "360" },
		{ "ClampMin", "3" },
		{ "EditCondition", "bUseHorizontalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
		{ "UIMax", "360" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalDrawDistance_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "EditCondition", "bUseVerticalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDistanceFromPlayer_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "EditCondition", "bUseVerticalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateDistanceToPlayer_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "EditCondition", "bUseVerticalCasts" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDistanceEffector_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "EditCondition", "bUpdateDistanceToPlayer" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDistanceEffected_MetaData[] = {
		{ "Category", "Vertical Casts" },
		{ "EditCondition", "bUpdateDistanceToPlayer" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHorizontalValue_MetaData[] = {
		{ "Category", "Minimum value" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVerticalValue_MetaData[] = {
		{ "Category", "Minimum value" },
		{ "ModuleRelativePath", "Public/DynamicReverbData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseHorizontalCasts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHorizontalCasts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalCasts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHorizontalDrawDistance;
	static void NewProp_bUseVerticalCasts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVerticalCasts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalCasts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalDistanceFromPlayer;
	static void NewProp_bUpdateDistanceToPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateDistanceToPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalDistanceEffector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalDistanceEffected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHorizontalValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVerticalValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastSpawnValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseHorizontalCasts_SetBit(void* Obj)
{
	((FCastSpawnValues*)Obj)->bUseHorizontalCasts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseHorizontalCasts = { "bUseHorizontalCasts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCastSpawnValues), &Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseHorizontalCasts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHorizontalCasts_MetaData), NewProp_bUseHorizontalCasts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_HorizontalCasts = { "HorizontalCasts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, HorizontalCasts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalCasts_MetaData), NewProp_HorizontalCasts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MaxHorizontalDrawDistance = { "MaxHorizontalDrawDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, MaxHorizontalDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHorizontalDrawDistance_MetaData), NewProp_MaxHorizontalDrawDistance_MetaData) };
void Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseVerticalCasts_SetBit(void* Obj)
{
	((FCastSpawnValues*)Obj)->bUseVerticalCasts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseVerticalCasts = { "bUseVerticalCasts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCastSpawnValues), &Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseVerticalCasts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVerticalCasts_MetaData), NewProp_bUseVerticalCasts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalCasts = { "VerticalCasts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, VerticalCasts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalCasts_MetaData), NewProp_VerticalCasts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MaxVerticalDrawDistance = { "MaxVerticalDrawDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, MaxVerticalDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalDrawDistance_MetaData), NewProp_MaxVerticalDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceFromPlayer = { "VerticalDistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, VerticalDistanceFromPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDistanceFromPlayer_MetaData), NewProp_VerticalDistanceFromPlayer_MetaData) };
void Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUpdateDistanceToPlayer_SetBit(void* Obj)
{
	((FCastSpawnValues*)Obj)->bUpdateDistanceToPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUpdateDistanceToPlayer = { "bUpdateDistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCastSpawnValues), &Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUpdateDistanceToPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateDistanceToPlayer_MetaData), NewProp_bUpdateDistanceToPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceEffector = { "VerticalDistanceEffector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, VerticalDistanceEffector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDistanceEffector_MetaData), NewProp_VerticalDistanceEffector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceEffected = { "VerticalDistanceEffected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, VerticalDistanceEffected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDistanceEffected_MetaData), NewProp_VerticalDistanceEffected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MinHorizontalValue = { "MinHorizontalValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, MinHorizontalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHorizontalValue_MetaData), NewProp_MinHorizontalValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MinVerticalValue = { "MinVerticalValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastSpawnValues, MinVerticalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVerticalValue_MetaData), NewProp_MinVerticalValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastSpawnValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseHorizontalCasts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_HorizontalCasts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MaxHorizontalDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUseVerticalCasts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalCasts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MaxVerticalDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_bUpdateDistanceToPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceEffector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_VerticalDistanceEffected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MinHorizontalValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewProp_MinVerticalValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastSpawnValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastSpawnValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicReverb,
	nullptr,
	&NewStructOps,
	"CastSpawnValues",
	Z_Construct_UScriptStruct_FCastSpawnValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastSpawnValues_Statics::PropPointers),
	sizeof(FCastSpawnValues),
	alignof(FCastSpawnValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastSpawnValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastSpawnValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastSpawnValues()
{
	if (!Z_Registration_Info_UScriptStruct_CastSpawnValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastSpawnValues.InnerSingleton, Z_Construct_UScriptStruct_FCastSpawnValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastSpawnValues.InnerSingleton;
}
// End ScriptStruct FCastSpawnValues

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCastSpawnValues::StaticStruct, Z_Construct_UScriptStruct_FCastSpawnValues_Statics::NewStructOps, TEXT("CastSpawnValues"), &Z_Registration_Info_UScriptStruct_CastSpawnValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastSpawnValues), 2956184418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USurfaceAbsorption, USurfaceAbsorption::StaticClass, TEXT("USurfaceAbsorption"), &Z_Registration_Info_UClass_USurfaceAbsorption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurfaceAbsorption), 2398094623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_1648987768(TEXT("/Script/DynamicReverb"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
