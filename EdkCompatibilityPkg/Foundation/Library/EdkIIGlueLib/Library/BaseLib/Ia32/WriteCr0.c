/**
  AsmWriteCr0 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmWriteCr0 (
  UINTN  Value
  )
{
  _asm {
    mov     eax, Value
    mov     cr0, eax
  }
}

