/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FlashMap.c

Abstract:

  Flash Map PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (FlashMap)

EFI_GUID  gPeiFlashMapPpiGuid = PEI_FLASH_MAP_PPI_GUID;

EFI_GUID_STRING(&gPeiFlashMapPpiGuid, "Flash Map", "Flash Map PPI");
