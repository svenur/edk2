/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BootMode.c

Abstract:

  Boot Mode PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (BootMode)

EFI_GUID  gPeiMasterBootModePpiGuid = PEI_MASTER_BOOT_MODE_PEIM_PPI;

EFI_GUID_STRING(&gPeiMasterBootModePpiGuid, "BootMode", "Master Boot Mode PPI");
