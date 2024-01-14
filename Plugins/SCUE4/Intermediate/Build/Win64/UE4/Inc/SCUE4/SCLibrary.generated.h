// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FSafeTransform;
struct FRotator;
struct FSafeRotator;
struct FLinearColor;
struct FSafeColor;
struct FVector4;
struct FSafeVector4D;
struct FVector;
struct FSafeVector3D;
struct FVector2D;
struct FSafeVector2D;
struct FSafeString;
struct FSafeText;
struct FSafeName;
struct FSafeFloat;
struct FSafeInt;
struct FSafeByte;
struct FSafeBool;
#ifdef SCUE4_SCLibrary_generated_h
#error "SCLibrary.generated.h already included, missing '#pragma once' in SCLibrary.h"
#endif
#define SCUE4_SCLibrary_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetTransformEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTransformNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTransformNotEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTransformEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTransformEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(Z_Param_Out_FST,Z_Param_Out_SST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformNotEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTransformEqualFST(Z_Param_Out_FST,Z_Param_Out_SST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(Z_Param_Out_FST,Z_Param_Out_SST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformEqualFST(Z_Param_Out_FST,Z_Param_Out_SST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorModFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorModFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorDivideFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorDivideFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorTimesFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorTimesFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorMinusFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorMinusFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorPlusFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorPlusFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetRotatorEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorSmallerEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorGreaterEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorSmallerFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorSmallerFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorGreaterFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorGreaterFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorNotEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorModRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorModRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorDivideRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorTimesRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorMinusRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorPlusRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeRotatorEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorNotEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorModFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorModFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorDivideFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorTimesFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorMinusFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorPlusFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorNotEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetColorEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetColorNotEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetColorNotEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetColorEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeColorEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeColorEqualColor(Z_Param_Out_FSC,Z_Param_Out_SSC,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorNotEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(Z_Param_Out_FSC,Z_Param_Out_NC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorEqualColor(Z_Param_Out_FSC,Z_Param_Out_NC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeColorEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorNotEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector4DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DModVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DDivideVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DTimesVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DMinusVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DPlusVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector4DEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DNotEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector3DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DModVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DDivideVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DTimesVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DMinusVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DPlusVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector3DEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DNotEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector2DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DModVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DDivideVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DTimesVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DMinusVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DPlusVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector2DEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DNotEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringPlusFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringPlusFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetStringEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCO_Pure_SetStringEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringSmallerFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringSmallerFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringGreaterFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringGreaterFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringNotEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringNotEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringPlusString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringPlusString(Z_Param_Out_FSS,Z_Param_Out_NS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeStringEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeStringEqualString(Z_Param_Out_FSS,Z_Param_Out_NS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringSmallerString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringSmallerString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringGreaterString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringGreaterString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringNotEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringNotEqualString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringEqualString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringPlusFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringPlusFSS(Z_Param_Out_FSS,Z_Param_Out_SS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeStringEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeStringEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringSmallerFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringGreaterFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringNotEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextPlusFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextPlusFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetTextEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCO_Pure_SetTextEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextSmallerFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextSmallerFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextGreaterFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextGreaterFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextNotEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextNotEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextPlusText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextPlusText(Z_Param_Out_FST,Z_Param_Out_NT,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTextEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTextEqualText(Z_Param_Out_FST,Z_Param_Out_NT,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextSmallerText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextSmallerText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextGreaterText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextGreaterText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextNotEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextNotEqualText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextEqualText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextPlusFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextPlusFST(Z_Param_Out_FST,Z_Param_Out_ST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTextEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTextEqualFST(Z_Param_Out_FST,Z_Param_Out_ST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextSmallerFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextSmallerFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextGreaterFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextGreaterFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextEqualFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNamePlusFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCO_Pure_GetNamePlusFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetNameEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCO_Pure_SetNameEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameSmallerFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameSmallerFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameGreaterFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameGreaterFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameNotEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameNotEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNamePlusName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNamePlusName(Z_Param_Out_FSN,Z_Param_Out_NN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeNameEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeNameEqualName(Z_Param_Out_FSN,Z_Param_Out_NN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameSmallerName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameSmallerName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameGreaterName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameGreaterName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameNotEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameNotEqualName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameEqualName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNamePlusFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNamePlusFSN(Z_Param_Out_FSN,Z_Param_Out_SSN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeNameEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeNameEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameSmallerFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameGreaterFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameNotEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatModFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatModFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatDivideFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatDivideFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatTimesFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatTimesFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatMinusFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatMinusFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatPlusFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatPlusFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetFloatEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_SetFloatEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatSmallerEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatGreaterEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatSmallerFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatSmallerFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatGreaterFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatGreaterFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatNotEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatNotEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatModFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatModFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDivideFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatTimesFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeFloatEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatNotEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatModFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatModFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDecreaseFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(Z_Param_Out_FSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatIncreaseFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(Z_Param_Out_FSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDivideFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatTimesFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeFloatEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatNotEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntShiftLFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntShiftLFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntShiftRFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntShiftRFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntXorFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntXorFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntOrFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntOrFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntAndFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntAndFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntModFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntModFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntDivideFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntDivideFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntTimesFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntTimesFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntMinusFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntMinusFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntPlusFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntPlusFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetIntEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_SetIntEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntSmallerEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntGreaterEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntSmallerFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntSmallerFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntGreaterFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntGreaterFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntNotEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntNotEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftLInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftLInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftRInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftRInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntXorInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntXorInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntOrInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntOrInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntAndInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntAndInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntModInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntModInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotInt) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotInt(Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDivideInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDivideInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntTimesInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntTimesInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeIntEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeIntEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftLFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftRFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntXorFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntXorFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntOrFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntOrFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntAndFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntAndFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntModFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntModFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDecreaseFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntIncreaseFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDivideFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDivideFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntTimesFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntTimesFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeIntEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeIntEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteShiftLFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteShiftLFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteShiftRFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteShiftRFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteXorFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteXorFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteOrFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteOrFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteAndFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteAndFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteModFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteModFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteDivideFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteDivideFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteTimesFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteTimesFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteMinusFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteMinusFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBytePlusFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetBytePlusFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetByteEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_SetByteEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteSmallerEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteGreaterEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteSmallerFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteSmallerFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteGreaterFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteGreaterFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteNotEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteNotEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftLByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftLByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftRByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftRByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteXorByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteXorByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteOrByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteOrByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteAndByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteAndByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteModByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteModByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotByte) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotByte(Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDivideByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDivideByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteTimesByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteTimesByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeByteEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeByteEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftLFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftRFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteXorFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteXorFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteOrFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteOrFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteAndFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteAndFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteModFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteModFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDecreaseFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteIncreaseFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDivideFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDivideFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteTimesFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteTimesFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeByteEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeByteEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolOrFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolOrFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolAndFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolAndFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolNotEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolNotEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetBoolEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_SetBoolEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolOrBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolOrBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolAndBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolAndBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolNotEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeBoolEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeBoolEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolOrFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolOrFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolAndFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolAndFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolNotEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeBoolEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTransform(Z_Param_Out_ST,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTransform(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeColor(Z_Param_Out_SC,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeColor(Z_Param_Out_SC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeRotator(Z_Param_Out_SR,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeRotator(Z_Param_Out_SR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector4D(Z_Param_Out_SV,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector4D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector3D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector3D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector2D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector2D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTransform(Z_Param_Out_ST,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTransform(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeRotator(Z_Param_Out_SR,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeRotator(Z_Param_Out_SR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeColor(Z_Param_Out_SC,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeColor(Z_Param_Out_SC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector4D(Z_Param_Out_SV,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector4D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector3D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector3D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector2D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector2D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetTransformEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTransformNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTransformNotEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTransformEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTransformEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(Z_Param_Out_FST,Z_Param_Out_SST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformNotEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformEqualTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeTransform*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTransformEqualFST(Z_Param_Out_FST,Z_Param_Out_SST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(Z_Param_Out_FST,Z_Param_Out_SST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTransformEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_SST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTransformEqualFST(Z_Param_Out_FST,Z_Param_Out_SST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorModFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorModFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorDivideFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorDivideFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorTimesFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorTimesFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorMinusFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorMinusFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorPlusFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorPlusFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetRotatorEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorSmallerEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorGreaterEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorSmallerFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorSmallerFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorGreaterFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorGreaterFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorNotEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetRotatorEqualFSR(Z_Param_Out_NR,Z_Param_Out_FSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorModRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorModRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorDivideRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorTimesRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorMinusRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorPlusRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeRotatorEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorNotEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorEqualRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(Z_Param_Out_FSR,Z_Param_Out_NR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorModFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorModFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorDivideFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorTimesFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorMinusFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorPlusFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeRotator*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorSmallerFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorGreaterFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorNotEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeRotatorEqualFSR) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_FSR); \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SSR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(Z_Param_Out_FSR,Z_Param_Out_SSR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetColorEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetColorNotEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetColorNotEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetColorEqualFSC(Z_Param_Out_NC,Z_Param_Out_FSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeColorEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeColorEqualColor(Z_Param_Out_FSC,Z_Param_Out_SSC,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorNotEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(Z_Param_Out_FSC,Z_Param_Out_NC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorEqualColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorEqualColor(Z_Param_Out_FSC,Z_Param_Out_NC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeColor*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeColorEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorNotEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeColorEqualFSC) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_FSC); \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SSC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeColorEqualFSC(Z_Param_Out_FSC,Z_Param_Out_SSC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector4DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector4DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DModVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DDivideVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DTimesVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DMinusVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DPlusVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector4DEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DNotEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DEqualVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector4D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector4DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector3DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector3DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DModVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DDivideVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DTimesVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DMinusVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DPlusVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector3DEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DNotEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DEqualVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector3D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector3DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DModFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DModFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DDivideFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DTimesFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DMinusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DPlusFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetVector2DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DSmallerFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DGreaterFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetVector2DEqualFSV(Z_Param_Out_NV,Z_Param_Out_FSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DModVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DDivideVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DTimesVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DMinusVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DPlusVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector2DEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DNotEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DEqualVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(Z_Param_Out_FSV,Z_Param_Out_NV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DModFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DModFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DDivideFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DTimesFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DMinusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DPlusFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeVector2D*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DSmallerFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DGreaterFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DNotEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeVector2DEqualFSV) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_FSV); \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(Z_Param_Out_FSV,Z_Param_Out_SSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringPlusFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringPlusFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetStringEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCO_Pure_SetStringEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringSmallerFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringSmallerFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringGreaterFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringGreaterFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringNotEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringNotEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetStringEqualFSS) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetStringEqualFSS(Z_Param_Out_NS,Z_Param_Out_FSS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringPlusString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringPlusString(Z_Param_Out_FSS,Z_Param_Out_NS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeStringEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeStringEqualString(Z_Param_Out_FSS,Z_Param_Out_NS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringSmallerString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringSmallerString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringGreaterString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringGreaterString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringNotEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringNotEqualString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringEqualString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_NS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringEqualString(Z_Param_Out_FSS,Z_Param_Out_NS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringPlusFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringPlusFSS(Z_Param_Out_FSS,Z_Param_Out_SS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeStringEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeString*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeStringEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringSmallerFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringGreaterFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringNotEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeStringEqualFSS) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_FSS); \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeStringEqualFSS(Z_Param_Out_FSS,Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextPlusFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextPlusFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetTextEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCO_Pure_SetTextEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextSmallerFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextSmallerFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextGreaterFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextGreaterFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextNotEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextNotEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetTextEqualFST) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetTextEqualFST(Z_Param_Out_NT,Z_Param_Out_FST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextPlusText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextPlusText(Z_Param_Out_FST,Z_Param_Out_NT,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTextEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTextEqualText(Z_Param_Out_FST,Z_Param_Out_NT,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextSmallerText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextSmallerText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextGreaterText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextGreaterText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextNotEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextNotEqualText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextEqualText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextEqualText(Z_Param_Out_FST,Z_Param_Out_NT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextPlusFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextPlusFST(Z_Param_Out_FST,Z_Param_Out_ST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeTextEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeText*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeTextEqualFST(Z_Param_Out_FST,Z_Param_Out_ST,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextSmallerFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextSmallerFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextGreaterFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextGreaterFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextNotEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeTextEqualFST) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_FST); \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeTextEqualFST(Z_Param_Out_FST,Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNamePlusFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCO_Pure_GetNamePlusFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetNameEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCO_Pure_SetNameEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameSmallerFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameSmallerFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameGreaterFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameGreaterFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameNotEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameNotEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetNameEqualFSN) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetNameEqualFSN(Z_Param_Out_NN,Z_Param_Out_FSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNamePlusName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNamePlusName(Z_Param_Out_FSN,Z_Param_Out_NN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeNameEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeNameEqualName(Z_Param_Out_FSN,Z_Param_Out_NN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameSmallerName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameSmallerName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameGreaterName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameGreaterName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameNotEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameNotEqualName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameEqualName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameEqualName(Z_Param_Out_FSN,Z_Param_Out_NN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNamePlusFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNamePlusFSN(Z_Param_Out_FSN,Z_Param_Out_SSN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeNameEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeName*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeNameEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameSmallerFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameGreaterFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameNotEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeNameEqualFSN) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_FSN); \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeNameEqualFSN(Z_Param_Out_FSN,Z_Param_Out_SSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatModFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatModFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatDivideFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatDivideFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatTimesFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatTimesFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatMinusFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatMinusFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatPlusFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatPlusFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetFloatEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCO_Pure_SetFloatEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatSmallerEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatGreaterEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatSmallerFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatSmallerFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatGreaterFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatGreaterFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatNotEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatNotEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetFloatEqualFSF) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetFloatEqualFSF(Z_Param_Out_NF,Z_Param_Out_FSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatModFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatModFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDivideFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatTimesFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeFloatEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatNotEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatEqualFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(Z_Param_Out_FSF,Z_Param_Out_NF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatModFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatModFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDecreaseFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(Z_Param_Out_FSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatIncreaseFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(Z_Param_Out_FSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatDivideFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatTimesFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatMinusFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatPlusFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeFloatEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeFloat*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatSmallerFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatGreaterFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatNotEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeFloatEqualFSF) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_FSF); \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SSF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(Z_Param_Out_FSF,Z_Param_Out_SSF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntShiftLFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntShiftLFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntShiftRFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntShiftRFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntXorFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntXorFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntOrFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntOrFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntAndFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntAndFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntModFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntModFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntDivideFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntDivideFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntTimesFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntTimesFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntMinusFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntMinusFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntPlusFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntPlusFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetIntEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCO_Pure_SetIntEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntSmallerEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntGreaterEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntSmallerFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntSmallerFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntGreaterFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntGreaterFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntNotEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntNotEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetIntEqualFSI) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetIntEqualFSI(Z_Param_Out_NI,Z_Param_Out_FSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftLInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftLInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftRInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftRInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntXorInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntXorInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntOrInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntOrInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntAndInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntAndInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntModInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntModInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotInt) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotInt(Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDivideInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDivideInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntTimesInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntTimesInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeIntEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeIntEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntEqualInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntEqualInt(Z_Param_Out_FSI,Z_Param_Out_NI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftLFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntShiftRFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntXorFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntXorFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntOrFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntOrFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntAndFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntAndFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntModFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntModFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDecreaseFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntIncreaseFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(Z_Param_Out_FSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntDivideFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntDivideFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntTimesFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntTimesFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntMinusFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntMinusFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntPlusFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntPlusFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeIntEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeInt*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeIntEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntSmallerFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntGreaterFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntNotEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeIntEqualFSI) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_FSI); \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SSI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeIntEqualFSI(Z_Param_Out_FSI,Z_Param_Out_SSI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteShiftLFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteShiftLFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteShiftRFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteShiftRFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteXorFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteXorFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteOrFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteOrFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteAndFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteAndFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteModFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteModFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteDivideFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteDivideFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteTimesFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteTimesFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteMinusFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteMinusFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBytePlusFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_GetBytePlusFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetByteEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCO_Pure_SetByteEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteSmallerEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteGreaterEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteSmallerFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteSmallerFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteGreaterFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteGreaterFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteNotEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteNotEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetByteEqualFSB) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetByteEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftLByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftLByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftRByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftRByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteXorByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteXorByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteOrByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteOrByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteAndByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteAndByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteModByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteModByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotByte) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotByte(Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDivideByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDivideByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteTimesByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteTimesByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeByteEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeByteEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteEqualByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteEqualByte(Z_Param_Out_FSB,Z_Param_Out_NB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftLFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteShiftRFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteXorFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteXorFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteOrFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteOrFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteAndFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteAndFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteModFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteModFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDecreaseFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteIncreaseFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(Z_Param_Out_FSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteDivideFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteDivideFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteTimesFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteTimesFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteMinusFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteMinusFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBytePlusFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBytePlusFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeByteEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeByte*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeByteEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteSmallerFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteGreaterFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteNotEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeByteEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeByteEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolOrFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolOrFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolAndFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolAndFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolNotEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolNotEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetBoolEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_GetBoolEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetBoolEqualFSB) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCO_Pure_SetBoolEqualFSB(Z_Param_Out_NB,Z_Param_Out_FSB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolOrBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolOrBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolAndBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolAndBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolNotEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeBoolEqualBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_UBOOL_REF(Z_Param_Out_NB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeBoolEqualBool(Z_Param_Out_FSB,Z_Param_Out_NB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolOrFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolOrFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolAndFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolAndFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolNotEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_GetSafeBoolEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCO_Pure_SetSafeBoolEqualFSB) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_FSB); \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SSB); \
		P_GET_UBOOL_REF(Z_Param_Out_Output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSafeBool*)Z_Param__Result=USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(Z_Param_Out_FSB,Z_Param_Out_SSB,Z_Param_Out_Output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTransform(Z_Param_Out_ST,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTransform(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeColor(Z_Param_Out_SC,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeColor(Z_Param_Out_SC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeRotator(Z_Param_Out_SR,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeRotator(Z_Param_Out_SR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector4D(Z_Param_Out_SV,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector4D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector3D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector3D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeVector2D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeVector2D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_SetRawSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_SetRawSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Callable_GetSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Callable_GetRawSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Callable_GetRawSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTransform(Z_Param_Out_ST,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTransformWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTransformWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTransform) \
	{ \
		P_GET_STRUCT_REF(FSafeTransform,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTransform(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeRotator(Z_Param_Out_SR,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeRotatorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeRotatorWithKey(Z_Param_Out_SR,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeRotator) \
	{ \
		P_GET_STRUCT_REF(FSafeRotator,Z_Param_Out_SR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeRotator(Z_Param_Out_SR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeColor(Z_Param_Out_SC,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeColorWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeColorWithKey(Z_Param_Out_SC,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeColor) \
	{ \
		P_GET_STRUCT_REF(FSafeColor,Z_Param_Out_SC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeColor(Z_Param_Out_SC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector4D(Z_Param_Out_SV,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector4DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector4DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector4D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector4D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector4D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector3D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector3DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector3DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector3D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector3D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector3D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeVector2D(Z_Param_Out_SV,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector2DWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector2DWithKey(Z_Param_Out_SV,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeVector2D) \
	{ \
		P_GET_STRUCT_REF(FSafeVector2D,Z_Param_Out_SV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeVector2D(Z_Param_Out_SV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeText(Z_Param_Out_ST,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeTextWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeTextWithKey(Z_Param_Out_ST,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeText) \
	{ \
		P_GET_STRUCT_REF(FSafeText,Z_Param_Out_ST); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeText(Z_Param_Out_ST); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeString(Z_Param_Out_SS,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeStringWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeStringWithKey(Z_Param_Out_SS,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeString) \
	{ \
		P_GET_STRUCT_REF(FSafeString,Z_Param_Out_SS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeString(Z_Param_Out_SS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeName(Z_Param_Out_SN,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeNameWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeNameWithKey(Z_Param_Out_SN,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeName) \
	{ \
		P_GET_STRUCT_REF(FSafeName,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeName(Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeFloat(Z_Param_Out_SF,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeFloatWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeFloatWithKey(Z_Param_Out_SF,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeFloat) \
	{ \
		P_GET_STRUCT_REF(FSafeFloat,Z_Param_Out_SF); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeFloat(Z_Param_Out_SF); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeByte(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeByteWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeByteWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeByte) \
	{ \
		P_GET_STRUCT_REF(FSafeByte,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeByte(Z_Param_Out_SB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeInt(Z_Param_Out_SI,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeIntWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeIntWithKey(Z_Param_Out_SI,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeInt) \
	{ \
		P_GET_STRUCT_REF(FSafeInt,Z_Param_Out_SI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeInt(Z_Param_Out_SI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_SetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_SetSafeBool(Z_Param_Out_SB,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeBoolWithKey) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeBoolWithKey(Z_Param_Out_SB,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSCL_Pure_GetSafeBool) \
	{ \
		P_GET_STRUCT_REF(FSafeBool,Z_Param_Out_SB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USCLibrary::SCL_Pure_GetSafeBool(Z_Param_Out_SB); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSCLibrary(); \
	friend struct Z_Construct_UClass_USCLibrary_Statics; \
public: \
	DECLARE_CLASS(USCLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SCUE4"), NO_API) \
	DECLARE_SERIALIZER(USCLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSCLibrary(); \
	friend struct Z_Construct_UClass_USCLibrary_Statics; \
public: \
	DECLARE_CLASS(USCLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SCUE4"), NO_API) \
	DECLARE_SERIALIZER(USCLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USCLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCLibrary(USCLibrary&&); \
	NO_API USCLibrary(const USCLibrary&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USCLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCLibrary(USCLibrary&&); \
	NO_API USCLibrary(const USCLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_17_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCUE4_API UClass* StaticClass<class USCLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SCUE4_Source_SCUE4_Private_Blueprints_SCLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
