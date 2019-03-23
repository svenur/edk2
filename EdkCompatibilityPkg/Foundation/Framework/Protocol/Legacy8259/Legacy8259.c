/*++

Copyright (c) 1999 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:
  
    Legacy8259.c
    
Abstract:

  EFI Legacy Region Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (Legacy8259)

EFI_GUID  gEfiLegacy8259ProtocolGuid = EFI_LEGACY_8259_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacy8259ProtocolGuid, "Legacy 8259 Protocol", "Legacy 8259 Protocol");
