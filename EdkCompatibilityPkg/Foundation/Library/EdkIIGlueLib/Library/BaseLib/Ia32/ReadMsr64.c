/**
  AsmReadMsr64 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
AsmReadMsr64 (
  IN UINT32  Index
  )
{
  _asm {
    mov     ecx, Index
    rdmsr
  }
}

