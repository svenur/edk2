/**
  InterlockedCompareExchange32 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

//
// Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics
//
long _InterlockedCompareExchange(
   long volatile * Destination,
   long Exchange,
   long Comperand
);

#pragma intrinsic(_InterlockedCompareExchange)

UINT32
EFIAPI
InternalSyncCompareExchange32 (
  IN      volatile UINT32           *Value,
  IN      UINT32                    CompareValue,
  IN      UINT32                    ExchangeValue
  )
{
  return _InterlockedCompareExchange (Value, ExchangeValue, CompareValue);
}

