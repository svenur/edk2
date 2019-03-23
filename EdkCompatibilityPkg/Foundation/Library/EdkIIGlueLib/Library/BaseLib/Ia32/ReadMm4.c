/**
  AsmReadMm4 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
AsmReadMm4 (
  VOID
  )
{
  _asm {
    push    eax
    push    eax
    movq    [esp], mm4
    pop     eax
    pop     edx
    emms
  }
}

