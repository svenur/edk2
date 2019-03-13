/*++

Copyright (c) 1999 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  BootScriptSave.c

Abstract:

  S3 Save Protocol

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (BootScriptSave)

EFI_GUID  gEfiBootScriptSaveGuid = EFI_BOOT_SCRIPT_SAVE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiBootScriptSaveGuid, "EFI Boot Script Save Protocol", "EFI Boot Script Save Protocol");
