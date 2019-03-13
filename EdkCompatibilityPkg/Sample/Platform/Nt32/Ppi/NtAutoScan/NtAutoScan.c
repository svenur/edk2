/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    NtAutoscan.c

Abstract:

  Abstraction for the NT Load Image PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (NtAutoScan)

EFI_GUID  gPeiNtAutoScanPpiGuid = PEI_NT_AUTOSCAN_PPI_GUID;

EFI_GUID_STRING(&gPeiNtAutoScanPpiGuid, "NtAutoScan", "NT PEI AUTOSCAN PPI");
