/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HotPlugDevice.c
    
Abstract:


--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(HotPlugDevice)


EFI_GUID  gEfiHotPlugDeviceGuid = HOT_PLUG_DEVICE_GUID;

EFI_GUID_STRING(&gEfiHotPlugDeviceGuid, "Hot Plug Device Guid", "Hot Plug Device Guid");
