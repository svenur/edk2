/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    Hob.c
    
Abstract:

  GUIDs used for HOB List in the EFI 1.0 system table

  These GUIDs point the HOB List passed in from PEI to DXE.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (Hob)

EFI_GUID  gEfiHobListGuid = EFI_HOB_LIST_GUID;

EFI_GUID_STRING(&gEfiHobListGuid, "HOB List", "HOB List GUID in EFI System Table");
