/**
  AsmReadCr4 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmReadCr4 (
  VOID
  )
{
  __asm {
    _emit  0x0f  // mov  eax, cr4
    _emit  0x20
    _emit  0xE0
  }
}

