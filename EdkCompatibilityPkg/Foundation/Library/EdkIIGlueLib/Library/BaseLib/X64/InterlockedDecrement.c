/**
  InterlockedDecrement function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

//
// Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics
//
long _InterlockedDecrement(
   long * lpAddend
);

#pragma intrinsic(_InterlockedDecrement)

UINT32
EFIAPI
InternalSyncDecrement (
  IN      volatile UINT32           *Value
  )
{
  return _InterlockedDecrement ((long *)Value);
}

