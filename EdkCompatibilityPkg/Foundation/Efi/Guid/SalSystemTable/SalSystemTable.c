/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    SalSystemTable.c
    
Abstract:

  GUIDs used for SAL system table entries in the in the EFI 1.0 system table.

  SAL System Table contains Itanium-based processor centric information about
  the system.

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (SalSystemTable)

EFI_GUID  gEfiSalSystemTableGuid = EFI_SAL_SYSTEM_TABLE_GUID;

EFI_GUID_STRING(&gEfiSalSystemTableGuid, "SAL System Table", "SAL System Table GUID in EFI System Table");
