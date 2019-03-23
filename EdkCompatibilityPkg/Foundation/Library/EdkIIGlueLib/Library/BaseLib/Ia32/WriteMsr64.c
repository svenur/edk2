/**
  AsmWriteMsr64 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
AsmWriteMsr64 (
  IN UINT32  Index,
  IN UINT64  Value
  )
{
  _asm {
    mov     edx, dword ptr [Value + 4]
    mov     eax, dword ptr [Value + 0]
    mov     ecx, Index
    wrmsr
  }
}

