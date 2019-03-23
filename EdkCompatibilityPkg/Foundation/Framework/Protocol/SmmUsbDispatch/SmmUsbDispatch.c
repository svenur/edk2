/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmUsbDispatch.c
    
Abstract:

    EFI Smm USB Smi Child Protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmUsbDispatch)

EFI_GUID  gEfiSmmUsbDispatchProtocolGuid = EFI_SMM_USB_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiSmmUsbDispatchProtocolGuid, "SMM USB SMI Dispatch Protocol", "EFI 2.0 SMM USB SMI Dispatch Protocol");
