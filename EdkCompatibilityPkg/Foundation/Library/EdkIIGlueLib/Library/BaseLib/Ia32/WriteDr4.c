/**
  AsmWriteDr4 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmWriteDr4 (
  IN UINTN Value
  )
{
  _asm {
    mov     eax, Value
    _emit   0x0f         // mov dr4, eax
    _emit   0x23
    _emit   0xe0
  }
}

