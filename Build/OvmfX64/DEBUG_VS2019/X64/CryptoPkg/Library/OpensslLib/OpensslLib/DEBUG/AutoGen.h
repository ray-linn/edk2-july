/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C873A7D0_9824_409f_9B42_2C158B992E69
#define _AUTOGENH_C873A7D0_9824_409f_9B42_2C158B992E69

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiCryptoPkgTokenSpaceGuid;

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


#ifdef __cplusplus
}
#endif

#endif
