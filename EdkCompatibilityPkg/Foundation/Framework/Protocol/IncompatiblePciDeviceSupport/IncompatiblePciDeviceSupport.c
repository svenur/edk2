/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    IncompatiblePciDeviceSupport.c
    
Abstract:

    EFI Incompatible PCI Device Support Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (IncompatiblePciDeviceSupport)

EFI_GUID  gEfiIncompatiblePciDeviceSupportProtocolGuid = EFI_INCOMPATIBLE_PCI_DEVICE_SUPPORT_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiIncompatiblePciDeviceSupportProtocolGuid, "Incompatible PCI Device Support Protocol",
      "Tiano Incompatible PCI Device Support Protocol"
  );
