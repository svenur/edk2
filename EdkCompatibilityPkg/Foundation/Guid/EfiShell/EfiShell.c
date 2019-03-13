/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  EfiShell.c
    
Abstract:

  FFS Filename for EFI Shell

--*/

#include "Tiano.h"

#include EFI_GUID_DEFINITION (EfiShell)

EFI_GUID gEfiShellFileGuid = EFI_SHELL_FILE_GUID;
EFI_GUID gEfiMiniShellFileGuid = EFI_MINI_SHELL_FILE_GUID;

EFI_GUID_STRING (&gEfiShellFileGuid, "EfiShell", "Efi Shell FFS file name GUID")
EFI_GUID_STRING (&gEfiMiniShellFileGuid, "EfiMiniShell", "Efi Mini-Shell FFS file name GUID")

