// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_DynamicReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef DYNAMICREVERB_AC_DynamicReverb_generated_h
#error "AC_DynamicReverb.generated.h already included, missing '#pragma once' in AC_DynamicReverb.h"
#endif
#define DYNAMICREVERB_AC_DynamicReverb_generated_h

#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPusleTimelineOnEnd); \
	DECLARE_FUNCTION(execPulseTimelineFloat); \
	DECLARE_FUNCTION(execDebugCast); \
	DECLARE_FUNCTION(execCastGrabber); \
	DECLARE_FUNCTION(execCastVerticalLines); \
	DECLARE_FUNCTION(execCastHorizontalLines); \
	DECLARE_FUNCTION(execAverageArrayValues); \
	DECLARE_FUNCTION(execTriggerCasts); \
	DECLARE_FUNCTION(execSetLineAngles); \
	DECLARE_FUNCTION(execResumePulses); \
	DECLARE_FUNCTION(execStopPulses);


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_DynamicReverb(); \
	friend struct Z_Construct_UClass_UAC_DynamicReverb_Statics; \
public: \
	DECLARE_CLASS(UAC_DynamicReverb, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicReverb"), NO_API) \
	DECLARE_SERIALIZER(UAC_DynamicReverb)


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAC_DynamicReverb(UAC_DynamicReverb&&); \
	UAC_DynamicReverb(const UAC_DynamicReverb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_DynamicReverb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_DynamicReverb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_DynamicReverb) \
	NO_API virtual ~UAC_DynamicReverb();


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_23_PROLOG
#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICREVERB_API UClass* StaticClass<class UAC_DynamicReverb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_AC_DynamicReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
