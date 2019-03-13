/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolumeDispatch.c

Abstract:

  Firmware Volume Dispatch protocol as defined in the Tiano Firmware Volume
  specification.

  Presence of this protocol tells the dispatch to dispatch from this Firmware 
  Volume
 
--*/

#include "Tiano.h"                  
#include EFI_PROTOCOL_DEFINITION (FirmwareVolumeDispatch)

EFI_GUID gEfiFirmwareVolumeDispatchProtocolGuid = EFI_FIRMWARE_VOLUME_DISPATCH_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiFirmwareVolumeDispatchProtocolGuid, "FirmwareVolumeDispatch Protocol", 
                 "Firmware Volume Dispatch protocol");
