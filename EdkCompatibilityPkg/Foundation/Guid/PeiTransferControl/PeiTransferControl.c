/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PeiTransferControl.c
    
Abstract:

  GUID for the SetJump()/LongJump() APIs shared between PEI and DXE

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PeiTransferControl)

EFI_GUID gEfiPeiTransferControlGuid = EFI_PEI_TRANSFER_CONTROL_GUID;

EFI_GUID_STRING(&gEfiPeiTransferControlGuid, "Transfer Control", "Transfer Control APIs from PEI");

