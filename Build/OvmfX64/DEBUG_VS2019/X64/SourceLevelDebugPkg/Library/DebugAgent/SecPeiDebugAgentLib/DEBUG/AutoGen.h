/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_508B7D59_CD4E_4a6b_A45B_6D3B2D90111E
#define _AUTOGENH_508B7D59_CD4E_4a6b_A45B_6D3B2D90111E

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiDebugAgentGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiSourceLevelDebugPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiVectorHandoffInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFSBClock  9U
#define _PCD_GET_MODE_32_PcdFSBClock  LibPcdGet32(_PCD_TOKEN_PcdFSBClock)
#define _PCD_GET_MODE_SIZE_PcdFSBClock  LibPcdGetSize(_PCD_TOKEN_PcdFSBClock)
#define _PCD_SET_MODE_32_PcdFSBClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdFSBClock, (Value))
#define _PCD_SET_MODE_32_S_PcdFSBClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFSBClock, (Value))
#define _PCD_TOKEN_PcdExceptionsIgnoredByDebugger  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdExceptionsIgnoredByDebugger;
#define _PCD_GET_MODE_32_PcdExceptionsIgnoredByDebugger  _gPcd_FixedAtBuild_PcdExceptionsIgnoredByDebugger
//#define _PCD_SET_MODE_32_PcdExceptionsIgnoredByDebugger  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdExceptionsIgnoredByDebugger 0x00000000
#define _PCD_SIZE_PcdExceptionsIgnoredByDebugger 4
#define _PCD_GET_MODE_SIZE_PcdExceptionsIgnoredByDebugger _PCD_SIZE_PcdExceptionsIgnoredByDebugger
#define _PCD_TOKEN_PcdDebugPortHandleBufferSize  0U
extern const UINT16 _gPcd_FixedAtBuild_PcdDebugPortHandleBufferSize;
#define _PCD_GET_MODE_16_PcdDebugPortHandleBufferSize  _gPcd_FixedAtBuild_PcdDebugPortHandleBufferSize
//#define _PCD_SET_MODE_16_PcdDebugPortHandleBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDebugPortHandleBufferSize 0x0
#define _PCD_SIZE_PcdDebugPortHandleBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdDebugPortHandleBufferSize _PCD_SIZE_PcdDebugPortHandleBufferSize
#define _PCD_TOKEN_PcdTransferProtocolRevision  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdTransferProtocolRevision;
#define _PCD_GET_MODE_32_PcdTransferProtocolRevision  _gPcd_FixedAtBuild_PcdTransferProtocolRevision
//#define _PCD_SET_MODE_32_PcdTransferProtocolRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTransferProtocolRevision 0x00000004
#define _PCD_SIZE_PcdTransferProtocolRevision 4
#define _PCD_GET_MODE_SIZE_PcdTransferProtocolRevision _PCD_SIZE_PcdTransferProtocolRevision


#ifdef __cplusplus
}
#endif

#endif