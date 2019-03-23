/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmGpiDispatch.c
    
Abstract:

    EFI Smm Gpi Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmGpiDispatch)

EFI_GUID  gEfiSmmGpiDispatchProtocolGuid = EFI_SMM_GPI_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiSmmGpiDispatchProtocolGuid, "SMM GPI SMI Dispatch Protocol", "EFI 2.0 SMM GPI SMI Dispatch Protocol");
