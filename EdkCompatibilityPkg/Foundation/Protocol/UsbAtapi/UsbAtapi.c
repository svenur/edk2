/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    UsbAtapi.c
    
Abstract:

    EFI USB Atapi Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (UsbIo)
#include EFI_PROTOCOL_DEFINITION (UsbAtapi)

EFI_GUID  gEfiUsbAtapiProtocolGuid = EFI_USB_ATAPI_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUsbAtapiProtocolGuid, "Usb Atapi Protocol", "Usb Atapi Protocol");
