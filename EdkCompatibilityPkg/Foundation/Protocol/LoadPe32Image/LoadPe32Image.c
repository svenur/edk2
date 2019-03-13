/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    LoadPe32Image.c

Abstract:

    Load PE32 Image Protocol

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (LoadPe32Image)

EFI_GUID  gEfiLoadPeImageGuid = PE32_IMAGE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLoadPeImageGuid, "LoadPe32Image Protocol", "Tiano Load Pe32 Image Protocol");
