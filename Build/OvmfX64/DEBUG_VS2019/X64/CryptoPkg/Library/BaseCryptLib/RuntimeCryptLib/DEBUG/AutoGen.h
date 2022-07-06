/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_78189cc0_727d_46a4_84ea_f7dd860de64a
#define _AUTOGENH_78189cc0_727d_46a4_84ea_f7dd860de64a

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiCryptoPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOpensslEcEnabled  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdOpensslEcEnabled;
#define _PCD_GET_MODE_BOOL_PcdOpensslEcEnabled  _gPcd_FixedAtBuild_PcdOpensslEcEnabled
//#define _PCD_SET_MODE_BOOL_PcdOpensslEcEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOpensslEcEnabled 1
#define _PCD_SIZE_PcdOpensslEcEnabled 1
#define _PCD_GET_MODE_SIZE_PcdOpensslEcEnabled _PCD_SIZE_PcdOpensslEcEnabled

EFI_STATUS
EFIAPI
RuntimeCryptLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
