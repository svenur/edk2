/**
  CpuBreakpoint function.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

//
// Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics
//
unsigned __int64 __readmsr (int register);

#pragma intrinsic(__readmsr)


UINT64
EFIAPI
AsmReadMsr64 (
  IN UINT32  Index
  )
{
  return __readmsr (Index);
}

