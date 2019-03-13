/*++

Copyright (c) 1999 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

 Smbus.c

Abstract:

  Smbus PPI GUID as defined in EFI 2.0

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Smbus)

EFI_GUID  gPeiSmbusPpiGuid = PEI_SMBUS_PPI_GUID;

EFI_GUID_STRING(&gPeiSmbusPpiGuid, "Smbus", "Smbus PPI");
