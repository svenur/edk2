/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolume.c

Abstract:

  Firmware Volume protocol as defined in the Tiano Firmware Volume
  specification.

  File level access layered on top of Firmware File System protocol.  This
  protocol exists to provide a hook for a filter driver for a firmware volume.
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (FirmwareVolume)

EFI_GUID  gEfiFirmwareVolumeProtocolGuid = EFI_FIRMWARE_VOLUME_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFirmwareVolumeProtocolGuid, "FirmwareVolume Protocol", "Firmware Volume protocol");
