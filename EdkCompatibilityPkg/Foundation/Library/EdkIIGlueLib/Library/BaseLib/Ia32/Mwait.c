/**
  AsmMwait function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmMwait (
  IN      UINTN                     RegisterEax,
  IN      UINTN                     RegisterEcx
  )
{
  _asm {
    mov     eax, RegisterEax
    mov     ecx, RegisterEcx
    _emit   0x0f              // mwait
    _emit   0x01
    _emit   0xC9
  }
}

