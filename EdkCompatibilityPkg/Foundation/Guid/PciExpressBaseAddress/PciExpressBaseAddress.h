/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PciExpressBaseAddress.h
    
Abstract:


   GUIDs used for PciExpress Base Address

--*/

#ifndef _EFI_PCI_EXPRESS_BASE_ADDRESS_H_
#define _EFI_PCI_EXPRESS_BASE_ADDRESS_H_

#define EFI_PCI_EXPRESS_BASE_ADDRESS_GUID \
  { \
    0x3677d529, 0x326f, 0x4603, {0xa9, 0x26, 0xea, 0xac, 0xe0, 0x1d, 0xcb, 0xb0} \
  }

//
// Following structure defines PCI Express Base Address information.
// This information is platform specific, and built into hob in PEI phase.
// It can be consumed by PEI PCI driver and DXE PCI driver.
//
#pragma pack(1)
typedef struct _EFI_PCI_EXPRESS_BASE_ADDRESS_INFORMATION {
  UINT32       HostBridgeNumber;
  UINT32       RootBridgeNumber;
  UINT64       PciExpressBaseAddress;
} EFI_PCI_EXPRESS_BASE_ADDRESS_INFORMATION;
#pragma pack()

extern EFI_GUID gEfiPciExpressBaseAddressGuid;

#endif
