/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EdidOverride.c

Abstract:

  EDID Override Protocol from the UEFI 2.0 specification.

  Allow platform to provide EDID information to producer of the Graphics Output
  protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (EdidOverride)

EFI_GUID  gEfiEdidOverrideProtocolGuid = EFI_EDID_OVERRIDE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiEdidOverrideProtocolGuid, "EFI EDID Override Protocol", "UEFI EDID Override Protocol");
