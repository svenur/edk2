/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
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

  Set TimerValue with current tick.

Arguments:

  TimerValue  - Timer value to be set

Returns:

  EFI_SUCCESS - TimerValue is set.

--*/
{
  *TimerValue = EfiReadTsc ();
  return EFI_SUCCESS;
}
