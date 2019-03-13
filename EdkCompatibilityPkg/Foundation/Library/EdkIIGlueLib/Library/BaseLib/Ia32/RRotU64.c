/**
  64-bit right rotation for Ia32

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathRRotU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  _asm {
    mov     cl, byte ptr [Count]
    mov     eax, dword ptr [Operand + 0]
    mov     edx, dword ptr [Operand + 4]
    shrd    ebx, eax, cl
    shrd    eax, edx, cl
    rol     ebx, cl
    shrd    edx, ebx, cl
    test    cl, 32                      // Count >= 32?
    cmovnz  ecx, eax
    cmovnz  eax, edx
    cmovnz  edx, ecx
  }
}

