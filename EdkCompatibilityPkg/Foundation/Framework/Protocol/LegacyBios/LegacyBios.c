/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LegacyBios.c
    
Abstract:

  EFI Legacy BIOS Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (LegacyBios)

EFI_GUID  gEfiLegacyBiosProtocolGuid = EFI_LEGACY_BIOS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacyBiosProtocolGuid, "Legacy BIOS Protocol", "Legacy BIOS Protocol");
