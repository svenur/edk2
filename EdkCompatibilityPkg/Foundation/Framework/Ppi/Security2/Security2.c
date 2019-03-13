/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Security2.c

Abstract:

  PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Security2)

EFI_GUID  gEfiPeiSecurity2PpiGuid = EFI_PEI_SECURITY2_PPI_GUID;

EFI_GUID_STRING(&gEfiPeiSecurity2PpiGuid, "Security2 PPI", "Security2 Arch PPI");
