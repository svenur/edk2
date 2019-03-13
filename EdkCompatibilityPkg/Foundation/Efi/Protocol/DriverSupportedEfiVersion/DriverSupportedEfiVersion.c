/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    DriverSupportedEfiVersion.c

Abstract:

    Driver Supported EFI Version Protocol

Revision History:

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DriverSupportedEfiVersion)

EFI_GUID  gEfiDriverSupportedEfiVersionProtocolGuid = EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiDriverSupportedEfiVersionProtocolGuid, "Driver Supported EFI Version Protocol", "UEFI 2.1 Driver Supported EFI Version Protocol");
