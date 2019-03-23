/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GraphicsOutput.c

Abstract:

  Graphics Output Protocol from the UEFI 2.0 specification.

  Abstraction of a very simple graphics device.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (GraphicsOutput)

EFI_GUID  gEfiGraphicsOutputProtocolGuid = EFI_GRAPHICS_OUTPUT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiGraphicsOutputProtocolGuid, "EFI Graphics Output Protocol", "UEFI Graphics Output Protocol");
