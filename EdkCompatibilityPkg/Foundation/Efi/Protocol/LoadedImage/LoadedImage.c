/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 LoadedImage.c

Abstract:

  EFI 1.0 Loaded Image Protocol definition.

  Every EFI driver and application is passed an image handle when it is loaded.
  This image handle will contain a Loaded Image Protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (LoadedImage)

EFI_GUID  gEfiLoadedImageProtocolGuid = EFI_LOADED_IMAGE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLoadedImageProtocolGuid, "LoadedImage Protocol", "EFI 1.0 Loaded Image Protocol");
