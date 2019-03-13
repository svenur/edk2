/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Variable2.c

Abstract:

  Read-only Variable2 Service PPI as defined in PI1.0

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (Variable2)

EFI_GUID  gPeiReadOnlyVariable2PpiGuid = EFI_PEI_READ_ONLY_VARIABLE2_PPI_GUID;

EFI_GUID_STRING(&gPeiReadOnlyVariable2PpiGuid, "Variable2", "Read Only Variable2 PPI");
