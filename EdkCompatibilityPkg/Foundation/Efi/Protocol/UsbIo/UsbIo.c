/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    UsbIo.c
    
Abstract:

    EFI Usb I/O Protocol

Revision History

--*/

#include "EfiSpec.h"

#include EFI_PROTOCOL_DEFINITION (UsbIo)

EFI_GUID  gEfiUsbIoProtocolGuid = EFI_USB_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUsbIoProtocolGuid, "Usb IO Protocol", "EFI 1.1 Usb IO Protocol");
