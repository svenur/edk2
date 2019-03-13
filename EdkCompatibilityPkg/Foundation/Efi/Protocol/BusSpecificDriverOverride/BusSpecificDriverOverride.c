/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BusSpecificDriverOverride.c

Abstract:

  Bus Specific Driver Override protocol as defined in the EFI 1.1 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (BusSpecificDriverOverride)

EFI_GUID  gEfiBusSpecificDriverOverrideProtocolGuid = EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiBusSpecificDriverOverrideProtocolGuid, "Bus Specific Driver Override Protocol",
      "EFI 1.1 Bus Specific Driver Override Protocol"
  );
