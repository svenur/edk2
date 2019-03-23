/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    PciIo.c
    
Abstract:

    EFI PCI I/O Protocol

Revision History

--*/

#include "EfiSpec.h"

#include EFI_PROTOCOL_DEFINITION (PciIo)

EFI_GUID  gEfiPciIoProtocolGuid = EFI_PCI_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPciIoProtocolGuid, "PCI IO Protocol", "EFI 1.1 PCI IO Protocol");
