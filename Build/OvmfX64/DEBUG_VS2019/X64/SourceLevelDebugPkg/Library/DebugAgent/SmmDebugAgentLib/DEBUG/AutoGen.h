/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CB07D74C_598F_4268_A5D1_644FB4A481E8
#define _AUTOGENH_CB07D74C_598F_4268_A5D1_644FB4A481E8

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiDebugAgentGuid;
extern EFI_GUID gEfiVectorHandoffTableGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiSourceLevelDebugPkgTokenSpaceGuid;

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
#define _PCD_VALUE_PcdExceptionsIgnoredByDebugger 0x00004000
#define _PCD_SIZE_PcdExceptionsIgnoredByDebugger 4
#define _PCD_GET_MODE_SIZE_PcdExceptionsIgnoredByDebugger _PCD_SIZE_PcdExceptionsIgnoredByDebugger
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
