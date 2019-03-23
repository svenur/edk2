/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimpleTextIn.c

Abstract:

  Simple Text In protocol from the EFI 1.0 specification.

  Abstraction of a very simple input device like a keyboard or serial
  terminal.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SimpleTextIn)

EFI_GUID  gEfiSimpleTextInProtocolGuid = EFI_SIMPLE_TEXT_IN_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSimpleTextInProtocolGuid, "Simple Text In Protocol", "EFI 1.0 Simple Text In Protocol");
