/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LegacyBiosPlatform.c
    
Abstract:

  EFI Legacy BIOS Platform Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (LegacyBiosPlatform)

EFI_GUID  gEfiLegacyBiosPlatformProtocolGuid = EFI_LEGACY_BIOS_PLATFORM_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacyBiosPlatformProtocolGuid, "Legacy BIOS Platform Protocol", "Legacy BIOS Platform Protocol");
