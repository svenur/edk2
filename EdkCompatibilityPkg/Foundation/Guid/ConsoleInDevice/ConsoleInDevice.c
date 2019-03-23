/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ConsoleInDevice.c
    
Abstract:


--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(ConsoleInDevice)


EFI_GUID  gEfiConsoleInDeviceGuid = EFI_CONSOLE_IN_DEVICE_GUID;

EFI_GUID_STRING(&gEfiConsoleInDeviceGuid, "Console In Device Guid", "EFI Conosle In Device Guid");
