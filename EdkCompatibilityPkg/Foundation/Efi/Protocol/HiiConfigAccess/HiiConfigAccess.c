/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HiiConfigAccess.c

Abstract:

  EFI_HII_CONFIG_ACCESS_PROTOCOL as defined in UEFI 2.1 spec.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiConfigAccess)

EFI_GUID  gEfiHiiConfigAccessProtocolGuid = EFI_HII_CONFIG_ACCESS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiConfigAccessProtocolGuid, "HII Config Access Protocol", "HII Config Access 2.1 protocol");
