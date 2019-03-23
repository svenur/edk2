/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  MultS64x64.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Multiples a 64-bit signed integer by a 64-bit signed integer and generates a
  64-bit signed result.

  This function multiples the 64-bit signed value Multiplicand by the 64-bit
  signed value Multiplier and generates a 64-bit signed result. This 64-bit
  signed result is returned.

  If the result overflows, then ASSERT().

  @param  Multiplicand  A 64-bit signed value.
  @param  Multiplier    A 64-bit signed value.

  @return Multiplicand * Multiplier

**/
INT64
EFIAPI
MultS64x64 (
  IN      INT64                     Multiplicand,
  IN      INT64                     Multiplier
  )
{
  return (INT64)MultU64x64 ((UINT64) Multiplicand, (UINT64) Multiplier);
}
