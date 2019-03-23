/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  MultU64x32.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Multiples a 64-bit unsigned integer by a 32-bit unsigned integer and
  generates a 64-bit unsigned result.

  This function multiples the 64-bit unsigned value Multiplicand by the 32-bit
  unsigned value Multiplier and generates a 64-bit unsigned result. This 64-
  bit unsigned result is returned.

  @param  Multiplicand  A 64-bit unsigned value.
  @param  Multiplier    A 32-bit unsigned value.

  @return Multiplicand * Multiplier

**/
UINT64
EFIAPI
GlueMultU64x32 (
  IN      UINT64                    Multiplicand,
  IN      UINT32                    Multiplier
  )
{
  UINT64                            Result;

  Result = InternalMathMultU64x32 (Multiplicand, Multiplier);

  return Result;
}
