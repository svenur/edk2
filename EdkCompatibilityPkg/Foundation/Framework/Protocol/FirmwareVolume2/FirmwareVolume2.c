/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolume2.c

Abstract:

  PI 1.0 spec definition.

--*/


#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (FirmwareVolume2)

EFI_GUID  gEfiFirmwareVolume2ProtocolGuid = EFI_FIRMWARE_VOLUME2_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFirmwareVolume2ProtocolGuid, "FirmwareVolume2Protocol", "Efi FirmwareVolume2Protocol");
