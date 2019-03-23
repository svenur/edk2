/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmPowerButtonDispatch.c
    
Abstract:

    EFI Smm Power Button Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmPowerButtonDispatch)

EFI_GUID  gEfiSmmPowerButtonDispatchProtocolGuid = EFI_SMM_POWER_BUTTON_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiSmmPowerButtonDispatchProtocolGuid, "SMM Power Button SMI Dispatch Protocol",
      "EFI 2.0 SMM Power Button SMI Dispatch Protocol"
  );
