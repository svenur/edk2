/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LegacyBiosThunk.c
    
Abstract:

  Legacy BIOS Thunk Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (LegacyBiosThunk)

EFI_GUID  gEfiLegacyBiosThunkProtocolGuid = EFI_LEGACY_BIOS_THUNK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacyBiosThunkProtocolGuid, "Legacy BIOS Thunk Protocol", "Legacy BIOS Thunk Protocol");
