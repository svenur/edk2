/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 DxeIpl.c

Abstract:

  DXE Initial Program Load PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (DxeIpl)

EFI_GUID  gEfiDxeIplPpiGuid = EFI_DXE_IPL_PPI_GUID;

EFI_GUID_STRING(&gEfiDxeIplPpiGuid, "DxeIpl", "DXE IPL PPI");
