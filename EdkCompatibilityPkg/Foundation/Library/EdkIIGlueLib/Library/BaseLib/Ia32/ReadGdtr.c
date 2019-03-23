/**
  AsmReadGdtr function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
InternalX86ReadGdtr (
  OUT IA32_DESCRIPTOR  *Gdtr
  )
{
  _asm {
    mov     eax, Gdtr
    sgdt    fword ptr [eax]
  }
}

