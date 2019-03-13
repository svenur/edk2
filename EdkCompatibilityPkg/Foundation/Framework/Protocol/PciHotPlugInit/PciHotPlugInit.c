/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    PciHotPlugInit.c
    
Abstract:

    EFI PCI Hot Plug Init Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (PciHotPlugInit)

EFI_GUID  gEfiPciHotPlugInitProtocolGuid = EFI_PCI_HOT_PLUG_INIT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPciHotPlugInitProtocolGuid, "PCI Hot Plug Init Protocol", "PCI Hot Plug Init Protocol");
