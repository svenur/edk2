/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  UgaDraw.c

Abstract:

  UGA Draw protocol from the EFI 1.1 specification.

  Abstraction of a very simple graphics device.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (UgaDraw)

EFI_GUID  gEfiUgaDrawProtocolGuid = EFI_UGA_DRAW_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUgaDrawProtocolGuid, "UGA Draw Protocol", "EFI 1.1 UGA Draw Protocol");
