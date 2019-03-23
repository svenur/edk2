/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LegacyInterrupt.c
    
Abstract:

  EFI Legacy InterruptProtocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (LegacyInterrupt)

EFI_GUID  gEfiLegacyInterruptProtocolGuid = EFI_LEGACY_INTERRUPT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacyInterruptProtocolGuid, "Legacy Interrupt Protocol", "Legacy Interrupt Protocol");
