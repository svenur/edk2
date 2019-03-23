/**
  AsmFxRestore function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
InternalX86FxRestore (
  IN CONST IA32_FX_BUFFER *Buffer
  )
{
  _asm {
    mov     eax, Buffer
    fxrstor [eax]
  }
}

