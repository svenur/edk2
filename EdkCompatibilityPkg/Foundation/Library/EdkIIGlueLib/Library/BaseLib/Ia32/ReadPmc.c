/**
  AsmReadPmc function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
AsmReadPmc (
  IN UINT32   PmcIndex
  )
{
  _asm {
    mov     ecx, PmcIndex
    rdpmc
  }
}

