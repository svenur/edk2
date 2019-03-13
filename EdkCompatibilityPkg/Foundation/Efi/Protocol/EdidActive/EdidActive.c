/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EdidActive.c

Abstract:

  EDID Active Protocol from the UEFI 2.0 specification.

  Placed on the video output device child handle that are actively displaying output.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (EdidActive)

EFI_GUID  gEfiEdidActiveProtocolGuid = EFI_EDID_ACTIVE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiEdidActiveProtocolGuid, "EFI EDID Active Protocol", "UEFI EDID Active Protocol");
