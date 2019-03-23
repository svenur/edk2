/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PrimaryConsoleInDevice.c
    
Abstract:


--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PrimaryConsoleInDevice)


EFI_GUID  gEfiPrimaryConsoleInDeviceGuid = EFI_PRIMARY_CONSOLE_IN_DEVICE_GUID;

EFI_GUID_STRING(&gEfiPrimaryConsoleInDeviceGuid, "Primary Console In Device Guid", 
                "EFI Primary Conosle In Device Guid");
