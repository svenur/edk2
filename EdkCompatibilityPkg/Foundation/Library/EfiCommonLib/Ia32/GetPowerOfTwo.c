/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GetPowerOfTwo.c

Abstract:

  Calculates the largest integer that is both 
  a power of two and less than Input

--*/

#include "Tiano.h"

UINT64
GetPowerOfTwo (
  IN UINT64   Input
  )
/*++

Routine Description:

  Calculates the largest integer that is both 
  a power of two and less than Input

Arguments:

  Input  - value to calculate power of two

Returns:

  the largest integer that is both  a power of 
  two and less than Input

--*/
{
  __asm {
    xor     eax, eax
    mov     edx, eax
    mov     ecx, dword ptr Input[4]
    jecxz   _F
    bsr     ecx, ecx
    bts     edx, ecx
    jmp     _Exit
_F:
    mov     ecx, dword ptr Input[0]
    jecxz   _Exit
    bsr     ecx, ecx
    bts     eax, ecx
_Exit:
  }
}
