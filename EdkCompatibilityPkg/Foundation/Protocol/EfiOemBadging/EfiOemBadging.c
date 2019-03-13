/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    EfiOEMBadging.c 
    
Abstract:

    EFI OEM Badging Protocol definition source file

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (EfiOemBadging)

EFI_GUID  gEfiOEMBadgingProtocolGuid = EFI_OEM_BADGING_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiOEMBadgingProtocolGuid, "OEM Badging Protocol", "OEM Badging Protocol");
