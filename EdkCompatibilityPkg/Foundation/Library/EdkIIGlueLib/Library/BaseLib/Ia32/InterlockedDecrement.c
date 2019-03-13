/**
  InterlockedDecrement function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT32
EFIAPI
InternalSyncDecrement (
  IN      volatile UINT32           *Value
  )
{
  _asm {
    mov     eax, Value
    lock    dec     dword ptr [eax]
    mov     eax, [eax]
  }
}
