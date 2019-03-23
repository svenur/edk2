/**
  CpuBreakpoint function.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

//
// Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics
//
void __debugbreak ();

#pragma intrinsic(__debugbreak)

VOID
EFIAPI
CpuBreakpoint (
  VOID
  )
{
  __debugbreak ();
}

