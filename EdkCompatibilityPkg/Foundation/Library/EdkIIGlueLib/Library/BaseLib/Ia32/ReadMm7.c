/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  ReadMm7.c
  
Abstract: 



--*/

#include "BaseLibInternals.h"

UINT64
EFIAPI
AsmReadMm7 (
  VOID
  )
{
  _asm {
    push    eax
    push    eax
    movq    [esp], mm7
    pop     eax
    pop     edx
    emms
  }
}

