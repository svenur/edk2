/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LoadedImageDevicePath.c

Abstract:

  The Loaded Image Device Path Protocol as defined in UEFI 2.1.

  When installed, the Loaded Image Device Path Protocol specifies the device
  path that was used when a PE/COFF image was loaded through the EFI Boot
  Service LoadImage().


--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (LoadedImageDevicePath)

EFI_GUID  gEfiLoadedImageDevicePathProtocolGuid = EFI_LOADED_IMAGE_DEVICE_PATH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLoadedImageDevicePathProtocolGuid, "Loaded Image Device Path Protocol", "UEFI 2.1 Loaded Image Device Path protocol");
