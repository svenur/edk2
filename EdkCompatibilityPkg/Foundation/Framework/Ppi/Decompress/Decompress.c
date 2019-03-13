/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Decompress.c

Abstract:

  PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Decompress)


EFI_GUID gEfiPeiDecompressPpiGuid = EFI_PEI_DECOMPRESS_PPI_GUID;
EFI_GUID_STRING(&gEfiPeiDecompressPpiGuid, "PeiDecompress", "PeiDecompress PPI");
