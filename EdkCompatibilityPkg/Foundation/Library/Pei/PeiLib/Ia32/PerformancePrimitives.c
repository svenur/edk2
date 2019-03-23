/*++

Copyright (c) 2005, Intel Corporation. All rights reserved.<BR>                                                         
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PerformancePrimitives.c

Abstract:

  Support for Performance library

--*/

#include "TianoCommon.h"
#include "CpuIA32.h"

EFI_STATUS
GetTimerValue (
  OUT UINT64    *TimerValue
  )
/*++

Routine Description:

  Get timer value.

Arguments:

  TimerValue  - Pointer to the returned timer value

Returns:

  EFI_SUCCESS - Successfully got timer value

--*/
{
  *TimerValue = EfiReadTsc ();
  return EFI_SUCCESS;
}
