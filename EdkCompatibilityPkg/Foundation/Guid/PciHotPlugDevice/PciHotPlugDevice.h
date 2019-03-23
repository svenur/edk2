/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PciHotplugDevice.h
    
Abstract:

  GUIDs used to indicate the device is Pccard hotplug device
  
--*/

#ifndef _PCI_HOTPLUG_DEVICE_GUID_H_
#define _PCI_HOTPLUG_DEVICE_GUID_H_

#define EFI_PCI_HOTPLUG_DEVICE_GUID \
  { 0x0b280816, 0x52e7, 0x4e51, {0xaa, 0x57, 0x11, 0xbd, 0x41, 0xcb, 0xef, 0xc3} }

extern EFI_GUID gEfiPciHotplugDeviceGuid;

#endif
