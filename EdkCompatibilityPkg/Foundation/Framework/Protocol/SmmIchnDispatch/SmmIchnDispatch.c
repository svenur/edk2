/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmIchnDispatch.c
    
Abstract:

    EFI Smm ICH N Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmIchnDispatch)

EFI_GUID  gEfiSmmIchnDispatchProtocolGuid = EFI_SMM_ICHN_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiSmmIchnDispatchProtocolGuid, "SMM ICHn SMI Dispatch Protocol", "EFI 2.0 SMM ICHn SMI Dispatch Protocol");
