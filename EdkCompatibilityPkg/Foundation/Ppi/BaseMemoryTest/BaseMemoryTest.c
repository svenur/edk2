/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BaseMemoryTest.c

Abstract:

  PEI memory test PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (BaseMemoryTest)

EFI_GUID  gPeiBaseMemoryTestPpiGuid = PEI_BASE_MEMORY_TEST_GUID;

EFI_GUID_STRING(&gPeiBaseMemoryTestPpiGuid, "PeiBaseMemoryTest", "Pei Base Memory Test PPI");
