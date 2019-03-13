/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PciHotPlugRequest.h

Abstract:

  
 
--*/

#ifndef _PCI_HOTPLUG_REQUEST_H_
#define _PCI_HOTPLUG_REQUEST_H_

#define EFI_PCI_HOTPLUG_REQUEST_PROTOCOL_GUID \
{0x19cb87ab,0x2cb9,0x4665,{0x83,0x60,0xdd,0xcf,0x60,0x54,0xf7,0x9d}}

typedef enum {
  EfiPciHotPlugRequestAdd,
  EfiPciHotplugRequestRemove
} EFI_PCI_HOTPLUG_OPERATION;

EFI_FORWARD_DECLARATION (EFI_PCI_HOTPLUG_REQUEST_PROTOCOL);

typedef
EFI_STATUS
(EFIAPI *EFI_PCI_HOTPLUG_REQUEST_NOTIFY) (
 IN EFI_PCI_HOTPLUG_REQUEST_PROTOCOL *This,
 IN EFI_PCI_HOTPLUG_OPERATION        Operation,
 IN EFI_HANDLE                       Controller,
 IN EFI_DEVICE_PATH_PROTOCOL         *RemainingDevicePath OPTIONAL,
 IN OUT UINT8                        *NumberOfChildren,
 IN OUT EFI_HANDLE                   *ChildHandleBuffer
);



struct _EFI_PCI_HOTPLUG_REQUEST_PROTOCOL {
  EFI_PCI_HOTPLUG_REQUEST_NOTIFY     Notify;
};


extern EFI_GUID gEfiPciHotPlugRequestProtocolGuid;

#endif
