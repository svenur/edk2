/**
  AsmReadDr4 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmReadDr4 (
  VOID
  )
{
  __asm {
    _emit  0x0f
    _emit  0x21
    _emit  0xe0
  }
}

