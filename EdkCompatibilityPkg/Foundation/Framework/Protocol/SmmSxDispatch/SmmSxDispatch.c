/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmSxDispatch.c
    
Abstract:

    EFI Smm Sx Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmSxDispatch)

EFI_GUID  gEfiSmmSxDispatchProtocolGuid = EFI_SMM_SX_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmSxDispatchProtocolGuid, "SMM Sx Dispatch Protocol", "EFI 2.0 SMM Sx Dispatch Protocol");
