/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  PciPlatform.c

Abstract:  
  This file defines global GUID variables for PlatformOpRom protocols.
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_PRODUCER (PciPlatform)
 

EFI_GUID  gEfiPciPlatformProtocolGuid = EFI_PCI_PLATFORM_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiPciPlatformProtocolGuid, "Pci Platform Protocol", "Pci Platform Protocol");
