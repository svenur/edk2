/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverBinding.c
    
Abstract:

    EFI Controller Driver Protocol

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverBinding)

EFI_GUID  gEfiDriverBindingProtocolGuid = EFI_DRIVER_BINDING_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDriverBindingProtocolGuid, "Controller Driver Protocol", "EFI 1.1 Controller Driver Protocol");
