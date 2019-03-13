/**
  AsmReadEflags function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmReadEflags (
  VOID
  )
{
  __asm {
    pushfd
    pop     eax
  }
}

