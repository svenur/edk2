/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

 Smbus2.c

Abstract:

  Smbus2 PPI GUID as defined in PI1.0

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Smbus2)

EFI_GUID  gPeiSmbus2PpiGuid = PEI_SMBUS2_PPI_GUID;

EFI_GUID_STRING(&gPeiSmbus2PpiGuid, "Smbus2", "Smbus2 PPI");
