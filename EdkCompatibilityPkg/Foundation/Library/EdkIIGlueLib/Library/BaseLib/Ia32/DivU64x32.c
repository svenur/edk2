/**
  Calculate the quotient of a 64-bit integer by a 32-bit integer

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathDivU64x32 (
  IN      UINT64                    Dividend,
  IN      UINT32                    Divisor
  )
{
  _asm {
    mov     eax, dword ptr [Dividend + 4]
    mov     ecx, Divisor
    xor     edx, edx
    div     ecx
    push    eax                     ; save quotient on stack
    mov     eax, dword ptr [Dividend]
    div     ecx
    pop     edx                     ; restore high-order dword of the quotient
  }
}

