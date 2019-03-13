/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MemoryDiscovered.c

Abstract:

  Memory Discovered PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (MemoryDiscovered)

EFI_GUID  gPeiMemoryDiscoveredPpiGuid = PEI_PERMANENT_MEMORY_INSTALLED_PPI_GUID;

EFI_GUID_STRING(&gPeiMemoryDiscoveredPpiGuid, "MemoryDiscovered", "Memory Discovered PPI");
