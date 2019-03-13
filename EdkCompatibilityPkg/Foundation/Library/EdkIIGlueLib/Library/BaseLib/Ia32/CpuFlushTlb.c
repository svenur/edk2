/**
  CpuFlushTlb function.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
CpuFlushTlb (
  VOID
  )
{
  _asm {
    mov     eax, cr3
    mov     cr3, eax
  }
}

