/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  MultU64x32.c
  
Abstract: 

  

--*/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalMathMultU64x32 (
  IN      UINT64                    Multiplicand,
  IN      UINT32                    Multiplier
  )
{
  _asm {
    mov     ecx, Multiplier
    mov     eax, ecx
    imul    ecx, dword ptr [Multiplicand + 4]  // overflow not detectable
    mul     dword ptr [Multiplicand + 0]
    add     edx, ecx
  }
}

