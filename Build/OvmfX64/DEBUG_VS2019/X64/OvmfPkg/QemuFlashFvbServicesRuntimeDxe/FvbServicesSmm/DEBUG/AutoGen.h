/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2E7DB7A7_608E_4041_B45F_00359E0766C6
#define _AUTOGENH_2E7DB7A7_608E_4041_B45F_00359E0766C6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2E7DB7A7, 0x608E, 0x4041, {0xB4, 0x5F, 0x00, 0x35, 0x9E, 0x07, 0x66, 0xC6}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiSmmFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x42000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase  _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageEventLogSize  0U
#define _PCD_SIZE_PcdOvmfFlashNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageEventLogSize  _PCD_SIZE_PcdOvmfFlashNvStorageEventLogSize 
#define _PCD_VALUE_PcdOvmfFlashNvStorageEventLogSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFdBaseAddress  0U
#define _PCD_SIZE_PcdOvmfFdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFdBaseAddress  _PCD_SIZE_PcdOvmfFdBaseAddress 
#define _PCD_VALUE_PcdOvmfFdBaseAddress  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress;
#define _PCD_GET_MODE_32_PcdOvmfFdBaseAddress  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress
//#define _PCD_SET_MODE_32_PcdOvmfFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFirmwareFdSize  0U
#define _PCD_SIZE_PcdOvmfFirmwareFdSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFirmwareFdSize  _PCD_SIZE_PcdOvmfFirmwareFdSize 
#define _PCD_VALUE_PcdOvmfFirmwareFdSize  0x00400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdOvmfFirmwareFdSize  _gPcd_FixedAtBuild_PcdOvmfFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdOvmfFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFirmwareBlockSize  0U
#define _PCD_SIZE_PcdOvmfFirmwareBlockSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFirmwareBlockSize  _PCD_SIZE_PcdOvmfFirmwareBlockSize 
#define _PCD_VALUE_PcdOvmfFirmwareBlockSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFirmwareBlockSize;
#define _PCD_GET_MODE_32_PcdOvmfFirmwareBlockSize  _gPcd_FixedAtBuild_PcdOvmfFirmwareBlockSize
//#define _PCD_SET_MODE_32_PcdOvmfFirmwareBlockSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmmSmramRequire  0U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashVariablesEnable  47U
#define _PCD_GET_MODE_BOOL_PcdOvmfFlashVariablesEnable  LibPcdGetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashVariablesEnable  LibPcdGetSize(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_SET_MODE_BOOL_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FvbInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
