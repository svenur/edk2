/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FlashMapHob.c
    
Abstract:

  GUIDs used for Flash Map HOB entries in the in the HOB list.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (FlashMapHob)


EFI_GUID gEfiFlashMapHobGuid  = EFI_FLASH_MAP_HOB_GUID;

EFI_GUID_STRING (&gEfiFlashMapHobGuid, "Flash Map HOB", "Flash Map HOB GUID for HOB list");

