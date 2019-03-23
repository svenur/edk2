/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    ComponentName2.c
    
Abstract:

    EFI Component Name2 Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ComponentName2)

EFI_GUID  gEfiComponentName2ProtocolGuid = EFI_COMPONENT_NAME2_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiComponentName2ProtocolGuid, "Component Name2 Protocol", "UEFI 2.0 Component Name2 Protocol");
