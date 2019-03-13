/**
  AsmWriteDr2 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmWriteDr2 (
  IN UINTN Value
  )
{
  _asm {
    mov     eax, Value
    mov     dr2, eax
  }
}

