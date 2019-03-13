/**
  AsmWriteCr4 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmWriteCr4 (
  UINTN  Value
  )
{
  _asm {
    mov     eax, Value
    _emit  0x0f  // mov  cr4, eax
    _emit  0x22
    _emit  0xE0
  }
}

