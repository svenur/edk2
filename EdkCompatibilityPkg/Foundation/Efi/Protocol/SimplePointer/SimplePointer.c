/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimplePointer.c

Abstract:

  Simple Pointer protocol from the EFI 1.1 specification.

  Abstraction of a very simple pointer device like a mice or trackballs.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SimplePointer)

EFI_GUID  gEfiSimplePointerProtocolGuid = EFI_SIMPLE_POINTER_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSimplePointerProtocolGuid, "Simple Pointer Protocol", "EFI 1.1 Simple Pointer Protocol");
