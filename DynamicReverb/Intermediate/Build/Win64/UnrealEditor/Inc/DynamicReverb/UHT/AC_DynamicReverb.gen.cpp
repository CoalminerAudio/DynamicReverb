// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicReverb/Public/AC_DynamicReverb.h"
#include "DynamicReverb/Public/DynamicReverbData.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_DynamicReverb() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DYNAMICREVERB_API UClass* Z_Construct_UClass_UAC_DynamicReverb();
DYNAMICREVERB_API UClass* Z_Construct_UClass_UAC_DynamicReverb_NoRegister();
DYNAMICREVERB_API UClass* Z_Construct_UClass_USurfaceAbsorption_NoRegister();
DYNAMICREVERB_API UScriptStruct* Z_Construct_UScriptStruct_FCastSpawnValues();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_DynamicReverb();
// End Cross Module References

// Begin Class UAC_DynamicReverb Function AverageArrayValues
struct Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics
{
	struct AC_DynamicReverb_eventAverageArrayValues_Parms
	{
		TArray<float> FloatArray;
		FVector2D NonNoramlRange;
		bool ProxCheck;
		float lowestValue;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NonNoramlRange;
	static void NewProp_ProxCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProxCheck;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lowestValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventAverageArrayValues_Parms, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_NonNoramlRange = { "NonNoramlRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventAverageArrayValues_Parms, NonNoramlRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ProxCheck_SetBit(void* Obj)
{
	((AC_DynamicReverb_eventAverageArrayValues_Parms*)Obj)->ProxCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ProxCheck = { "ProxCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_DynamicReverb_eventAverageArrayValues_Parms), &Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ProxCheck_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_lowestValue = { "lowestValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventAverageArrayValues_Parms, lowestValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventAverageArrayValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_FloatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_FloatArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_NonNoramlRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ProxCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_lowestValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "AverageArrayValues", nullptr, nullptr, Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::AC_DynamicReverb_eventAverageArrayValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::AC_DynamicReverb_eventAverageArrayValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execAverageArrayValues)
{
	P_GET_TARRAY(float,Z_Param_FloatArray);
	P_GET_STRUCT(FVector2D,Z_Param_NonNoramlRange);
	P_GET_UBOOL(Z_Param_ProxCheck);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lowestValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->AverageArrayValues(Z_Param_FloatArray,Z_Param_NonNoramlRange,Z_Param_ProxCheck,Z_Param_lowestValue);
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function AverageArrayValues

// Begin Class UAC_DynamicReverb Function CastGrabber
struct Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics
{
	struct AC_DynamicReverb_eventCastGrabber_Parms
	{
		bool CastHit;
		bool CastDirection;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//value one is TempAbsorb value, value two is hit length\n//CastDirection t = Horizontal, f = Vertical\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "value one is TempAbsorb value, value two is hit length\nCastDirection t = Horizontal, f = Vertical" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_CastHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastHit;
	static void NewProp_CastDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastHit_SetBit(void* Obj)
{
	((AC_DynamicReverb_eventCastGrabber_Parms*)Obj)->CastHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastHit = { "CastHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_DynamicReverb_eventCastGrabber_Parms), &Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastDirection_SetBit(void* Obj)
{
	((AC_DynamicReverb_eventCastGrabber_Parms*)Obj)->CastDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastDirection = { "CastDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_DynamicReverb_eventCastGrabber_Parms), &Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventCastGrabber_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_CastDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "CastGrabber", nullptr, nullptr, Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::AC_DynamicReverb_eventCastGrabber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::AC_DynamicReverb_eventCastGrabber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execCastGrabber)
{
	P_GET_UBOOL(Z_Param_CastHit);
	P_GET_UBOOL(Z_Param_CastDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->CastGrabber(Z_Param_CastHit,Z_Param_CastDirection);
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function CastGrabber

// Begin Class UAC_DynamicReverb Function CastHorizontalLines
struct Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "CastHorizontalLines", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execCastHorizontalLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CastHorizontalLines();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function CastHorizontalLines

// Begin Class UAC_DynamicReverb Function CastVerticalLines
struct Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "CastVerticalLines", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execCastVerticalLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CastVerticalLines();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function CastVerticalLines

// Begin Class UAC_DynamicReverb Function DebugCast
struct Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics
{
	struct AC_DynamicReverb_eventDebugCast_Parms
	{
		bool TraceHit;
		UWorld* World;
		float HitAbsorptionVal;
		float Hitdistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static void NewProp_TraceHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitAbsorptionVal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hitdistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_TraceHit_SetBit(void* Obj)
{
	((AC_DynamicReverb_eventDebugCast_Parms*)Obj)->TraceHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_TraceHit = { "TraceHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_DynamicReverb_eventDebugCast_Parms), &Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_TraceHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventDebugCast_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_HitAbsorptionVal = { "HitAbsorptionVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventDebugCast_Parms, HitAbsorptionVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_Hitdistance = { "Hitdistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventDebugCast_Parms, Hitdistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_TraceHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_HitAbsorptionVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::NewProp_Hitdistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "DebugCast", nullptr, nullptr, Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::AC_DynamicReverb_eventDebugCast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::AC_DynamicReverb_eventDebugCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_DebugCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_DebugCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execDebugCast)
{
	P_GET_UBOOL(Z_Param_TraceHit);
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitAbsorptionVal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Hitdistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCast(Z_Param_TraceHit,Z_Param_World,Z_Param_HitAbsorptionVal,Z_Param_Hitdistance);
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function DebugCast

// Begin Class UAC_DynamicReverb Function PulseTimelineFloat
struct Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics
{
	struct AC_DynamicReverb_eventPulseTimelineFloat_Parms
	{
		float Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventPulseTimelineFloat_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "PulseTimelineFloat", nullptr, nullptr, Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::AC_DynamicReverb_eventPulseTimelineFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::AC_DynamicReverb_eventPulseTimelineFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execPulseTimelineFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PulseTimelineFloat(Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function PulseTimelineFloat

// Begin Class UAC_DynamicReverb Function PusleTimelineOnEnd
struct Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "PusleTimelineOnEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execPusleTimelineOnEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PusleTimelineOnEnd();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function PusleTimelineOnEnd

// Begin Class UAC_DynamicReverb Function ResumePulses
struct Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "ResumePulses", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execResumePulses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumePulses();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function ResumePulses

// Begin Class UAC_DynamicReverb Function SetLineAngles
struct Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics
{
	struct AC_DynamicReverb_eventSetLineAngles_Parms
	{
		int32 NumHorizLines;
		int32 NumVertLines;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHorizLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertLines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::NewProp_NumHorizLines = { "NumHorizLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventSetLineAngles_Parms, NumHorizLines), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::NewProp_NumVertLines = { "NumVertLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_DynamicReverb_eventSetLineAngles_Parms, NumVertLines), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::NewProp_NumHorizLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::NewProp_NumVertLines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "SetLineAngles", nullptr, nullptr, Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::AC_DynamicReverb_eventSetLineAngles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::AC_DynamicReverb_eventSetLineAngles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execSetLineAngles)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumHorizLines);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumVertLines);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineAngles(Z_Param_NumHorizLines,Z_Param_NumVertLines);
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function SetLineAngles

// Begin Class UAC_DynamicReverb Function StopPulses
struct Z_Construct_UFunction_UAC_DynamicReverb_StopPulses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//functions\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "functions\\\\" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_StopPulses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "StopPulses", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_StopPulses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_StopPulses_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_StopPulses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_StopPulses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execStopPulses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPulses();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function StopPulses

// Begin Class UAC_DynamicReverb Function TriggerCasts
struct Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_DynamicReverb, nullptr, "TriggerCasts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_DynamicReverb::execTriggerCasts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerCasts();
	P_NATIVE_END;
}
// End Class UAC_DynamicReverb Function TriggerCasts

// Begin Class UAC_DynamicReverb
void UAC_DynamicReverb::StaticRegisterNativesUAC_DynamicReverb()
{
	UClass* Class = UAC_DynamicReverb::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AverageArrayValues", &UAC_DynamicReverb::execAverageArrayValues },
		{ "CastGrabber", &UAC_DynamicReverb::execCastGrabber },
		{ "CastHorizontalLines", &UAC_DynamicReverb::execCastHorizontalLines },
		{ "CastVerticalLines", &UAC_DynamicReverb::execCastVerticalLines },
		{ "DebugCast", &UAC_DynamicReverb::execDebugCast },
		{ "PulseTimelineFloat", &UAC_DynamicReverb::execPulseTimelineFloat },
		{ "PusleTimelineOnEnd", &UAC_DynamicReverb::execPusleTimelineOnEnd },
		{ "ResumePulses", &UAC_DynamicReverb::execResumePulses },
		{ "SetLineAngles", &UAC_DynamicReverb::execSetLineAngles },
		{ "StopPulses", &UAC_DynamicReverb::execStopPulses },
		{ "TriggerCasts", &UAC_DynamicReverb::execTriggerCasts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_DynamicReverb);
UClass* Z_Construct_UClass_UAC_DynamicReverb_NoRegister()
{
	return UAC_DynamicReverb::StaticClass();
}
struct Z_Construct_UClass_UAC_DynamicReverb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_DynamicReverb.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnValues_MetaData[] = {
		{ "Category", "Spawn Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spawn values used for line casts\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn values used for line casts\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAbsorptionValues_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationArray_MetaData[] = {
		{ "Category", "Horizontal Angle Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Horizontal Angles used in creating line casts\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal Angles used in creating line casts\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAngle_MetaData[] = {
		{ "Category", "Horizontal Angle Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRadians_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalDegrees_MetaData[] = {
		{ "Category", "Horizontal Angle Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAbosorptionValues_MetaData[] = {
		{ "Category", "Horizontal Angle Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAngle_MetaData[] = {
		{ "Category", "Vertical Angle Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Vertical angles used in casts\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical angles used in casts\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRadians_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDegrees_MetaData[] = {
		{ "Category", "Vertical Angle Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCastLengths_MetaData[] = {
		{ "Category", "Vertical Angle Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalCastLengths_MetaData[] = {
		{ "Category", "Hit Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Info from the hits\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Info from the hits\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAbsorptionValues_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAbsorptionValues_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedHorizSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonNormalizedHorizSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedVertSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonNormalizedVertSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssumedRoomSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedRoomSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoomSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRoomSize_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[] = {
		{ "Category", "Hit Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UsableValues\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UsableValues\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValue_MetaData[] = {
		{ "Category", "Hit Info" },
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerMoved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Misc Values\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Misc Values\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSizeRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
		{ "Category", "AC_DynamicReverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set as true for testing\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set as true for testing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PulseHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitalTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PulseLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPulseLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AC_DynamicReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceAbsorptionValues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRadians_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalRadians;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalDegrees_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomAbosorptionValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomAbosorptionValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRadians_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VerticalRadians;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalDegrees_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VerticalDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalCastLengths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VerticalCastLengths;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalCastLengths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalCastLengths;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAbsorptionValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldAbsorptionValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedHorizSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonNormalizedHorizSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedVertSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonNormalizedVertSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AssumedRoomSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedRoomSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRoomSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldRoomSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionValue;
	static void NewProp_bPlayerMoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerMoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomSizeRange;
	static void NewProp_Debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Debug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PulseHandle;
	static void NewProp_bInitalTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitalTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PulseLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPulseLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_DynamicReverb_AverageArrayValues, "AverageArrayValues" }, // 3591121740
		{ &Z_Construct_UFunction_UAC_DynamicReverb_CastGrabber, "CastGrabber" }, // 3898197004
		{ &Z_Construct_UFunction_UAC_DynamicReverb_CastHorizontalLines, "CastHorizontalLines" }, // 852939763
		{ &Z_Construct_UFunction_UAC_DynamicReverb_CastVerticalLines, "CastVerticalLines" }, // 2848387463
		{ &Z_Construct_UFunction_UAC_DynamicReverb_DebugCast, "DebugCast" }, // 2229133992
		{ &Z_Construct_UFunction_UAC_DynamicReverb_PulseTimelineFloat, "PulseTimelineFloat" }, // 22587501
		{ &Z_Construct_UFunction_UAC_DynamicReverb_PusleTimelineOnEnd, "PusleTimelineOnEnd" }, // 655348500
		{ &Z_Construct_UFunction_UAC_DynamicReverb_ResumePulses, "ResumePulses" }, // 51039052
		{ &Z_Construct_UFunction_UAC_DynamicReverb_SetLineAngles, "SetLineAngles" }, // 2872752344
		{ &Z_Construct_UFunction_UAC_DynamicReverb_StopPulses, "StopPulses" }, // 417014777
		{ &Z_Construct_UFunction_UAC_DynamicReverb_TriggerCasts, "TriggerCasts" }, // 3142959046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_DynamicReverb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_DefaultSpawnValues = { "DefaultSpawnValues", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, DefaultSpawnValues), Z_Construct_UScriptStruct_FCastSpawnValues, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpawnValues_MetaData), NewProp_DefaultSpawnValues_MetaData) }; // 2956184418
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_SurfaceAbsorptionValues = { "SurfaceAbsorptionValues", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, SurfaceAbsorptionValues), Z_Construct_UClass_USurfaceAbsorption_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceAbsorptionValues_MetaData), NewProp_SurfaceAbsorptionValues_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_ReverbController = { "ReverbController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, ReverbController), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbController_MetaData), NewProp_ReverbController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RotationArray_Inner = { "RotationArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RotationArray = { "RotationArray", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, RotationArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationArray_MetaData), NewProp_RotationArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalAngle = { "HorizontalAngle", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, HorizontalAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAngle_MetaData), NewProp_HorizontalAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalRadians_Inner = { "HorizontalRadians", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalRadians = { "HorizontalRadians", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, HorizontalRadians), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRadians_MetaData), NewProp_HorizontalRadians_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalDegrees_Inner = { "HorizontalDegrees", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalDegrees = { "HorizontalDegrees", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, HorizontalDegrees), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalDegrees_MetaData), NewProp_HorizontalDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomAbosorptionValues_Inner = { "RoomAbosorptionValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomAbosorptionValues = { "RoomAbosorptionValues", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, RoomAbosorptionValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAbosorptionValues_MetaData), NewProp_RoomAbosorptionValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalAngle = { "VerticalAngle", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, VerticalAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAngle_MetaData), NewProp_VerticalAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalRadians_Inner = { "VerticalRadians", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalRadians = { "VerticalRadians", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, VerticalRadians), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRadians_MetaData), NewProp_VerticalRadians_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalDegrees_Inner = { "VerticalDegrees", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalDegrees = { "VerticalDegrees", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, VerticalDegrees), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDegrees_MetaData), NewProp_VerticalDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalCastLengths_Inner = { "VerticalCastLengths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalCastLengths = { "VerticalCastLengths", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, VerticalCastLengths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalCastLengths_MetaData), NewProp_VerticalCastLengths_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalCastLengths_Inner = { "HorizontalCastLengths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalCastLengths = { "HorizontalCastLengths", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, HorizontalCastLengths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalCastLengths_MetaData), NewProp_HorizontalCastLengths_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NewAbsorptionValues = { "NewAbsorptionValues", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NewAbsorptionValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAbsorptionValues_MetaData), NewProp_NewAbsorptionValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldAbsorptionValues = { "OldAbsorptionValues", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, OldAbsorptionValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAbsorptionValues_MetaData), NewProp_OldAbsorptionValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedHorizSize = { "NormalizedHorizSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NormalizedHorizSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedHorizSize_MetaData), NewProp_NormalizedHorizSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NonNormalizedHorizSize = { "NonNormalizedHorizSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NonNormalizedHorizSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonNormalizedHorizSize_MetaData), NewProp_NonNormalizedHorizSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedVertSize = { "NormalizedVertSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NormalizedVertSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedVertSize_MetaData), NewProp_NormalizedVertSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NonNormalizedVertSize = { "NonNormalizedVertSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NonNormalizedVertSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonNormalizedVertSize_MetaData), NewProp_NonNormalizedVertSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_AssumedRoomSize = { "AssumedRoomSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, AssumedRoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssumedRoomSize_MetaData), NewProp_AssumedRoomSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedRoomSize = { "NormalizedRoomSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, NormalizedRoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedRoomSize_MetaData), NewProp_NormalizedRoomSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_MaxRoomSize = { "MaxRoomSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, MaxRoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRoomSize_MetaData), NewProp_MaxRoomSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldRoomSize = { "OldRoomSize", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, OldRoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRoomSize_MetaData), NewProp_OldRoomSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, RoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSize_MetaData), NewProp_RoomSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_AbsorptionValue = { "AbsorptionValue", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, AbsorptionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionValue_MetaData), NewProp_AbsorptionValue_MetaData) };
void Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bPlayerMoved_SetBit(void* Obj)
{
	((UAC_DynamicReverb*)Obj)->bPlayerMoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bPlayerMoved = { "bPlayerMoved", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_DynamicReverb), &Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bPlayerMoved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerMoved_MetaData), NewProp_bPlayerMoved_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomSizeRange = { "RoomSizeRange", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, RoomSizeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSizeRange_MetaData), NewProp_RoomSizeRange_MetaData) };
void Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Debug_SetBit(void* Obj)
{
	((UAC_DynamicReverb*)Obj)->Debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_DynamicReverb), &Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MetaData), NewProp_Debug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingLocation_MetaData), NewProp_StartingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_EndingLocation = { "EndingLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, EndingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingLocation_MetaData), NewProp_EndingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_PulseHandle = { "PulseHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, PulseHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PulseHandle_MetaData), NewProp_PulseHandle_MetaData) }; // 756291145
void Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bInitalTrigger_SetBit(void* Obj)
{
	((UAC_DynamicReverb*)Obj)->bInitalTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bInitalTrigger = { "bInitalTrigger", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_DynamicReverb), &Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bInitalTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitalTrigger_MetaData), NewProp_bInitalTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_PulseLength = { "PulseLength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, PulseLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PulseLength_MetaData), NewProp_PulseLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldPulseLocation = { "OldPulseLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_DynamicReverb, OldPulseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPulseLocation_MetaData), NewProp_OldPulseLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_DynamicReverb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_DefaultSpawnValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_SurfaceAbsorptionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_ReverbController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RotationArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RotationArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalRadians_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalDegrees_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomAbosorptionValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomAbosorptionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalRadians_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalDegrees_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalCastLengths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_VerticalCastLengths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalCastLengths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_HorizontalCastLengths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NewAbsorptionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldAbsorptionValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedHorizSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NonNormalizedHorizSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedVertSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NonNormalizedVertSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_AssumedRoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_NormalizedRoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_MaxRoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldRoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_AbsorptionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bPlayerMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_RoomSizeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_Debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_StartingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_EndingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_PulseHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_bInitalTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_PulseLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_DynamicReverb_Statics::NewProp_OldPulseLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_DynamicReverb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAC_DynamicReverb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicReverb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_DynamicReverb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_DynamicReverb_Statics::ClassParams = {
	&UAC_DynamicReverb::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_DynamicReverb_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_DynamicReverb_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_DynamicReverb_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_DynamicReverb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAC_DynamicReverb()
{
	if (!Z_Registration_Info_UClass_UAC_DynamicReverb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_DynamicReverb.OuterSingleton, Z_Construct_UClass_UAC_DynamicReverb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_DynamicReverb.OuterSingleton;
}
template<> DYNAMICREVERB_API UClass* StaticClass<UAC_DynamicReverb>()
{
	return UAC_DynamicReverb::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_DynamicReverb);
UAC_DynamicReverb::~UAC_DynamicReverb() {}
// End Class UAC_DynamicReverb

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_DynamicReverb, UAC_DynamicReverb::StaticClass, TEXT("UAC_DynamicReverb"), &Z_Registration_Info_UClass_UAC_DynamicReverb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_DynamicReverb), 1828186644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_981072666(TEXT("/Script/DynamicReverb"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
