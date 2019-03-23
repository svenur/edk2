/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  UsbHostController.c

Abstract:

  USB Host Controller protocol.

 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (UsbHostController)

EFI_GUID  gEfiUsbHcProtocolGuid = EFI_USB_HC_PROTOCOL_GUID;
EFI_GUID  gEfiUsb2HcProtocolGuid = EFI_USB2_HC_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUsbHcProtocolGuid, "Usb Host Controller Protocol", "USB 1.1 Host Controller");
EFI_GUID_STRING(&gEfiUsb2HcProtocolGuid, "Usb2 Host Controller Protocol", "USB 2.0 Host Controller");
