/**
  64-bit arithmetic right shift function for IA-32.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathARShiftU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  _asm {
    mov     cl, byte ptr [Count]
    mov     eax, dword ptr [Operand + 4]
    cdq
    test    cl, 32
    cmovz   edx, eax
    cmovz   eax, dword ptr [Operand + 0]
    shrd    eax, edx, cl
    sar     edx, cl
  }
}

