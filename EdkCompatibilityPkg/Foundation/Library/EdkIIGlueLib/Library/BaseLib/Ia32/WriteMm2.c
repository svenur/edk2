/**
  AsmWriteMm2 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

VOID
EFIAPI
AsmWriteMm2 (
  IN UINT64   Value
  )
{
  _asm {
    movq    mm2, qword ptr [Value]
    emms
  }
}

