/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    GlobalVariable.h
    
Abstract:

  GUID for EFI (NVRAM) Variables. Defined in EFI 1.0.

--*/

#ifndef _GLOBAL_VARIABLE_GUID_H_
#define _GLOBAL_VARIABLE_GUID_H_

#define EFI_GLOBAL_VARIABLE_GUID \
  { \
    0x8BE4DF61, 0x93CA, 0x11d2, {0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C} \
  }

extern EFI_GUID gEfiGlobalVariableGuid;

#endif
