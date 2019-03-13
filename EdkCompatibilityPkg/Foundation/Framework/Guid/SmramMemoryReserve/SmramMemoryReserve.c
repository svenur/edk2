/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SmramMemoryReserve.c
    
Abstract:

  GUID for use in reserving SMRAM regions.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(SmramMemoryReserve)

EFI_GUID gEfiSmmPeiSmramMemoryReserve  = EFI_SMM_PEI_SMRAM_MEMORY_RESERVE;

EFI_GUID_STRING(&gEfiSmmPeiSmramMemoryReserve, "SMRAM Memory Reserve", "SMRAM Memory Reserve");
