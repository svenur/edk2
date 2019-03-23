/**
  InterlockedCompareExchange32 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT32
EFIAPI
InternalSyncCompareExchange32 (
  IN      volatile UINT32           *Value,
  IN      UINT32                    CompareValue,
  IN      UINT32                    ExchangeValue
  )
{
  _asm {
    mov     ecx, Value
    mov     eax, CompareValue
    mov     edx, ExchangeValue
    lock    cmpxchg [ecx], edx
  }
}

