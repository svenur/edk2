/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LibGlobals.c

Abstract:

  Lib Globals

  gBS         - Pointer to the EFI Boot Services Table
  gST         - Pointer to EFI System Table
  gRtErrorLevel - Error level used with DEBUG () macro

--*/

#include "Tiano.h"
#include "EfiRuntimeLib.h"
#include EFI_GUID_DEFINITION (StatusCodeCallerId)
#include EFI_GUID_DEFINITION (StatusCodeDataTypeId)

//
// Lib globals that can ONLY be used at BootServices time!
//
EFI_BOOT_SERVICES *gBS;
EFI_SYSTEM_TABLE  *gST;
EFI_DXE_SERVICES  *gDS          = NULL;
UINTN             gRtErrorLevel = EFI_DBUG_MASK | EFI_D_LOAD;
