/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    ExtendedSalBootService.c

Abstract:

  This is a protocol creates infrastructure to register Extended Sal Procs.


--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(ExtendedSalBootService)

EFI_GUID gEfiExtendedSalBootServiceProtocolGuid = EXTENDED_SAL_BOOT_SERVICE_PROTOCOL_GUID;
EFI_GUID_STRING(&gEfiExtendedSalBootServiceProtocolGuid, "EXT SAL", "Extended Sal Protocol");
