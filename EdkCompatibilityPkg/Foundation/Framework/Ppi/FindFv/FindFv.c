/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 FindFv.c

Abstract:

  FindFv PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (FindFv)

EFI_GUID  gEfiFindFvPpiGuid = EFI_FIND_FV_PPI_GUID;

EFI_GUID_STRING(&gEfiFindFvPpiGuid, "FindFv", "FindFv PPI");
