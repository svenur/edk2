/**
  AsmReadGs function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT16
EFIAPI
AsmReadGs (
  VOID
  )
{
  __asm {
    xor     eax, eax
    mov     ax, gs
  }
}

