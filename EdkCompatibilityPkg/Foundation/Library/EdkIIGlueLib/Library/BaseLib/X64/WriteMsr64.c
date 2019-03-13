/**
  CpuBreakpoint function.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"


//
// Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics
//
void __writemsr (unsigned long Register, unsigned __int64 Value);

#pragma intrinsic(__writemsr)

UINT64
EFIAPI
AsmWriteMsr64 (
  IN UINT32  Index,
  IN UINT64  Value
  )
{
  __writemsr (Index, Value);
  return Value;
}

