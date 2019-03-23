/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PciHostBridgeResourceAllocation.c

Abstract:


--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (PciHostBridgeResourceAllocation)

EFI_GUID  gEfiPciHostBridgeResourceAllocationProtocolGuid = EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiPciHostBridgeResourceAllocationProtocolGuid, "PciHostBridgeRresourceAllocation Protocol",
      "Pci Host Bridge Resource Allocation Protocol"
  );
