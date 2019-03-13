/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugPort.c

Abstract:

  DebugPort protocol as defined in the EFI 1.1 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DebugPort)

EFI_GUID  gEfiDebugPortProtocolGuid = EFI_DEBUGPORT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDebugPortProtocolGuid, "DebugPort Protocol", "EFI 1.1 DebugPort Protocol");
