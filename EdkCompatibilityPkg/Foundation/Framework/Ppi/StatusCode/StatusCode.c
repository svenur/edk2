/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  StatusCode.c

Abstract:

  Status Code PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (StatusCode)

EFI_GUID  gPeiStatusCodePpiGuid = PEI_STATUS_CODE_PPI_GUID;

EFI_GUID_STRING(&gPeiProgressCodePpiGuid, "StatusCode", "Status Code PPI");
