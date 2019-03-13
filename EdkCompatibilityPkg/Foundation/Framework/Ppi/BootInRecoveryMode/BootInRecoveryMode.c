/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BootInRecoveryMode.c

Abstract:

  Boot Mode PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (BootInRecoveryMode)

EFI_GUID  gPeiBootInRecoveryModePpiGuid = PEI_BOOT_IN_RECOVERY_MODE_PEIM_PPI;

EFI_GUID_STRING(&gPeiMasterBootModePpiGuid, "BootMode", "Master Boot Mode PPI");
