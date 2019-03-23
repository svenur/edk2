/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugSupport.c

Abstract:

  DebugSupport protocol as defined in the EFI 1.1 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DebugSupport)

EFI_GUID  gEfiDebugSupportProtocolGuid = EFI_DEBUG_SUPPORT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDebugSupportProtocolGuid, "DebugSupport Protocol", "EFI 1.1 DebugSupport Protocol");
