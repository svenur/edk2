/**
  Set error flag for all division functions

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathDivRemU64x32 (
  IN      UINT64                    Dividend,
  IN      UINT32                    Divisor,
  OUT     UINT32                    *Remainder
  )
{
  _asm {
    mov     ecx, Divisor
    mov     eax, dword ptr [Dividend + 4]
    xor     edx, edx
    div     ecx
    push    eax
    mov     eax, dword ptr [Dividend + 0]
    div     ecx
    mov     ecx, Remainder
    jecxz   RemainderNull                      // abandon remainder if Remainder == NULL
    mov     [ecx], edx
RemainderNull:
    pop     edx
  }
}

