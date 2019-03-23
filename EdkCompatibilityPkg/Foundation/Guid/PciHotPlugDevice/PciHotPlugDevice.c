/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PciHotplugDevice.c
    
Abstract:


  GUIDs used to indicate the device is Pccard hotplug device

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PciHotPlugDevice)


EFI_GUID  gEfiPciHotplugDeviceGuid = EFI_PCI_HOTPLUG_DEVICE_GUID;

EFI_GUID_STRING(&gEfiPciHotplugDeviceGuid, "PCI Hotplug Device", "PCI Hotplug Device GUID in EFI System Table");
