/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  x86GetInterruptState.c
  
Abstract: 

  IA-32/x64 specific functions.

--*/

#include "BaseLibInternals.h"

/**
  Retrieves the current CPU interrupt state.

  Retrieves the current CPU interrupt state. Returns TRUE is interrupts are
  currently enabled. Otherwise returns FALSE.

  @retval TRUE  CPU interrupts are enabled.
  @retval FALSE CPU interrupts are disabled.

**/
BOOLEAN
EFIAPI
GlueGetInterruptState (
  VOID
  )
{
  IA32_EFLAGS32                     EFlags;

  EFlags.UintN = AsmReadEflags ();
  return (BOOLEAN)(EFlags.Bits.IF == 1);
}


