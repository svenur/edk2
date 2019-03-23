/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  LShiftU64.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Shifts a 64-bit integer left between 0 and 63 bits. The low bits are filled
  with zeros. The shifted value is returned.

  This function shifts the 64-bit value Operand to the left by Count bits. The
  low Count bits are set to zero. The shifted value is returned.

  If Count is greater than 63, then ASSERT().

  @param  Operand The 64-bit operand to shift left.
  @param  Count   The number of bits to shift left.

  @return Operand << Count

**/
UINT64
EFIAPI
GlueLShiftU64 (
  IN      UINT64                    Operand,
  IN      UINTN                     Count
  )
{
  ASSERT (Count < sizeof (Operand) * 8);
  return InternalMathLShiftU64 (Operand, Count);
}
