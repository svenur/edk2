/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Reset.c

Abstract:

  Reset Service PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Reset)

EFI_GUID  gPeiResetPpiGuid = PEI_RESET_PPI_GUID;

EFI_GUID_STRING(&gPeiResetPpiGuid, "Reset", "Reset PPI");
