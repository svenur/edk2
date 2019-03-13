/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCodeMemory.c

Abstract:

  Status Code Memory descriptor

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (StatusCodeMemory)

EFI_GUID gPeiStatusCodeMemoryPpiGuid = PEI_STATUS_CODE_MEMORY_PPI_GUID;

EFI_GUID_STRING(&gPeiStatusCodeMemoryPpiGuid, "StatusCodeMemory", "Status Code memory descriptor.");
