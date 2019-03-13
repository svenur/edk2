/*++

  Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
  
Module Name:
  
  Stall.c

Abstract:

  Stall PPI

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (Stall)

EFI_GUID  gPeiStallPpiGuid = PEI_STALL_PPI_GUID;

EFI_GUID_STRING(&gPeiStallPpiGuid, "Stall", "Stall PPI");
