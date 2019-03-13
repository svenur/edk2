/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    GlobalVariable.c
    
Abstract:

  GUID for EFI (NVRAM) Variables. Defined in EFI 1.0.

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (GlobalVariable)

EFI_GUID  gEfiGlobalVariableGuid = EFI_GLOBAL_VARIABLE_GUID;

EFI_GUID_STRING(&gEfiGlobalVariableGuid, "Efi", "Efi Variable GUID")
