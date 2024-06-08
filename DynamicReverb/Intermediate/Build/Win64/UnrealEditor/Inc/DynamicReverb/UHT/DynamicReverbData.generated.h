// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicReverbData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICREVERB_DynamicReverbData_generated_h
#error "DynamicReverbData.generated.h already included, missing '#pragma once' in DynamicReverbData.h"
#endif
#define DYNAMICREVERB_DynamicReverbData_generated_h

#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurfaceAbsorption(); \
	friend struct Z_Construct_UClass_USurfaceAbsorption_Statics; \
public: \
	DECLARE_CLASS(USurfaceAbsorption, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicReverb"), NO_API) \
	DECLARE_SERIALIZER(USurfaceAbsorption)


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurfaceAbsorption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USurfaceAbsorption(USurfaceAbsorption&&); \
	USurfaceAbsorption(const USurfaceAbsorption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurfaceAbsorption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurfaceAbsorption); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurfaceAbsorption) \
	NO_API virtual ~USurfaceAbsorption();


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_13_PROLOG
#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICREVERB_API UClass* StaticClass<class USurfaceAbsorption>();

#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCastSpawnValues_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DYNAMICREVERB_API UScriptStruct* StaticStruct<struct FCastSpawnValues>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_DynamicReverb_Source_DynamicReverb_Public_DynamicReverbData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
