/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SwapBytes64.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Switches the endianess of a 64-bit integer.

  This function swaps the bytes in a 64-bit unsigned value to switch the value
  from little endian to big endian or vice versa. The byte swapped value is
  returned.

  @param  Operand A 64-bit unsigned value.

  @return The byte swaped Operand.

**/
UINT64
EFIAPI
SwapBytes64 (
  IN      UINT64                    Operand
  )
{
  return InternalMathSwapBytes64 (Operand);
}
