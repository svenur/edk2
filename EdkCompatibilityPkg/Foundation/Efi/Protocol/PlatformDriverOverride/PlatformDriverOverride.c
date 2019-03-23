/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PlatformDriverOverride.c

Abstract:

  Platform Driver Override protocol as defined in the EFI 1.1 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (PlatformDriverOverride)

EFI_GUID  gEfiPlatformDriverOverrideProtocolGuid = EFI_PLATFORM_DRIVER_OVERRIDE_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiPlatformDriverOverrideProtocolGuid, "Platform Driver Override Protocol",
      "EFI 1.1 Platform Driver Override Protocol"
  );
