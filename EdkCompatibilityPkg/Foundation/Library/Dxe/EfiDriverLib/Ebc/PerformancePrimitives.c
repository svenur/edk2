/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PerformancePrimitives.c

Abstract:

  Support for Performance library

--*/

#include "Tiano.h"  // for ASSERT macro
#include "TianoCommon.h"

EFI_STATUS
GetTimerValue (
  OUT UINT64    *TimerValue
  )
/*++

Routine Description:

  Set TimerValue to 0, which is not expected to be run.

Arguments:

  TimerValue  - Timer value for output

Returns:

  EFI_SUCCESS - Should not be reached.

--*/
{
  //
  // Should not be used for EBC, so assert.
  //
  *TimerValue = 0;
  ASSERT (FALSE);

  return EFI_SUCCESS;
}
