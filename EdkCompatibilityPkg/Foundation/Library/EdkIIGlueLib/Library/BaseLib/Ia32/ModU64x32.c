/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  ModU64x32.c
  
Abstract: 

  

--*/

#include "BaseLibInternals.h"

UINT32
EFIAPI
InternalMathModU64x32 (
  IN      UINT64                    Dividend,
  IN      UINT32                    Divisor
  )
{
  _asm {
    mov     eax, dword ptr [Dividend + 4]
    mov     ecx, Divisor
    xor     edx, edx
    div     ecx
    mov     eax, dword ptr [Dividend + 0]
    div     ecx
    mov     eax, edx
  }
}
