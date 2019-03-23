/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DevicePathToText.c

Abstract:

  DevicePathToText protocol as defined in the UEFI 2.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DevicePathToText)

EFI_GUID gEfiDevicePathToTextProtocolGuid = EFI_DEVICE_PATH_TO_TEXT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDevicePathToTextProtocolGuid, "Device Path To Text Protocol", "UEFI 2.0 Device Path To Text protocol");
