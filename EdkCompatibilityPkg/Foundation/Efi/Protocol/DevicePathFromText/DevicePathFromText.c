/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DevicePathFromText.c

Abstract:

  DevicePathFromText protocol as defined in the UEFI 2.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DevicePathFromText)

EFI_GUID gEfiDevicePathFromTextProtocolGuid = EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDevicePathFromTextProtocolGuid, "Device Path From Text Protocol", "UEFI 2.0 Device Path From Text Protocol");
