/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DevicePathUtilities.c

Abstract:

  DevicePathUtilities protocol as defined in the UEFI 2.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DevicePathUtilities)

EFI_GUID gEfiDevicePathUtilitiesProtocolGuid = EFI_DEVICE_PATH_UTILITIES_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDevicePathUtilitiesProtocolGuid, "Device Path Utilities Protocol", "UEFI 2.0 Device Path Utilities protocol");
