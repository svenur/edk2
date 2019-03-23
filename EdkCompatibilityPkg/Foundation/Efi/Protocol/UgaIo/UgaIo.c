/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  UgaIo.c

Abstract:

  UGA IO protocol from the EFI 1.1 specification.

  Abstraction of a very simple graphics device.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (UgaIo)

EFI_GUID  gEfiUgaIoProtocolGuid = EFI_UGA_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUgaIoProtocolGuid, "UGA Protocol", "EFI 1.1 UGA Protocol");
