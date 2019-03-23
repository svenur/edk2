/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LRotU64.c
  
Abstract: 

  

--*/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathLRotU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  _asm {
    mov     cl, byte ptr [Count]
    mov     edx, dword ptr [Operand + 4]
    mov     eax, dword ptr [Operand + 0]
    shld    ebx, edx, cl
    shld    edx, eax, cl
    ror     ebx, cl
    shld    eax, ebx, cl
    test    cl, 32                      ; Count >= 32?
    cmovnz  ecx, eax
    cmovnz  eax, edx
    cmovnz  edx, ecx
  }
}

