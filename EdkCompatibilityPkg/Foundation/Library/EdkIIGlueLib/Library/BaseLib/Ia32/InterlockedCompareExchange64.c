/**
  InterlockedCompareExchange64 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT64
EFIAPI
InternalSyncCompareExchange64 (
  IN      volatile UINT64           *Value,
  IN      UINT64                    CompareValue,
  IN      UINT64                    ExchangeValue
  )
{
  _asm {
    mov     esi, Value
    mov     eax, dword ptr [CompareValue + 0]
    mov     edx, dword ptr [CompareValue + 4]
    mov     ebx, dword ptr [ExchangeValue + 0]
    mov     ecx, dword ptr [ExchangeValue + 4]
    lock    cmpxchg8b   qword ptr [esi]
  }
}
