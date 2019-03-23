/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    VgaMiniPort.c
    
Abstract:

    EFI VGA Mini Port Protocol

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (VgaMiniPort)

EFI_GUID  gEfiVgaMiniPortProtocolGuid = EFI_VGA_MINI_PORT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiVgaMiniPortProtocolGuid, "VGA Mini Port Protocol", "EFI VGA Mini Port Protocol");
