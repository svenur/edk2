/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  RecoveryModule.c

Abstract:

  Recovery Module PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (RecoveryModule)

EFI_GUID  gPeiRecoveryModulePpiGuid = PEI_RECOVERY_MODULE_INTERFACE_PPI;

EFI_GUID_STRING(&gPeiRecoveryModulePpiGuid, "RecoveryModule", "Recovery Module PPI");
