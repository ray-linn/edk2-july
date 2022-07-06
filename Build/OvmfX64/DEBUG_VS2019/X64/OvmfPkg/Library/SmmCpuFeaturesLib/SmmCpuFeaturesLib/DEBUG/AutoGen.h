/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AC9991BE_D77A_464C_A8DE_A873DB8A4836
#define _AUTOGENH_AC9991BE_D77A_464C_A8DE_A873DB8A4836

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  12U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_TOKEN_PcdCpuHotEjectDataAddress  45U
#define _PCD_GET_MODE_64_PcdCpuHotEjectDataAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuHotEjectDataAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuHotEjectDataAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuHotEjectDataAddress)
#define _PCD_SET_MODE_64_PcdCpuHotEjectDataAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuHotEjectDataAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuHotEjectDataAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuHotEjectDataAddress, (Value))
#define _PCD_TOKEN_PcdQ35SmramAtDefaultSmbase  22U
#define _PCD_GET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase  LibPcdGetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_GET_MODE_SIZE_PcdQ35SmramAtDefaultSmbase  LibPcdGetSize(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_SET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))

EFI_STATUS
EFIAPI
SmmCpuFeaturesLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
