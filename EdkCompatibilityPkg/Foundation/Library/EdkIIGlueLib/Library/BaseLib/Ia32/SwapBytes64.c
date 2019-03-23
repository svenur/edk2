/**
  Implementation of 64-bit swap bytes

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathSwapBytes64 (
  IN      UINT64                    Operand
  )
{
  _asm {
    mov     eax, dword ptr [Operand + 4]
    mov     edx, dword ptr [Operand + 0]
    bswap   eax
    bswap   edx
  }
}

