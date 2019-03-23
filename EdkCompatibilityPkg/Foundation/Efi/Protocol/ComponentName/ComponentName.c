/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    ComponentName.c
    
Abstract:

    EFI Component Name Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ComponentName)

EFI_GUID  gEfiComponentNameProtocolGuid = EFI_COMPONENT_NAME_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiComponentNameProtocolGuid, "Component Name Protocol", "EFI 1.1 Component Name Protocol");
