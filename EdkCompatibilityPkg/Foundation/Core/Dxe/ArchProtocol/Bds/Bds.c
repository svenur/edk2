/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Bds.c

Abstract:

  Boot Device Selection Architectural Protocol GUID as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Bds)

EFI_GUID  gEfiBdsArchProtocolGuid = EFI_BDS_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiBdsArchProtocolGuid, "BDS", "BDS Arch Protocol");
