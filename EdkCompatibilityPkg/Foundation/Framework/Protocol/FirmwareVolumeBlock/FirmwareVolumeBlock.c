/*++

Copyright (c) 2004 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolumeBlock.c

Abstract:

  Firmware Volume Block protocol as defined in the Tiano Firmware Volume
  specification.

  Low level firmware device access routines to abstract firmware device
  hardware.
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (FirmwareVolumeBlock)

EFI_GUID  gEfiFirmwareVolumeBlockProtocolGuid = EFI_FIRMWARE_VOLUME_BLOCK_PROTOCOL_GUID;
EFI_GUID  gEfiFirmwareVolumeBlock2ProtocolGuid = EFI_FIRMWARE_VOLUME_BLOCK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFirmwareVolumeBlockProtocolGuid, "FirmwareVolumeBlock Protocol", "Firmware Volume Block protocol");
EFI_GUID_STRING(&gEfiFirmwareVolumeBlock2ProtocolGuid, "FirmwareVolumeBlock2 Protocol", "Firmware Volume Block2 protocol");
