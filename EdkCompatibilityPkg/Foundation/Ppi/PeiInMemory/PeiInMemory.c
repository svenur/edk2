/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PeiInMemory.c

Abstract:

  Capsule on Fat Usb Disk GUID.

  This is the contract between the recovery module and device recovery module
  in order to convey the name of a given recovery module type

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION(PeiInMemory)

EFI_GUID gPeiInMemoryGuid = PEI_IN_MEMORY_GUID;

EFI_GUID_STRING(&gPeiInMemoryGuid, "PeiInMemory", "PEIM In Memory");

