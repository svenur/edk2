/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    HiiFont.c
    
Abstract:

    EFI_HII_FONT_PROTOCOL

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiFont)

EFI_GUID  gEfiHiiFontProtocolGuid = EFI_HII_FONT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiFontProtocolGuid, "EFI HII FONT Protocol", "UEFI 2.1 HII FONT Protocol");
