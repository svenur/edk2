/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmStandbyButtonDispatch.c
    
Abstract:

    EFI Smm Standby Button Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmStandbyButtonDispatch)

EFI_GUID  gEfiSmmStandbyButtonDispatchProtocolGuid = EFI_SMM_STANDBY_BUTTON_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiSmmStandbyButtonDispatchProtocolGuid, "SMM Standby Button SMI Dispatch Protocol",
      "EFI 2.0 SMM Standby Button SMI Dispatch Protocol"
  );
