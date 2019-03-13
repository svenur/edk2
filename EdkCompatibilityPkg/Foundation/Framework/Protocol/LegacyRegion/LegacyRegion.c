/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LegacyRegion.c
    
Abstract:

  EFI Legacy Region Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (LegacyRegion)

EFI_GUID  gEfiLegacyRegionProtocolGuid = EFI_LEGACY_REGION_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLegacyRegionProtocolGuid, "Legacy Region Protocol", "Legacy Region Protocol");
