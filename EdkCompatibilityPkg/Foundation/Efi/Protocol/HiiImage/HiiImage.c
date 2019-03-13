/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    HiiImage.c
    
Abstract:

    EFI_HII_IMAGE_PROTOCOL

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiImage)

EFI_GUID  gEfiHiiImageProtocolGuid = EFI_HII_IMAGE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiImageProtocolGuid, "EFI HII IMAGE Protocol", "UEFI 2.1 HII IMAGE Protocol");
