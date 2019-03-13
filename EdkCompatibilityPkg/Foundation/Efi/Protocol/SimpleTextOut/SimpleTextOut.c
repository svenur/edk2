/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimpleTextOut.c

Abstract:

  Simple Text Out protocol from the EFI 1.0 specification.

  Abstraction of a very simple text based output device like VGA text mode or
  a serial terminal.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SimpleTextOut)

EFI_GUID  gEfiSimpleTextOutProtocolGuid = EFI_SIMPLE_TEXT_OUT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSimpleTextOutProtocolGuid, "Simple Text Out Protocol", "EFI 1.0 Simple Text Out Protocol");
