/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  CpuBreakpoint.c
  
Abstract: 

  

--*/

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

