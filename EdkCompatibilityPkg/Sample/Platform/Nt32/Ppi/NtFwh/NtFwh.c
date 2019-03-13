/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 NtFwh.c

Abstract:

  NT FWH Information PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (NtFwh)

EFI_GUID  gNtFwhPpiGuid = NT_FWH_PPI_GUID;

EFI_GUID_STRING(&gNtFwhPpiGuid, "NtFwh", "NT PEI FWH INFO PPI");
