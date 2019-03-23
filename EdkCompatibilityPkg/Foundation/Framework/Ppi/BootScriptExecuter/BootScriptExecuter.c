/*++

Copyright (c) 2001 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BootScriptExecuter.c

Abstract:

  Boot Script Executer PPI GUID as defined in EFI 2.0

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (BootScriptExecuter)

EFI_GUID  gPeiBootScriptExecuterPpiGuid = PEI_BOOT_SCRIPT_EXECUTER_PPI_GUID;

EFI_GUID_STRING(&gPeiBootScriptExecuterPpiGuid, "BootScriptExecuter", "Boot Script Executer PPI");
