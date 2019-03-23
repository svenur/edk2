/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LibGlobalErrorLevel.c

Abstract:

  Globals used in EFI Driver Lib. They are initialized in EfiDriverLib.c.
  Each seperatly linked module has it's own copy of these globals.

  gBS       - Boot Services table pointer
  gRT       - Runt Time services table pointer
  gST       - System Table pointer
  
  gErrorLevel     - Debug error level.

--*/

#include "Tiano.h"
#include "EfiDriverLib.h"
#include EFI_GUID_DEFINITION (StatusCodeCallerId)
#include EFI_GUID_DEFINITION (StatusCodeDataTypeId)

UINTN gErrorLevel = EFI_DBUG_MASK | EFI_D_LOAD;
