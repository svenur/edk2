/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    HiiString.c
    
Abstract:

    EFI_HII_STRING_PROTOCOL

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiString)

EFI_GUID  gEfiHiiStringProtocolGuid = EFI_HII_STRING_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiStringProtocolGuid, "EFI HII STRING Protocol", "UEFI 2.1 HII STRING Protocol");
