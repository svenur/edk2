/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    HiiDatabase.c
    
Abstract:

    EFI_HII_DATABASE_PROTOCOL

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiDatabase)

EFI_GUID  gEfiHiiDatabaseProtocolGuid = EFI_HII_DATABASE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiDatabaseProtocolGuid, "EFI HII DATABASE Protocol", "UEFI 2.1 HII DATABASE Protocol");
