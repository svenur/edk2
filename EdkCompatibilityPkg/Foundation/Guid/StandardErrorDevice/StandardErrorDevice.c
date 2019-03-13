/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StandardErrorDevice.c
    
Abstract:


--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(StandardErrorDevice)


EFI_GUID  gEfiStandardErrorDeviceGuid = EFI_STANDARD_ERROR_DEVICE_GUID;

EFI_GUID_STRING(&gEfiStandardErrorDeviceGuid, "Standard Error Device Guid", "EFI Standard Error Device Guid");
