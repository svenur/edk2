/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PrimaryConsoleOutDevice.c
    
Abstract:

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PrimaryConsoleOutDevice)

EFI_GUID  gEfiPrimaryConsoleOutDeviceGuid = EFI_PRIMARY_CONSOLE_OUT_DEVICE_GUID;

EFI_GUID_STRING(&gEfiPrimaryConsoleOutDeviceGuid, "Primary Console Out Device Guid", 
                "EFI Primary Console Out Device Guid");
