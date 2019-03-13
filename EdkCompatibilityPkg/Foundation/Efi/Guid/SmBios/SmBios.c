/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    SmBios.c
    
Abstract:

  GUIDs used to locate the SMBIOS tables in the EFI 1.0 system table.

  This GUID in the system table is the only legal way to search for and 
  locate the SMBIOS tables. Do not search the 0xF0000 segment to find SMBIOS
  tables.

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (SmBios)

EFI_GUID  gEfiSmbiosTableGuid = EFI_SMBIOS_TABLE_GUID;

EFI_GUID_STRING(&gEfiSmbiosTableGuid, "SMBIOS Table", "SMBIOS Table GUID in EFI System Table");
