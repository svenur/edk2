/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  BootState.c
    
Abstract:

  GUID for use conveying the boot-state to PEI

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (BootState)

EFI_GUID gEfiBootStateGuid = EFI_BOOT_STATE_VARIABLE_GUID;

//
// GUID for frequency selection HOB
//
EFI_GUID_STRING(&gEfiBootStateGuid, "Boot State", "Boot State");
