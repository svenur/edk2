/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EndOfPeiSignal.c

Abstract:

  This is installed prior to DXE taking over the memory map

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (EndOfPeiSignal)

EFI_GUID  gEndOfPeiSignalPpiGuid = PEI_END_OF_PEI_PHASE_PPI_GUID;

EFI_GUID_STRING(&gEndOfPeiSignalPpiGuid, "EndOfPeiSignal", "End of PEI Phase Signalled PPI");
