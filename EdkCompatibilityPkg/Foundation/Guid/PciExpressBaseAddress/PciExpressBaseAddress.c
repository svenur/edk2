/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PciExpressBaseAddress.c
    
Abstract:


   GUIDs used for PciExpress Base Address

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (PciExpressBaseAddress)

EFI_GUID  gEfiPciExpressBaseAddressGuid = EFI_PCI_EXPRESS_BASE_ADDRESS_GUID;

EFI_GUID_STRING(&gEfiPciExpressBaseAddressGuid, "PCI Express Base Address", "PCI Express Base Address GUID");
