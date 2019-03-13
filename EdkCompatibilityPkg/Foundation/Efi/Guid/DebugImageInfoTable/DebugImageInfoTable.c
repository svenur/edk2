/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugImageInfoTable.c
    
Abstract:

  GUID used to locate the Debug Image Info table in the EFI 1.0 system table.

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (DebugImageInfoTable)

EFI_GUID  gEfiDebugImageInfoTableGuid = EFI_DEBUG_IMAGE_INFO_TABLE_GUID;

EFI_GUID_STRING
  (&gEfiDebugImageInfoTableGuid, "Debug Image Info Table", "Debug Image Info Table GUID in EFI System Table");
