/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  Cpu.c
  
Abstract: 

  Base Library CPU Functions for all architectures.

--*/

#include "BaseLibInternals.h"

/**
  Disables CPU interrupts and returns the interrupt state prior to the disable
  operation.

  Disables CPU interrupts and returns the interrupt state prior to the disable
  operation.

  @retval TRUE  CPU interrupts were enabled on entry to this call.
  @retval FALSE CPU interrupts were disabled on entry to this call.

**/
BOOLEAN
EFIAPI
SaveAndDisableInterrupts (
  VOID
  )
{
  BOOLEAN                           InterruptState;

  InterruptState = GetInterruptState ();
  DisableInterrupts ();
  return InterruptState;
}

/**
  Set the current CPU interrupt state.

  Sets the current CPU interrupt state to the state specified by
  InterruptState. If InterruptState is TRUE, then interrupts are enabled. If
  InterruptState is FALSE, then interrupts are disabled. InterruptState is
  returned.

  @param  InterruptState  TRUE if interrupts should enabled. FALSE if
                          interrupts should be disabled.

  @return InterruptState

**/
BOOLEAN
EFIAPI
SetInterruptState (
  IN      BOOLEAN                   InterruptState
  )
{
  if (InterruptState) {
    EnableInterrupts ();
  } else {
    DisableInterrupts ();
  }
  return InterruptState;
}
