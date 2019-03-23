/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  WriteMm7.c
  
Abstract: 


--*/

#include "BaseLibInternals.h"

VOID
EFIAPI
AsmWriteMm7 (
  IN UINT64   Value
  )
{
  _asm {
    movq    mm7, qword ptr [Value]
    emms
  }
}

