/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FrameworkDevicePath.c
    
Abstract:

  GUID used for 

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (FrameworkDevicePath)

EFI_GUID  gEfiFrameworkDevicePathGuid = EFI_FRAMEWORK_DEVICE_PATH_GUID;

EFI_GUID_STRING(&gEfiFrameworkDevicePathGuid, "Framework Devic Path", "Framework Device Path GUID");
