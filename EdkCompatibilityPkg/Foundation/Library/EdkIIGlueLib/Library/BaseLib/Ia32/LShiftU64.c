/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LShiftU64.c
  
Abstract: 

  

--*/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathLShiftU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  _asm {
    mov     cl, byte ptr [Count]
    xor     eax, eax
    mov     edx, dword ptr [Operand + 0]
    test    cl, 32                      // Count >= 32?
    cmovz   eax, edx
    cmovz   edx, dword ptr [Operand + 4]
    shld    edx, eax, cl
    shl     eax, cl
  }
}

