/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ConsoleOutDevice.c
    
Abstract:


--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(ConsoleOutDevice)


EFI_GUID  gEfiConsoleOutDeviceGuid = EFI_CONSOLE_OUT_DEVICE_GUID;

EFI_GUID_STRING(&gEfiConsoleOutDeviceGuid, "Console Out Device Guid", "EFI Console Out Device Guid");
