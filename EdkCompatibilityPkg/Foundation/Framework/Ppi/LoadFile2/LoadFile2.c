/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LoadFile2.c

Abstract:

  PI 1.0 spec definition.

--*/


#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (LoadFile2)


EFI_GUID gEfiLoadFile2PpiGuid = EFI_PEI_LOAD_FILE_GUID;
EFI_GUID_STRING(&gEfiLoadFile2PpiGuid, "PeiLoadFile2", "PeiLoadFile2 PPI");
