/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmSwDispatch.c
    
Abstract:

    EFI Smm Software Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmSwDispatch)

EFI_GUID  gEfiSmmSwDispatchProtocolGuid = EFI_SMM_SW_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSmmSwDispatchProtocolGuid, "SMM Sw SMI Dispatch Protocol", "EFI 2.0 SMM Sw SMI Dispatch Protocol");
