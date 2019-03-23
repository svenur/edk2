/**
  AsmReadIdtr function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
InternalX86ReadIdtr (
  OUT     IA32_DESCRIPTOR           *Idtr
  )
{
  _asm {
    mov     eax, Idtr
    sidt    fword ptr [eax]
  }
}
