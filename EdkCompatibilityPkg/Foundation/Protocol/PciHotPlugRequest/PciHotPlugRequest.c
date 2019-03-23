/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PciHotPlugRequest.c

Abstract:

  
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (PciHotPlugRequest)

EFI_GUID  gEfiPciHotPlugRequestProtocolGuid = EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPciHotPlugRequestProtocolGuid, "Pci Hot Plug Request Protocol", "Tiano Hot Plug Request Protocol");
