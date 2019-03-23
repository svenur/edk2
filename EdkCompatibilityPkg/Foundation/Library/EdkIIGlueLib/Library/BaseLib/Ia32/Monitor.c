/**
  AsmMonitor function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINTN
EFIAPI
AsmMonitor (
  IN      UINTN                     RegisterEax,
  IN      UINTN                     RegisterEcx,
  IN      UINTN                     RegisterEdx
  )
{
  _asm {
    mov     eax, RegisterEax
    mov     ecx, RegisterEcx
    mov     edx, RegisterEdx
    _emit   0x0f             // monitor
    _emit   0x01
    _emit   0xc8
  }
}

