/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PciRootBridgeIo.c

Abstract:

  PCI Root Bridge I/O protocol as defined in the EFI 1.1 specification.

  PCI Root Bridge I/O protocol is used by PCI Bus Driver to perform PCI Memory, PCI I/O, 
  and PCI Configuration cycles on a PCI Root Bridge. It also provides services to perform 
  defferent types of bus mastering DMA

--*/

#include "EfiSpec.h"

#include EFI_PROTOCOL_DEFINITION (PciRootBridgeIo)

EFI_GUID  gEfiPciRootBridgeIoProtocolGuid = EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPciRootBridgeIoProtocolGuid, "PciRootBridgeIo Protocol", "EFI 1.1 Pci Root Bridge IO Protocol");
