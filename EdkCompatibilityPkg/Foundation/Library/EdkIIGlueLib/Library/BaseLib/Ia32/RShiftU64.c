/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  RShiftU64.c
  
Abstract: 

  

--*/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathRShiftU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  _asm {
    mov     cl, byte ptr [Count]
    xor     edx, edx
    mov     eax, dword ptr [Operand + 4]
    test    cl, 32
    cmovz   edx, eax
    cmovz   eax, dword ptr [Operand + 0]
    shrd    eax, edx, cl
    shr     edx, cl
  }
}

