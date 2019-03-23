/** @file

  Copyright (c) 2013, ARM Ltd. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PerformancePrimitives.c

Abstract:

  Support for Performance library

--*/

#include "TianoCommon.h"

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
  // CPU does not have a timer for ARM....
  ASSERT (FALSE);
  return EFI_SUCCESS;
}
