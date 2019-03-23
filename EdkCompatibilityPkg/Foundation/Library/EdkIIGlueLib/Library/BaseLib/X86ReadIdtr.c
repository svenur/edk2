/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  x86ReadIdtr.c
  
Abstract: 

  IA-32/x64 specific functions.

--*/

#include "BaseLibInternals.h"

/**
  Reads the current Interrupt Descriptor Table Register(GDTR) descriptor.

  Reads and returns the current IDTR descriptor and returns it in Idtr. This
  function is only available on IA-32 and X64.

  If Idtr is NULL, then ASSERT().

  @param  Idtr  Pointer to a IDTR descriptor.

**/
VOID
EFIAPI
AsmReadIdtr (
  OUT     IA32_DESCRIPTOR           *Idtr
  )
{
  ASSERT (Idtr != NULL);
  InternalX86ReadIdtr (Idtr);
}
