/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  BlockIo.c

Abstract:

  BlockIo PPI GUID as defined in EFI 2.0

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (BlockIo)

EFI_GUID  gPeiBlockIoPpiGuid = PEI_BLOCK_IO_PPI_GUID;

EFI_GUID_STRING(&gPeiBlockIoPpiGuid, "BlockIo", "PEI Block I/O PPI");
