/**
  AsmWriteLdtr function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
AsmWriteLdtr (
  IN UINT16 Ldtr
  )
{
  _asm {
    xor     eax, eax
    mov     ax, Ldtr
    lldt    ax
  }
}

