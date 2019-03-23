/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Reset.c

Abstract:

  Reset Architectural Protocol GUID as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Reset)

EFI_GUID  gEfiResetArchProtocolGuid = EFI_RESET_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiResetArchProtocolGuid, "Reset", "Reset Arch Protocol");
