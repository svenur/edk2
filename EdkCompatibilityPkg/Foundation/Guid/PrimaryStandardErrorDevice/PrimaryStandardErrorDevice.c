/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PrimaryStandardErrorDevice.c
    
Abstract:

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PrimaryStandardErrorDevice)

EFI_GUID  gEfiPrimaryStandardErrorDeviceGuid = EFI_PRIMARY_STANDARD_ERROR_DEVICE_GUID;

EFI_GUID_STRING(&gEfiPrimaryStandardErrorDeviceGuid, "Primary Standard Error Device Guid", 
                "EFI Primary Standard Error Device Guid");
