/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_84EEA114_C6BE_4445_8F90_51D97863E363
#define _AUTOGENH_84EEA114_C6BE_4445_8F90_51D97863E363

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x84EEA114, 0xC6BE, 0x4445, {0x8F, 0x90, 0x51, 0xD9, 0x78, 0x63, 0xE3, 0x63}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;

// Protocols
extern EFI_GUID gEfiMmCpuIoProtocolGuid;
extern EFI_GUID gEfiSmmCpuServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiMmBaseProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSmmSmramRequire  0U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHotPlugDataAddress  41U
#define _PCD_GET_MODE_64_PcdCpuHotPlugDataAddress  LibPcdGet64(_PCD_TOKEN_PcdCpuHotPlugDataAddress)
#define _PCD_GET_MODE_SIZE_PcdCpuHotPlugDataAddress  LibPcdGetSize(_PCD_TOKEN_PcdCpuHotPlugDataAddress)
#define _PCD_SET_MODE_64_PcdCpuHotPlugDataAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuHotPlugDataAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuHotPlugDataAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuHotPlugDataAddress, (Value))

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

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CpuHotplugEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
