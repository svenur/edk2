/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DeviceIo.c

Abstract:

  Device IO protocol as defined in the EFI 1.0 specification.

  Device IO is used to abstract hardware access to devices. It includes
  memory mapped IO, IO, PCI Config space, and DMA.

 
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DeviceIo)

EFI_GUID  gEfiDeviceIoProtocolGuid = EFI_DEVICE_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDeviceIoProtocolGuid, "DeviceIo Protocol", "EFI 1.0 Device IO Protocol");
