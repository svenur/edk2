/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmPeriodicTimerDispatch.c
    
Abstract:

    EFI Smm Periodic Timer Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmPeriodicTimerDispatch)

EFI_GUID  gEfiSmmPeriodicTimerDispatchProtocolGuid = EFI_SMM_PERIODIC_TIMER_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiSmmPeriodicTimerDispatchProtocolGuid, "SMM Periodic Timer SMI Dispatch Protocol",
      "EFI 2.0 SMM Periodic Timer SMI Dispatch Protocol"
  );
